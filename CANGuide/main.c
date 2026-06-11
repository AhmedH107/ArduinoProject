#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <fcntl.h>
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

//Aweful way to do this
extern void MAINMODULE_Runonce(void); 
extern void _INITMAINTASK(void);
extern DIGIN_INTERFACE_STRUCT C1p09;
extern LED_FB_STRUCT LED;
extern _CANSYM_TX_T *tx_chain_head;   
extern _CANSYM_RX_T *rx_chain_head;
extern int global_can0_fd;
extern int global_can1_fd;
void can_input_sync(void *var, int dummy_id);
void can_output_sync(void *var, int dummy_id);

#define SPI_DEVICE "/dev/spidev0.0"






int read_linux_gpio(int pin);



typedef void (*IO_Sync_Func)(void* var, int id);

typedef struct {
    void *danfoss_var; 
    int hw_id;          
    IO_Sync_Func func;  
    int last_val; 
} IO_MAPPING;

void sync_digital_in(void* var, int gpio) {
    *(DANFOSS_BOOL*)var = (DANFOSS_BOOL)read_linux_gpio(gpio); 
}

void sync_spi_led(void* var, int module) {
    DANFOSS_BOOL current_val = *(DANFOSS_BOOL*)var;
}


IO_MAPPING my_IO[] = {
    // { &C1p09.DigIn,       24, sync_digital_in, 0 }, 
   // { &LED.RedBrightness,  0, sync_spi_led,    0 }
     { &rx_chain_head,      0, can_input_sync,  0 },
    { &tx_chain_head,      0, can_output_sync, 0 }
};

#define NUM_IO (sizeof(my_IO) / sizeof(my_IO[0]))

void run_sync() {
   for (int i = 0; i < NUM_IO; i++) {
        my_IO[i].func(my_IO[i].danfoss_var, my_IO[i].hw_id);
    }
}

int read_linux_gpio(int pin) {
    char path[64];
    char value_str[3];
    int fd;
    snprintf(path, sizeof(path), "/sys/class/gpio/gpio%d/value", pin); 
    fd = open(path, O_RDONLY); 
    if (fd < 0) {
        return 0;
    }
    if (read(fd, value_str, 3) < 1) {
        close(fd);
        return 0;
    }
    close(fd);
    return (value_str[0] == '1'); 
}


int open_can_socket(const char *name) {
    struct sockaddr_can addr;
    struct ifreq ifr;
    int s = socket(PF_CAN, SOCK_RAW, CAN_RAW);
    if (s < 0) return -1;
    
    strcpy(ifr.ifr_name, name);
    if (ioctl(s, SIOCGIFINDEX, &ifr) < 0) { close(s); return -1; }
    
    addr.can_family = AF_CAN;
    addr.can_ifindex = ifr.ifr_ifindex;
    if (bind(s, (struct sockaddr *)&addr, sizeof(addr)) < 0) { close(s); return -1; }
    
    // Non-blocking configuration ensures read() exits instantly if queue is dry
    int flags = fcntl(s, F_GETFL, 0);
    fcntl(s, F_SETFL, flags | O_NONBLOCK);
    return s;
}


int main() {
    global_can0_fd = open_can_socket("can0");
    global_can1_fd = open_can_socket("can1");

    _INITMAINTASK();
    
    
    for (size_t i = 0; i < 100; i++)
    {
   _ElapsedTime[T1M] = 10;

    run_sync();           // Pulls incoming packets to RAM buffers
    MAINMODULE_Runonce(); // logic
    run_sync();           // Pushes updated transmission flags to sockets

    usleep(10000);
    };
    
  

    return 0;
}