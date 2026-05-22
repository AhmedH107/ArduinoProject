/*Danfoss PLUS+1 GUIDE Software: [ChParGU2] Version: 2025.3.3*/
/*Type: Basic Development       */
/*Id: 36726       */
/*Sub ID: 0       */
/*Maintenance until: 31-Dec-2099       */
/*Time limit: No limit       */
/*       */
/*       */
#include "header.h"

#ifdef R1
  //This is a workaround for HWD error: P1McX00000506:
  #undef R1
#endif


static void _FNC_123_b(void);
extern U32 _OS_MicroSec(void);
static U32 _LoopStart;
static U32 _ExecTimeOut_us;
int LoopDeadlineTimePassed(void)
{
 U32 now = _OS_MicroSec();
  if( now < _LoopStart) {
    return 0xFFFFFFFF - _LoopStart + now > _ExecTimeOut_us;
  } else {
    return (now - _LoopStart) > _ExecTimeOut_us;
  }
}

static uint32_t _TimeSinceStartupInMilliSeconds = 0;
uint32_t GetTimeSinceStartupInMilliSeconds(void)
{
  return _TimeSinceStartupInMilliSeconds;
}
char * ___SdtGetNextFileName(){
return 0;
}

void _INITMAINTASK(void)
{
}
void _EndLoop_MAINTASK(void){
}
void _BeginLoop_MAINTASK(void){
}
static void _FNC_123_b(void)
{
  LED.RedBrightness = C1p09.DigIn;
}

static void _BeginModule_MAINTASK(void){
  _LoopStart      = _OS_MicroSec();
  _ExecTimeOut_us = OS.ExecTimeOut * 1000;
  _TimeSinceStartupInMilliSeconds = _ElapsedTime[T1M] + _TimeSinceStartupInMilliSeconds;
}

void MAINMODULE_RunOnce(void)
{
  _BeginLoop_MAINTASK();

  _BeginModule_MAINTASK();

_FNC_123_b();

  _EndLoop_MAINTASK();
}
