/*Danfoss PLUS+1 GUIDE Software: [ProjectToC] Version: 2025.3.3*/
/*Type: Basic Development*/
/*Id: 36726*/
/*Sub ID: 0*/
/*Maintenance until: 31-Dec-2099*/
/*Time limit: No limit*/
/**/
/**/
#include "header.h"
_Plus1Ver_T _Plus1Ver={'2','0','2','5','.','3','.','3'};
_CMS_AppId_T _AppId1_T _UserIdConst1={'_','_','N','O','B','U','S','E','R','I','D','_','3','6','7','2','6','\0'};
_CMS_AppId_T _AppId1_T _AppIdConst1={'_','_','N','O','B','P','C','O','M','_','T','e','s','t','\0'};
extern void _INITMAINTASK(void);
#define __UTF8_CONT3 0
#define __UTF8_CONT2 1
#define __UTF8_CONT1 2
#define __UTF8_NEW 3
U8 isValidUtf8Byte(U8 nextByte, U8 *state) {
  U8 retval = 1;
  switch(*state) {
    case __UTF8_CONT3: {
      if(0x80 == (nextByte & 0xC0)) {
        *state = __UTF8_CONT2;
      } else {
        retval = 0;
      }
      break;
    }
    case __UTF8_CONT2: {
      if(0x80 == (nextByte & 0xC0)) {
        *state = __UTF8_CONT1;
      } else {
        retval = 0;
      }
      break;
    }
    case __UTF8_CONT1: {
      if(0x80 == (nextByte & 0xC0)) {
        *state = __UTF8_NEW;
      } else {
        retval = 0;
      }
      break;
    }
    case __UTF8_NEW: {
      if(0xF0 == (nextByte & 0xF8)) {
        *state = __UTF8_CONT3;
      } else if(0xE0 == (nextByte & 0xF0)) {
        *state = __UTF8_CONT2;
      } else if(0xC0 == (nextByte & 0xE0)) {
        *state = __UTF8_CONT1;
      } else if(0x00 == (nextByte & 0x80)) {
        *state = __UTF8_NEW;
      } else {
        retval = 0;
      }
      break;
    }
    default: {
      retval = 0;
    }
  }
  return retval;
}
void CopyValidUtf8CodeUnits(U8 * DestUtf8Buffer, const U8 * SourceUtf8Buffer, U16 * Count, BOOL ZeroTerm)
{
	U16 ValidCount = 0;
	U8 state = __UTF8_NEW;
	S32 i = 0;
	for(; i < *Count; i++)
	{
		if( ZeroTerm && !SourceUtf8Buffer[i] ) {
			break;
		} else 
		if(isValidUtf8Byte(SourceUtf8Buffer[i], &state))
		{
			DestUtf8Buffer[i] = SourceUtf8Buffer[i];
			if(__UTF8_NEW == state)
			{
				ValidCount = i + 1;
			}
		} else {
			break;
		}
	}
	*Count = ValidCount;
}
TEST_T _TEST;
void _INITTASK(void)
{
_AppId1 = &_AppIdConst1;
_INITMAINTASK();
}

