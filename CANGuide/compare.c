/*Danfoss PLUS+1 GUIDE Software: [ChParGU2] Version: 2025.3.3*/
/*Type: Professional       */
/*Id: 36727       */
/*Sub ID: 0       */
/*Maintenance until:  8-Apr-2027       */
/*Time limit: No limit       */
/*       */
/*       */
#include "header.h"
#ifdef R1
  //This is a workaround for HWD error: P1McX00000506:
  #undef R1
#endif
static void _FNC_123_b(void);
static U8 aUN16[8] = {0,0,0,0,0,0,0,0};
static _CANSYM_TX_T _CAN_MAINTASK__123_c;
static _CANSYM_RX_T _CAN_MAINTASK__123_d;
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
CAN[0].Baudrate = 250000;
_CANSYM_TX_ADD(&_CAN_MAINTASK__123_c);
_CAN_MAINTASK__123_c.id=104;
_CAN_MAINTASK__123_c.rtr=0;
_CAN_MAINTASK__123_c.ext=0;
_CAN_MAINTASK__123_c.data = aUN16;
_CAN_MAINTASK__123_c.dlc = 8;
_CANSYM_RX_ADD(&_CAN_MAINTASK__123_d);
_CAN_MAINTASK__123_d.protected=0;
_CAN_MAINTASK__123_d.idfilter=104;
_CAN_MAINTASK__123_d.ext=0;
}
void _EndLoop_MAINTASK(void){
}
void _BeginLoop_MAINTASK(void){
}
static void _FNC_123_b(void)
{
static BOOL aUN13;
static U8 aUN13Old1;
static U8 aUN13Old2;
static BOOL aUN15Old1;
if (1==0)
{
aUN13Old1 = 0;
aUN13=0;
}
else
{
if (aUN13Old1 > _ElapsedTime[T1M])
aUN13Old1 = aUN13Old1 - _ElapsedTime[T1M];
else
{
if ((aUN13== 0) || ((1!=0)&&(aUN13Old2 == 0)) )
{if (40 > 20){
aUN13Old1 = 20;
aUN13Old2 = 40 - 20;
}else{
aUN13Old1 = 40;
aUN13Old2 = 0;}
if ((aUN13Old1 ==0) && (40 != 0))
aUN13=0;
else
aUN13=1;
}
else
{
aUN13=0;
aUN13Old1 = aUN13Old2;
}
}
}
_CAN_MAINTASK__123_c.port=CAN[0].Port;
if (aUN13 && !aUN15Old1)
_CAN_MAINTASK__123_c.tx=1;
else
_CAN_MAINTASK__123_c.tx=0;
aUN15Old1 = aUN13;
_CAN_MAINTASK__123_d.port=CAN[0].Port;
}

static void _BeginModule_MAINTASK(void){
  _LoopStart      = _OS_MicroSec();
  _ExecTimeOut_us = OS.ExecTimeOut * 1000;
  _TimeSinceStartupInMilliSeconds = _ElapsedTime[T1M] + _TimeSinceStartupInMilliSeconds;

}

void MAINMODULE_Runonce(void)
{
  _BeginLoop_MAINTASK();

  _BeginModule_MAINTASK();

_FNC_123_b();

  _EndLoop_MAINTASK();
}