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
static _CANSYM_TX_T _CAN_MAINTASK__123_c;
static _CANSYM_RX_T _CAN_MAINTASK__123_d;
static U8 aUN16[8];
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
static BOOL aUN19;
static U8 aUN19Old1;
static U8 aUN19Old2;
       BOOL aUN1;
static BOOL aUN1Old1;
static U8 aUN28;
static BOOL aUN28Old1;
       U8 aUN27;
       U8 aUN26;
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
if (1==0)
{
aUN19Old1 = 0;
aUN19=0;
}
else
{
if (aUN19Old1 > _ElapsedTime[T1M])
aUN19Old1 = aUN19Old1 - _ElapsedTime[T1M];
else
{
if ((aUN19== 0) || ((1!=0)&&(aUN19Old2 == 0)) )
{if (40 > 20){
aUN19Old1 = 20;
aUN19Old2 = 40 - 20;
}else{
aUN19Old1 = 40;
aUN19Old2 = 0;}
if ((aUN19Old1 ==0) && (40 != 0))
aUN19=0;
else
aUN19=1;
}
else
{
aUN19=0;
aUN19Old1 = aUN19Old2;
}
}
}
if (aUN19 && !aUN1Old1)
aUN1=1;
else
aUN1=0;
aUN1Old1 = aUN19;


      if ((aUN1) && !aUN28Old1) {
        if (123 > aUN28) {(aUN28)++;} else {aUN28 = 0;}
      }


aUN28Old1 = aUN1;
_CAN_MAINTASK__123_d.port=CAN[1].Port;
aUN27= (((U8)(aUN28))&(15));
aUN26= (((U8)(aUN28))>>4);
aUN16[0] = aUN27;
aUN16[1] = aUN26;
aUN16[2] = 0;
aUN16[3] = 0;
aUN16[4] = 0;
aUN16[5] = 0;
aUN16[6] = 0;
aUN16[7] = 0;
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
