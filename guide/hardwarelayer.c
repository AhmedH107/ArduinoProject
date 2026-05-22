


#include <time.h>
#include <stdint.h>

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




OSTYPE OS = { 
    .ExecTimeOut = 10 
};

DIGIN_INTERFACE_STRUCT C1p09 = {
    .DigIn = 1
};

LED_FB_STRUCT LED = {

};

UW   _ElapsedTime[7];


uint32_t _OS_MicroSec(void) {
struct timespec ts;

    clock_gettime(CLOCK_MONOTONIC, &ts);

    return (uint32_t)((ts.tv_sec * 1000000ULL) + (ts.tv_nsec / 1000ULL));
}

