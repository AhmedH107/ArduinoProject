
#include <time.h>
#include <stdint.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <linux/spi/spidev.h>
#include <net/if.h>
#include <sys/socket.h>
#include <linux/can.h>
#include <linux/can/raw.h>

#define BOOL DANFOSS_BOOL 
#include "70493872.h"
#undef BOOL




typedef void (*IO_Sync_Func)(void* var, int id);

typedef struct {
    void *danfoss_var; //danfoss var  
    int hw_id;          
    IO_Sync_Func func;  // func pointer
    int last_val; // avroid reading last unchanged var
} IO_MAPPING;


_CANSYM_TX_T *tx_chain_head = NULL; 
_CANSYM_RX_T *rx_chain_head = NULL; 

int global_can0_fd = -1;
int global_can1_fd = -1;


OSTYPE OS = { 
    .ExecTimeOut = 10 
};

DIGIN_INTERFACE_STRUCT C1p09 = {
    .DigIn = 1
};

LED_FB_STRUCT LED = {

};

UW   _ElapsedTime[7];

void _CANSYM_TX_ADD(_CANSYM_TX_T *CanSymTx)
{
    CanSymTx->Next = tx_chain_head;
    tx_chain_head = CanSymTx;
};

void _CANSYM_RX_ADD(_CANSYM_RX_T *CanSymRx)
{
    CanSymRx->Next = rx_chain_head; 
    rx_chain_head = CanSymRx;
};

static int get_fd_from_name(const char *name) {
    if (!name) return -1;
    if (strcmp(name, "can0") == 0) return global_can0_fd;
    if (strcmp(name, "can1") == 0) return global_can1_fd;
    return -1;
} //



CAN_INTERFACE_STRUCT CAN[4] = {
    { .Port = "can0" }, { .Port = "can1" }, { .Port = "can2" }, { .Port = "can3" }
};

void can_input_sync(void *var, int dummy_id) {
    (void)dummy_id;
    if (!var) return;

    
    _CANSYM_RX_T *current = *(_CANSYM_RX_T **)var; //
    struct can_frame frame;
    int fds[2] = { global_can0_fd, global_can1_fd };

    // Drain both interfaces completely
    for (int i = 0; i < 2; i++) {
        if (fds[i] < 0) continue;
        
        while (read(fds[i], &frame, sizeof(struct can_frame)) > 0) {
            _CANSYM_RX_T *loop_rx = current; //
            while (loop_rx != NULL) {
                int target_fd = get_fd_from_name(loop_rx->port); //
                if (target_fd == fds[i] && frame.can_id == loop_rx->idfilter) { 
                    memcpy(loop_rx->data, frame.data, 8); 
                    loop_rx->rx = 1;                      
                    loop_rx->dlc = frame.can_dlc;         
                }
                loop_rx = loop_rx->Next; //
            }
        }
    }
};

void can_output_sync(void *var, int dummy_id) {
    (void)dummy_id;
    if (!var) return;

    _CANSYM_TX_T *current = *(_CANSYM_TX_T **)var; //
    struct can_frame frame;

    while (current != NULL) {
        if (current->tx == 1) { // Block has requested a broadcast pulse
            int target_fd = get_fd_from_name(current->port); //
            if (target_fd >= 0) {
                memset(&frame, 0, sizeof(struct can_frame));
                frame.can_id = current->id;   //
                frame.can_dlc = current->dlc; //
                memcpy(frame.data, current->data, current->dlc); //
                
                write(target_fd, &frame, sizeof(struct can_frame));
            }
            current->tx = 0; // Clear immediately to acknowledge
        }
        current = current->Next; // Step to the next block
    }
};



uint32_t _OS_MicroSec(void) {
struct timespec ts;

    clock_gettime(CLOCK_MONOTONIC, &ts);

    return (uint32_t)((ts.tv_sec * 1000000ULL) + (ts.tv_nsec / 1000ULL));
}

