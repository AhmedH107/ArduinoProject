 

#ifndef W_CONFIG_H_WAF
#define W_CONFIG_H_WAF

#define CONFIG_64BIT_ARCH 0
#define CONFIG_ACCELEROMETER 1
#define CONFIG_AMBIENT 0
#define CONFIG_ANIN_INPUT_NAMES CONFIG_PWR_SUP_ONE, CONFIG_SENSOR_PWR_OUT_ONE, DummyAnIn, DummyAnIn, CONFIG_DA_INPUT_NAMES
#define CONFIG_APPLICATION_MEDIA_DIR "/home/p1user/media/"
#define CONFIG_APPLOG 1
#define CONFIG_APPLOG_SECOND_PORT 0
#define CONFIG_BLUETOOTH_DISABLE_BREDR_SC 1
#define CONFIG_BLUETOOTH_DISABLE_LINKPOLICY 0
#define CONFIG_BLUETOOTH_DISPLAY_YESNO 1
#define CONFIG_BLUETOOTH_EXPERIMENTAL 0
#define CONFIG_BLUETOOTH_IFACE 0
#define CONFIG_BLUETOOTH_LE 0
#define CONFIG_BLUETOOTH_NAP 0
#define CONFIG_BT_DEVLIST_VIEW_SIZE 12
#define CONFIG_BUILD_P1DPK 0
#define CONFIG_BUZZER_DBUS 1
#define CONFIG_BUZZER_ENABLED 1
#define CONFIG_BUZZER_QML_ENABLED 0
#define CONFIG_CAMERA_DBUS 1
#define CONFIG_CAN_CHANNELS 4
#define CONFIG_CAN_CHANNELS_NAMES "can0", "can1", "can2", "can3"
#define CONFIG_CLOUD_BUFFER_FLASH_SIZE 0
#define CONFIG_CLOUD_BUFFER_RAM_SIZE 0
#define CONFIG_CLOUD_FOTA_ENABLED 0
#define CONFIG_CLOUD_LINK_ENABLED 0
#define CONFIG_CLOUD_SYMBOLS_ENABLED 0
#define CONFIG_CSR_ENABLED 0
#define CONFIG_DAFRC_INPUT 1
#define CONFIG_DAFRC_INPUT_NAMES C1p10,C1p11,C2p08,C2p09
#define CONFIG_DA_INPUT 1
#define CONFIG_DA_INPUT_NAMES C1p05,C2p05
#define CONFIG_DBUS 1
#define CONFIG_DEBUG_API 0
#define CONFIG_DEBUG_HWD 0
#define CONFIG_DELIVERABLE XM100_70493877v342_26.02r02.hwd
#define CONFIG_DIGITAL_CAMERA 0
#define CONFIG_DIGITAL_CAMERA_DBUS 0
#define CONFIG_DIG_INPUT 1
#define CONFIG_DIG_INPUT_NAMES C1p09,C2p10
#define CONFIG_DIG_OUTPUT 1
#define CONFIG_DIG_OUTPUT_NAMES C2p02,C1p12,C2p11,C2p12
#define CONFIG_DIR_API_ENABLED 1
#define CONFIG_DIR_API_FASTREAD 1
#define CONFIG_DISABLE_DM2RD 0
#define CONFIG_DISPLAY_GENERIC_DISPLAY 1
#define CONFIG_DISPLAY_HEIGHT 800
#define CONFIG_DISPLAY_MAX_OBJ_SIZE 2048
#define CONFIG_DISPLAY_PSEUDO_MONOCHROME 0
#define CONFIG_DISPLAY_ROTATED 0
#define CONFIG_DISPLAY_USE_OPEN_GL_ES 1
#define CONFIG_DISPLAY_VIRTUAL_HEIGHT 2400
#define CONFIG_DISPLAY_WIDTH 1280
#define CONFIG_EID_ETHERNET_IFACE 1
#define CONFIG_ENCRYPT_SDGL 0
#define CONFIG_ETHERNET_IFACE 1
#define CONFIG_FB_BPP 24
#define CONFIG_FB_VNC_SERVER 0
#define CONFIG_FB_VNC_SERVER_DBUS 0
#define CONFIG_FLASH_DRIVE_BLOCK_SIZE 262144
#define CONFIG_FLASH_DRIVE_SIZE 33554432
#define CONFIG_FLASH_DRIVE_VIRTUAL_START_ADDRESS 3758096384
#define CONFIG_FRAM_BACKUP_ENABLE 0
#define CONFIG_FRAM_CACHE_ENABLE 1
#define CONFIG_FRAM_PAGE_SIZE 64
#define CONFIG_FULL_UPDATE_FROM_RAMFS 1
#define CONFIG_GNSS_BAUDRATE 38400
#define CONFIG_GNSS_ENABLED 1
#define CONFIG_GNSS_RTK_ENABLED 1
#define CONFIG_GNU_LICENSE_PDF 1
#define CONFIG_GPT [[0, 'keyblob', '1Mib', 34, 2047, '075e2a9b-6af6-448c-a52a-3a6e69f0afff'], [1, 'recovery', '31MiB', 2048, 65535, '43f1961b-ce4c-4e6c-8f22-2230c5d532bd'], [2, 'boot', '64MiB', 65536, 196607, 'f241b915-4241-47fd-b4de-ab5af832a0f6'], [3, 'rootfs', '512MiB', 196608, 1245183, '1c606ef5-f1ac-43b9-9bb5-d5c578580b6b'], [4, 'cache', '256MiB', 1245184, 1769471, 'c7d8648b-76f7-4e2b-b829-e95a83cc7b32'], [5, 'userdata', '-', 1769472, -1, 'ebae5694-6e56-497c-83c6-c4455e12d727']]
#define CONFIG_GPU_GRAPHICS 1
#define CONFIG_GRAPHIC 0
#define CONFIG_GRAPHIC_CHANGE_DETECTION 1
#define CONFIG_GRAPHIC_DEFAULT_MAX_OBJECTS_COUNT 2000
#define CONFIG_GSTREAMER_USE_LIB 1
#define CONFIG_GYROSCOPE 1
#define CONFIG_HAS_DISPLAY 0
#define CONFIG_HAS_GPSD 0
#define CONFIG_HAS_QT_VIEWER 0
#define CONFIG_HAS_TOUCHSCREEN 0
#define CONFIG_HW_IMAGE_VIDEO 1
#define CONFIG_IC_READ_LOG 1
#define CONFIG_IMAGE_VIEWER 0
#define CONFIG_LIBJPEG_FNAME "libjpeg.so.62"
#define CONFIG_LIDAR_NET 1
#define CONFIG_LINUX_USER_SHELL 0
#define CONFIG_M2M_ENABLED 0
#define CONFIG_MAIN_MEDIA_DIR "/media/"
#define CONFIG_MCP_KWP2K_ENABLE_ENABLED 0
#define CONFIG_MEDIA_PLAYER 0
#define CONFIG_MEDIA_PLAYER_AUDIO 1
#define CONFIG_MEDIA_PLAYER_CHANNELS 4
#define CONFIG_MEDIA_PLAYER_DBUS 0
#define CONFIG_MEDIA_TARGET_DIR "/media/p1user/"
#define CONFIG_MIN_DOWNGRADE_VER 302
#define CONFIG_NETWORKING 1
#define CONFIG_NETWORKING_DBUS 1
#define CONFIG_NEW_PASSWORDS_ONLY 0
#define CONFIG_NOBOS_STRING "_NOBOS_70493876_70493872v342_26.02r02"
#define CONFIG_NUMBER_NETS 5
#define CONFIG_NUM_OF_CPU_CORES 4
#define CONFIG_NVAPI_SIZE 2700
#define CONFIG_PDF_VIEWER 0
#define CONFIG_PIPE_DOWNLOAD 1
#define CONFIG_PIXELFORMAT_V4L2_RGB565 1
#define CONFIG_PLG 1
#define CONFIG_POSEFILTER 0
#define CONFIG_POWER_HOLD_ENABLED 1
#define CONFIG_PRODUCTION_TEST_HWD 1
#define CONFIG_PROXY_ENABLED 1
#define CONFIG_PUSH_BUTTONS 0
#define CONFIG_PUSH_BUTTON_LEDS 1
#define CONFIG_PUSH_BUTTON_LED_INDIVIDUAL_CONTROL 0
#define CONFIG_PUSH_BUTTON_LED_PWM_IDX (0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13)
#define CONFIG_PUSH_BUTTON_LED_PWM_TYPE 1
#define CONFIG_PWR_SUP_ONE C1p02
#define CONFIG_QDISC_FQ_REPLACE 1
#define CONFIG_RAM_SIZE 2147483648
#define CONFIG_REQUIRED_MINIMUM_GUIDE_VERSION 2024.2.4
#define CONFIG_RGB_LED 1
#define CONFIG_RGB_LED_COUNT 2
#define CONFIG_RLE_DECODE_OPTIMIZED 1
#define CONFIG_ROM_SIZE 536870400
#define CONFIG_ROOTFS_FSCRYPT 0
#define CONFIG_ROOTFS_RO 0
#define CONFIG_ROP 1
#define CONFIG_ROP_PORT_SIZE 131072
#define CONFIG_ROP_PORT_VIRTUAL_START_ADDRESS 3221225472
#define CONFIG_RS232 1
#define CONFIG_RS232_RXBUF_SIZE 255
#define CONFIG_RS232_TXBUF_SIZE 255
#define CONFIG_RTC 1
#define CONFIG_RTP_PLAYER_QML_ENABLED 0
#define CONFIG_SCRCPY 0
#define CONFIG_SCRCPYD_DBUS 0
#define CONFIG_SECRET_STORAGE 0
#define CONFIG_SECURITY_INTERFACE 0
#define CONFIG_SENSOR_PWR 1
#define CONFIG_SENSOR_PWR_OUT_ONE C1p08
#define CONFIG_SENSOR_PWR_OUT_ONE_VOLTAGE_MODE 1
#define CONFIG_STATUS_LED 1
#define CONFIG_STM32_VCAN 1
#define CONFIG_SYSTEM_USED_RAM 58941440
#define CONFIG_SYS_NUMBER 70493872
#define CONFIG_TOUCH_NUM_STREAMS 2
#define CONFIG_UBOOT_ENV_ENABLED 0
#define CONFIG_USB 1
#define CONFIG_USB_DCAN_NAME "can4"
#define CONFIG_USB_HOST 1
#define CONFIG_USB_RNDIS_IFACE 1
#define CONFIG_USER_VIDEO_CHANNELS 4
#define CONFIG_VIDEO_INPUT 0
#define CONFIG_VIDEO_VOLTAGE_MODE 1
#define CONFIG_VIDEO_VSYNC_ENABLED 0
#define CONFIG_WIFI_APLIST_VIEW_SIZE 12
#define CONFIG_WIFI_IFACE 0
#define CONFIG_WIFI_KNOWNNETS_PATH "/run/mntcache/home/p1user/WiFiKnownNetworks.db"
#define CONFIG_WIFI_KNOWNNETWORKS 0
#define CONFIG_XML_CONFIG_COMMIT_HASH "1730ea2645d65252a664509798b9faec68191f86"
#define CONFIG_DEVICE_XM100 1
#define CONFIG_DEVICE_HW_NAME "XM100"

#endif  
 
 
 
 
 
 
 
 
 
 

#ifndef P1_TYPES_H_
#define P1_TYPES_H_

#ifdef __cplusplus
extern "C" {
#endif

 
 
 

 
 
 

 
#include <stddef.h>   
#include <stdint.h>   
#include <limits.h>   

 
 
 

 
 
 
 
 

#if (CHAR_BIT != 8) && (CHAR_BIT != 16)
    #error PLUS+1 Types: Smallest addressable unit is neither 8-bit nor 16-bit wide!
#endif

 
 
 
 
 

 
 
 

 
 
 

 
 
 

#if defined(INT64_MAX)
    #define P1_TYPES_SUPPORTS_64_BIT_SIGNED      
#endif

#if defined(UINT64_MAX)
    #define P1_TYPES_SUPPORTS_64_BIT_UNSIGNED    
#endif

 
 
 
 
 

#if !defined(TRUE)
    #define TRUE    (1u)
#endif

#if !defined(FALSE)
    #define FALSE   (0u)
#endif

 
 
 
 
 
 

#define UINT_MIN    (0u)
#define UINT8_MIN   (0u)
#define UINT16_MIN  (0u)
#define UINT32_MIN  (0u)
#if defined(P1_TYPES_SUPPORTS_64_BIT_UNSIGNED)
    #define UINT64_MIN  (0u)
#endif

#if (CHAR_BIT == 16)
    #define UINT8_MAX   UINT16_MAX

    #define INT8_MIN    INT16_MIN
    #define INT8_MAX    INT16_MAX
#endif

 
 
 
 
 

#define P1_RETURN_ERROR     (-1)  
#define P1_RETURN_OK        (0)   

 
 
 

 
 
 

#ifdef __cplusplus
typedef bool            bool_t;          
#else
 
typedef _Bool           bool_t;          
#endif

 
typedef unsigned char   uchar_t;         
typedef char            char_t;          

 
typedef unsigned int    uint_t;          
typedef signed int      int_t;           

 
typedef float           float32_t;       
typedef double          float64_t;       

 
typedef int16_t         P1_Return_t;     

//typedef long int        time_t;

 
 
 
 
 

 
#if (CHAR_BIT == 8)
typedef uint8_t  BOOL;
#else
typedef uint16_t BOOL;
#endif

 
#if (CHAR_BIT == 8)
typedef uint8_t  U8;
#else
typedef uint16_t U8;
#endif

typedef uint16_t U16;

typedef uint32_t U32;

#if defined(P1_TYPES_SUPPORTS_64_BIT_UNSIGNED)
typedef uint64_t U64;
#endif

 
#if (CHAR_BIT == 8)
typedef int8_t  S8;
#else
typedef int16_t S8;
#endif

typedef int16_t S16;

typedef int32_t S32;

#if defined(P1_TYPES_SUPPORTS_64_BIT_SIGNED)
typedef int64_t S64;
#endif

 
typedef float32_t F32;
typedef float64_t F64;

 
typedef U8            T;           
typedef char          TL;          
typedef S16           TLW;         
typedef unsigned char LANG;        
typedef const char *  PORT;        
typedef const char    SDPORTTYPE;  

#ifdef __cplusplus
}
#endif

#define IS_INVALID_SOCKET(sd)          (sd <= 0 ? TRUE : FALSE)

#endif  
 

#ifndef DATATYPE_H
#define DATATYPE_H

 
 
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

 

 

 
#ifndef P1_TYPES_H_
#include "p1_types.h"
#endif

 
#ifndef CHAR_DEFINED
typedef char CHAR;
 #define CHAR_DEFINED
#endif
typedef           short  SHORT;
typedef           long   LONG;
typedef unsigned char    UCHAR;
typedef unsigned short   USHORT;
typedef unsigned long    ULONG;
typedef           float  FLOAT;
typedef           double DOUBLE;

typedef unsigned char  BIT;
typedef unsigned char  UB;
typedef signed char    SB;
typedef unsigned short UW;
typedef signed short   SW;
typedef unsigned long  UL;
typedef signed long    SL;


typedef unsigned long SDCOLORTYPE;
typedef TL            SDFILETYPE;

#ifdef FALSE
 #undef FALSE  
#endif
#define FALSE   ((BOOL)0U)

#ifdef TRUE
 #undef TRUE  
#endif
#define TRUE     ((BOOL)(!FALSE))     


typedef struct
{
   uintptr_t   AddressStart;
   uintptr_t   AddressEnd;
}ACCESS_BLOCK_T;

typedef SDCOLORTYPE COLOR;

#define FONT   SDFONTTYPE

 

#define _PalVerStd   1

typedef const struct sd_rgb
{
   U8   Red;
   U8   Green;
   U8   Blue;
   U8   Flags;
}SD_RGB;

typedef const struct sd_palette
{
   U16      Version;
   U16      Length;
   SD_RGB  *Colors;
}SD_PALETTE;

typedef const struct
{
   struct
   {
      U8   Red;
      U8   Green;
      U8   Blue;
      U8   Flags;
   }RGB[256];
}PAL256TYPE;

 

#define ColorPxType   0
typedef const struct CPixelData
{
   U16   Xpos;
   U16   Ypos;
   U16   Color;
}CPIXEL;

typedef const struct PxcType
{
   U16   Xpos;
   U16   Ypos;
   U16   Color;
}PXC;

#define PxType   1
typedef const struct Pixel
{
   U8   Xpos;
   U8   Ypos;
}__attribute__((__packed__)) PIXEL;

 
 
#define RLECode1_8Type   1

 
#define RLECode1_16Type   2

 
#define RLECode8_8Type   3

 
#define RLE_RGB_Code_Type    4
#define RLE_MON_Code_Type    5
#define RLE_RGBA_Code_Type   6

 
#define PXORLEType   3

typedef U32 RLE_RGB_DATA_TYPE;

typedef const struct sd_rle_sprite
{
   S16   w;
   S16   h;
   S16   OrigoX;
   S16   OrigoY;
   U32   TranspColor;
   S16   ColorDepth;
   S16   CodeType;
   U32   Size;
   union
   {
      const void               *Ptr;
      const U8                 *PtrUB;
      const U16                *PtrU16;
      const RLE_RGB_DATA_TYPE  *PtrRLERGBData;
   }Dat;
}SD_RLE_SPRITE_TYPE;


 
#define PXORLEPalType   4
typedef const struct sd_rle_sprite_pal
{
   SD_RLE_SPRITE_TYPE   Image;
   SD_PALETTE          *Palette;
}SD_RLE_SPR_PAL_TYPE;

 
#define PXOBMPPalType   5
typedef const struct sd_bmp_pal
{
   void        *Image;  
   SD_PALETTE  *Palette;
}SD_BMP_PAL_TYPE;

 
#define PXOVideoInType   6
typedef struct sd_videoin
{
   void  *Image;         
}SD_VIDEOIN_TYPE;

 

typedef const struct PXObject
{
   U8    VectorType;
   U32   Length;
   union
   {
      const void           *p;
      SD_RLE_SPRITE_TYPE   *RLESprite;
      SD_RLE_SPR_PAL_TYPE  *RLESprPal;
      SD_BMP_PAL_TYPE      *BMPPal;
      PIXEL                *PixelVector;
      CPIXEL               *ColorPixelVector;
   }PixelData;
}PXOBJECT;

typedef struct PXHeapObject
{
   U8    VectorType;
   U32   Length;
   union
   {
      PIXEL   *PixelVector;
      CPIXEL  *ColorPixelVector;
   }PixelData;
}PXHEAPOBJECT;

#define PXO   PXOBJECT *

 
typedef U32             GUIDEHANDLETYPE;
typedef struct TextData TEXTTYPE;

#define StdFontTypeCode                        0
#define RLEVFixFontTypeCode                    1
#define StdFontTypeCodeSA                      2
#define RLEVFixFontTypeCodeSA                  3
#define RLEFontTypeCode                        4
#define UnicodeRLEFontTypeCode                 5
#define FullUnicodeRLEFontTypeCode             6
#define FullUnicodeRLEFontTypeCodeWithOffset   7
#define FullUnicodeRLEFontTypeCodeAntiAliased  8

#define _LastSupportedFont FullUnicodeRLEFontTypeCodeAntiAliased


typedef const struct FontData
{
   U8      Hight;
   U8      Width;
   PIXEL  *AsciiPtr[256];
}STDFONTTYPE;

typedef const U8 RLEDATATYPE;

typedef const struct rlevfixfontdata
{
   U8            Height;
   U8            Width;
   U8            OrigoX;
   U8            OrigoY;
   RLEDATATYPE  *RleVectP[256];
}RLE_VFIX_FONTTYPE;

typedef const struct rlefontdata
{
   U16                  Height;
   SD_RLE_SPRITE_TYPE  *RleCharP[256];
}RLE_FONTTYPE;

typedef const U8 SD_FONT_RLE_SPRITE_TYPE;

typedef const struct unicoderlefontdata
{
   U16   Height;
   SD_FONT_RLE_SPRITE_TYPE * (*GetFirst)(TLW * Text);
   SD_FONT_RLE_SPRITE_TYPE * (*GetNext)(void);
}UNICODE_RLE_FONTTYPE;

typedef const struct fullunicoderlefontdata
{
   U16               Height;
   GUIDEHANDLETYPE   FontHandle;
   void * (*SetTextStruct)(TEXTTYPE * TextStruct);
   SD_FONT_RLE_SPRITE_TYPE * (*GetNextGlyph)(void);
}FULL_UNICODE_RLE_FONTTYPE;

typedef const struct SDFontData
{
   U16   FontType;
   union
   {
      const void                 *ptr;
      STDFONTTYPE                *StdFontP;
      RLE_VFIX_FONTTYPE          *RleVFixFontP;
      RLE_FONTTYPE               *RleFontP;
      UNICODE_RLE_FONTTYPE       *URleFontP;
      FULL_UNICODE_RLE_FONTTYPE  *FURleFontP;
   }Font;
}SDFONTTYPE;

typedef enum
{
   VisionFileData,
   TxtFknData,
   BmpData,
   HwImgData,
   VectData,
   ViewportData
}SCREEN_AREA_DATA_TYPE_T;

 

struct TextData
{
   SDFONTTYPE   *Font;
   SDCOLORTYPE   ColorCode;
   S32           Xpos;
   S32           Ypos;
   U32           Xlen;
   U32           Ylen;
   U32           Rotation;
   U32           OrigoX;
   U32           OrigoY;
   U8            Justification;
   LANG          CurLang;
   union
   {
      TL    *Text;
      TLW   *UText;
      void   (*pproc)(void);
      void  *TextInstance;
   }  
   Tp;
};

typedef struct GraphData
{
   PXO   ObjectPtr;
   U32   ColorCode;
   S32   Xpos;
   S32   Ypos;
   S32   Rotation;
}GRAPHTYPE;

typedef struct LineData
{
   U32   ColorCode;
   S32   Xstart;
   S32   Ystart;
   S32   Xend;
   S32   Yend;
   S32   Width;
}LINETYPE;

typedef struct HardwareImageData
{
   PXO    ObjectPtr;
   U32    Width;
   U32    Height;
   BOOL   FlipVertical;
   BOOL   FlipHorizontal;
   S32    Xpos;
   S32    Ypos;
   S32    XOffset;
   S32    YOffset;
   S32    Rotation;
   BOOL   AlwaysOnTop;
   U8     Overscan;
   BOOL   ManualCropping;
   U16    HorizontalActive;
   U16    HorizontalDelay;
   U16    VerticalActive;
   U16    VerticalDelay;
}HWIMAGETYPE;

typedef struct GenericViewportData
{
   U32 Uid;
   U32 Width;
   U32 Height;
   S32 Xpos;
   S32 Ypos;
   S32 XOffset;
   S32 YOffset;
   S32 Rotation;
} GENERICVIEWPORTTYPE;

 

typedef struct IOIntData
{
   BOOL  *Active;
   union
   {
      TEXTTYPE                *TextPtr;
      LINETYPE                *LinePtr;
      GRAPHTYPE               *GraphPtr;
      HWIMAGETYPE             *HwImagePtr;
      GENERICVIEWPORTTYPE     *ViewportPtr;
   }DataPtr;
}IODATA;

 

typedef struct VisionFile
{
   S32   Xmin;
   S32   Xmax;
   S32   Ymin;
   S32   Ymax;
   U32   Background;
}VISIONFILE;

 

typedef struct IOFilePtr
{
   union
   {
      VISIONFILE  *VisionFilePtr;
   }IOFileDataPtr;
}IOFILE;

typedef enum {
  NO_SOURCE_OF_FLIP_SIGNAL = 0,
  NOT_FLIP_SIGNAL_YET = 1,
  FLIP_SIGNAL_ARRIVED = 2,
  FLIP_SIGNAL_RST = 3,
  FLIP_SIGNAL_ROT = 4
} flip_signal_t;

#define _SPRINTF_TEXT
#define swprintf   TLW_sprintf

#define True       1
#define False      0

 
#define T1M     0
#define T10M    1
#define T100M   2
#define T1S     3
#define T60S    4
#define T1H     5
#define TLOOP   6

#define OS_STRING_GET_VALUE_REF(s)   s.Value
#define OS_STRING_GET_MAX_LEN(s)     (sizeof(s.Value) - 1)
#define OS_STRING_GET_CUR_LEN_REF(s) &s.CurrentLength

#define Gstr_MAX_LEN(gstr)     (sizeof(gstr.Value) - 1)
#define Gstr_CUR_LEN(gstr)     (gstr.CurrentLength)
#define Gstr2Cstr(gstr) FixGstr(gstr.Value, &gstr.CurrentLength, sizeof(gstr.Value))
#define Cstr2Gstr(gstr, cstr) CopyCstr2Gstr(cstr, gstr.Value, &gstr.CurrentLength, sizeof(gstr.Value))
#define Gstr2Gstr(gstrDst, gstrSrc) CopyGstr2Gstr(gstrDst.Value, &gstrDst.CurrentLength, sizeof(gstrDst.Value), gstrSrc.Value, &gstrSrc.CurrentLength, sizeof(gstrSrc.Value))
#define Gstrs_equal(gstr1, gstr2) ((gstr1.CurrentLength == gstr2.CurrentLength) && (strncmp((const char*)gstr1.Value, (const char*)gstr2.Value, gstr1.CurrentLength) == 0))

static inline const char *FixGstr(U8 *value, U16 *curr_len, U16 max_size)
{
   if (*curr_len >= max_size)
   {
      *curr_len = max_size - 1;
   }
   value[*curr_len] = 0;

   return (const char*)value;
}

static inline void CopyCstr2Gstr(const char* cstr, U8 *value, U16 *curr_len, U16 max_size)
{
   *curr_len = strnlen(cstr, max_size - 1);
   memcpy(value, cstr, *curr_len);
   value[*curr_len] = 0;
}

static inline void CopyGstr2Gstr(U8 *valueDst, U16 *curr_lenDst, U16 max_sizeDst, U8 *valueSrc, U16 *curr_lenSrc, U16 max_sizeSrc)
{
   U16 currLenSrc = *curr_lenSrc;
   if (currLenSrc > max_sizeSrc)
   {
      currLenSrc = max_sizeSrc;
   }
   if (currLenSrc > max_sizeDst)
   {
      currLenSrc = max_sizeDst;
   }
   memcpy(valueDst, valueSrc, currLenSrc);
   *curr_lenDst = currLenSrc;
}

#endif  
 

 


 


 


 


 


 
#ifndef UGRAPH_OS_H
#define UGRAPH_OS_H

extern U8  *_EAsK3BsX;

extern BIT   START;

extern UW   _ElapsedTime[7];

extern UW     _MAINTASKLoop;

extern S32   _ProductionOperation;


extern LANG   _AktSprak;

extern TL   TextOutBuf[1024];

#endif  

 

#ifndef P1_IDAPP_H
#define P1_IDAPP_H

 

 

 
#define _CMS_AppId_T

 
#define _MS_AppId_T

 

typedef U8 _Plus1Ver_T[8];
typedef U8 _TIMEKEY_T[18];
typedef U8 _AppId1_T[62];
typedef U8 _AppId2_T[42];
typedef U8 _AppId3_T[32];

 

extern _AppId1_T  *_AppId1;
extern _AppId2_T  *_AppId2;
extern _AppId3_T  *_AppId3;

 

 

#endif  

 
#ifndef _DIAGDATA_PUBLIC_
#define _DIAGDATA_PUBLIC_

 
#define _RANGE_START(name)   extern const U16 name##Size;    const ACCESS_BLOCK_T   name[] = {                            { (uintptr_t)name, (uintptr_t)&name##Size }
#define _RANGE_VAR(var)       , { ((uintptr_t)&var), (((uintptr_t)&var + sizeof(var)) - 1) }

 
#define _RANGE_ABS(Start, End)   , { (Start), (End) }
#define _RANGE_END(name)         }; const U16 name##Size       = sizeof(name) / sizeof(ACCESS_BLOCK_T);

#define APPL_WRITE_RANGE_START   _RANGE_START(_ApplWriteRange)
#define APPL_WRITE_RANGE_VAR(var)   _RANGE_VAR(var)
#define APPL_WRITE_RANGE_END     _RANGE_END(_ApplWriteRange)

#if CONFIG_64BIT_ARCH
#define _APPL_DIAG_INFO(zipped, packed)    DIAGINFO14_T _ApplDiagInfo =            {                                          defDI14Size,                            defDI14Size >> 8,                       defDI14Size >> 16,                      defDI14Size >> 24,                      14,                                     zipped,                                 packed,                                 0,                                      0,                                      sizeof(ApplTextArray),                  0,                                      sizeof(ApplAddrArray),                  0,                                      0                                    };                                      _RANGE_START(_ApplDiagReadRange)        _RANGE_VAR(_ApplDiagInfo)               _RANGE_VAR(ApplTextArray)               _RANGE_VAR(ApplAddrArray)               _RANGE_VAR(_TEST)      _RANGE_END(_ApplDiagReadRange)
#else
#define _APPL_DIAG_INFO(zipped, packed)    const DIAGINFO14_T _ApplDiagInfo =      {                                          defDI14Size,                            defDI14Size >> 8,                       defDI14Size >> 16,                      defDI14Size >> 24,                      14,                                     zipped,                                 packed,                                 0,                                      (U32)ApplTextArray,                     sizeof(ApplTextArray),                  (U32)ApplAddrArray,                     sizeof(ApplAddrArray),                  0,                                      0                                    };                                      _RANGE_START(_ApplDiagReadRange)        _RANGE_VAR(_ApplDiagInfo)               _RANGE_VAR(ApplTextArray)               _RANGE_VAR(ApplAddrArray)               _RANGE_VAR(_TEST)      _RANGE_END(_ApplDiagReadRange)
#endif
#define _LSBFirst               0x00
#define _MSBFirst               0x01
#define _ZippedFormatUnzipped   0x00
#define _ZippedFormatZipped     0x01
#define _PackedFormatUnpacked   0x00
#define _PackedFormatPacked     0x01

 
#define defDI14Size   (sizeof(DIAGINFO14_T))

 
typedef struct
{
   U16 SizeByte0    : 8;       
   U16 SizeByte1    : 8;       
   U16 SizeByte2    : 8;       
   U16 SizeByte3    : 8;       
   U16 Type         : 8;       
   U16 ZippedFormat : 8;       
   U16 PackedFormat : 8;       
   U16 dummy        : 8;       
   U32 DiagDataAddr;     
   U32 DiagDataLength;   
   U32 DiagAddr;         
   U32 DiagAddrLength;   
   U32 ExtDiagInfoAddr;  
   U32 ExtDiagInfoSize;  
}DIAGINFO14_T;

 
 
#if CONFIG_64BIT_ARCH
extern DIAGINFO14_T _ApplDiagInfo;  
#else
extern const DIAGINFO14_T _ApplDiagInfo;  
#endif

#endif  
 

#ifndef ___NVDATA_PUBLIC_H__
#define ___NVDATA_PUBLIC_H__

 

#ifndef _NVSize
#include "_NVAllocation.h"
#endif

 

#ifndef _NVSize
 #define _NVSize   0
#endif

#if defined(__arm__) || defined(__aarch64__)

 
 #undef __PACKED  
 #define __PACKED(type)   type __attribute__((packed))
#else
 #define __PACKED(type)   type
#endif

 
typedef union
{
   __PACKED(struct)
   {
#ifndef __cplusplus  
      BOOL   vbool; // edited
#endif
      U8     alligne;
   } al16bool[_NVSize];
   __PACKED(struct)
   {
      U8   u8;
      U8   alligne;
   } al16u8[_NVSize];
   __PACKED(struct)
   {
      S8   s8;
      U8   alligne;
   } al16s8[_NVSize];
   U16   u16[_NVSize];
   S16   s16[_NVSize];
   U32   u32[(_NVSize + 1) / 2];
   S32   s32[(_NVSize + 1) / 2];
}_NVOUTU_T;

 

extern _NVOUTU_T   _NVOUTU;
extern U16         _NVINT[];
extern U16         _NVPND[];

 

#endif  

 


#ifndef ___CANDEFS_PUBLIC_H__
#define ___CANDEFS_PUBLIC_H__

#define _canlight


 
typedef struct
{
#ifdef __TMS320C28XX__
   U16   byte7 : 8;
   U16   byte6 : 8;
   U16   byte5 : 8;
   U16   byte4 : 8;
   U16   byte3 : 8;
   U16   byte2 : 8;
   U16   byte1 : 8;
   U16   byte0 : 8;
#else
   U8   byte0;
   U8   byte1;
   U8   byte2;
   U8   byte3;
   U8   byte4;
   U8   byte5;
   U8   byte6;
   U8   byte7;
#endif
}CanData8bitField_T;

 
typedef struct
{
   U16   word3;
   U16   word2;
   U16   word1;
   U16   word0;
}CanData16bitField_T;

 
typedef struct
{
   U32   high;
   U32   low;
}CanData32bitField_T;

 
typedef union
{
   CanData8bitField_T    U8Field;
   CanData16bitField_T   U16Field;
   CanData32bitField_T   U32Field;
}CanData_T;

 
typedef struct
{
   U32   ID;
}CanID29bit_T;

typedef struct
{
   U16   ID;
   U16   dummy;
}CanID11bit_T;

typedef struct
{
   U16   dummy0;
   U16   dummy1       : 13;
   U16   reserved     : 1;
   U16   isRTR        : 1;
   U16   isExtendedID : 1;
}CanIDInfo_T;

typedef union
{
   U32            all;
   CanID11bit_T   std;
   CanID29bit_T   ext;
   CanIDInfo_T    info;
}CanID_T;


 
typedef struct
{
   CanData_T   data;
   CanID_T     canID;
#ifndef _canlight
   U32   timestamp;
#endif
   U8   dataLength;
}CanMessage_T;

#endif  

 

#ifndef ___CANFIFO_PUBLIC_H__
#define ___CANFIFO_PUBLIC_H__

 

 

 

 
typedef struct LinkedTxFIFOMessagePostStruct
{
   CanMessage_T    Message;
   volatile BOOL   TxPending;
   struct LinkedTxFIFOMessagePostStruct *volatile   Next;
}LinkedTxFIFOMessagePost_T;

#endif  

 

#ifndef ___CANSYMBOL_PUBLIC_H__
#define ___CANSYMBOL_PUBLIC_H__

 

 

 

typedef struct _cansym_tx_struct
{
    
   U32          id;        
   BOOL         ext;       
   BOOL         rtr;       
   U8           dlc;       
   U8          *data;      
   BOOL         tx;        
   SDPORTTYPE  *port;      
   BOOL         override;  
   BOOL         pending;   
    
   LinkedTxFIFOMessagePost_T   TxPost;
   struct _cansym_tx_struct   *Next;
}_CANSYM_TX_T;

typedef struct _cansym_rx_struct
{
    
   U32    idfilter;    
   U32    idmask;      
   BOOL   ext;         
   BOOL   rtr;         
   U32    id;          
   U8     dlc;         
   U8     data[8];     
   BOOL   rx;          
   BOOL   overflow;    
   U8    *datafilter;  
   U8    *datamask;    
   U8     masklen;     
#ifndef __cplusplus  
   BOOL protected;     
#endif
   SDPORTTYPE  *port;  
    
   struct _cansym_rx_struct  *Next;
}_CANSYM_RX_T;

 

 

 

void _CANSYM_TX_ADD(_CANSYM_TX_T *CanSymTx);

 

void _CANSYM_RX_ADD(_CANSYM_RX_T *CanSymRx);

 

#endif  

 

#ifndef _APPLOGSYMBOL_PUBLIC_
#define _APPLOGSYMBOL_PUBLIC_

 


#ifdef __TMS320C28XX__
 #include "datatypes.h"
 #include "_ff_flashfile_public.h"
 #define _CODE_ACCESS
extern _CODE_ACCESS int sprintf(char       *_string,
                                const char *_format,
                                ...);

#endif

#if defined(__arm) || defined(__arm__) || defined(__aarch64__)
 #include <stdio.h>    
#endif


 
#define _TEXT_FILE_TYPE    1

#define _ApplSectorStart   0x00000
#define _ApplSectorSize    CONFIG_FLASH_DRIVE_BLOCK_SIZE
#define _Appl1AbsOffs       CONFIG_FLASH_DRIVE_VIRTUAL_START_ADDRESS
#define _Appl2AbsOffs       (CONFIG_FLASH_DRIVE_VIRTUAL_START_ADDRESS + CONFIG_FLASH_DRIVE_SIZE)
#define _LinearFile        _ff_LinearFile
#define _CircularFile      _ff_CircularFile

#define _FILE_SECTOR_ADDR(nr)                           (_Appl1AbsOffs + (_ApplSectorStart + nr * _ApplSectorSize))
#define _CREATE_APPL_FILE_START(name)                   _ff_CREATE_FILE_START(name##_al)
#define _CREATE_APPL_FILE_SECTOR(nr)                    _ff_CREATE_FILE_SECTOR((_ApplSectorStart + nr * _ApplSectorSize), _ApplSectorSize)

#define _CREATE_APPL_FILE_END(name, filetype, rtread) _ff_CREATE_FILE_END(name##_al, filetype)                                                                            MsgFile_T name __attribute__((section(".biosVar"))) =                                                               {                                                                                                                   .Type = _TEXT_FILE_TYPE,                                                                                        .RTRead = &rtread,                                                                                              .hnd = &name##_al                                                                                            };

#define _EXT_DECL_APPL_FILE(name)                       extern MsgFile_T name;

#define _APPL_ST_WRITE             0x01U
#define _APPL_ST_READ              0x02U
#define _APPL_ST_ERASE             0x04U
#define _APPL_ST_EOF               0x08U
#define _APPL_ST_USB_COPY_FAILED   0x10U
#define _APPL_ST_USB_COPY_ACTIVE   0x20U
#define _APPL_ST_INTERNAL          0x40U

#define _APPL_ST_STATUS_FLAGS      (_APPL_ST_EOF | _APPL_ST_USB_COPY_FAILED)
#define _APPL_ST_ACTIVE_FLAGS      (_APPL_ST_WRITE | _APPL_ST_READ | _APPL_ST_ERASE | _APPL_ST_USB_COPY_ACTIVE)

 
#define TEXTMSGSTRUCT_ASCII     0
#define TEXTMSGSTRUCT_UNICODE   1

typedef void (*ProcessTextMsg_T)(TL *s);

 
typedef struct _TextMsgStruct
{
   struct _TextMsgStruct  *Next;
   int                     type;
   union
   {
      ProcessTextMsg_T   GetTextMsg;
      void              *TextInstance;
   }ptr;
   TL             *Tag;
   volatile BOOL   Pending;
}TextMsg_T;

 
typedef struct
{
   TextMsg_T  *First;
   TextMsg_T  *Last;
}TextMsgList_T;

 
typedef struct _MsgFileSruct
{
   U16          Type;
   U16          Status;
   BOOL         Enable;
   BOOL         Erase;
   BOOL         SaveToFile;
   const char  *Filename;
   const char  *Delimiter;
   U32          NoOfEnabledReadSymbols;
   BOOL        *RTRead;
   void        *hnd;

    
   struct
   {
      const char  *Filename;
      const char  *Delimiter;
      U8           NodeNr;
      U16          DoneStatus;
   }usbsave;

   struct _MsgFileSruct  *Next;
   TextMsgList_T          TextMsgList;
   struct
   {
      TextMsgList_T   TextMsgList;
      U32             Count;
   }Postponed;
}MsgFile_T;

 
typedef struct _MsgPortStruct
{
     U16   Type;
   union
   {
      MsgFile_T  *File;
   }First;
   union
   {
      MsgFile_T  *File;
   }Last;
}MsgPort_T;

 

extern MsgPort_T   FlashDrive;
#if (CONFIG_APPLOG_SECOND_PORT == 1)
extern MsgPort_T   InternalDrive;
#endif

 

void _APPL_ASSIGN_FILE(MsgPort_T *Port,
                       MsgFile_T *File);

 

void _APPL_INIT_TEXT(TextMsg_T       *TextMsg,
                     ProcessTextMsg_T Process,
                     TL              *Tag);
void _APPL_INIT_UNICODE_TEXT(TextMsg_T *TextMsg,
                             void      *TextInstance,
                             TL        *Tag);

 

 
void _APPL_SEND_TEXT(MsgFile_T *File,
                     TextMsg_T *Msg);

 

typedef U8 (*__SDTApplogTextIterator_T)(void);

extern __SDTApplogTextIterator_T __SDTGetApplogTextIterator(void *instance);

 

#endif  

 

#ifndef _IC_WRITE_FILE_PUBLIC_H
#define _IC_WRITE_FILE_PUBLIC_H

 

 
typedef struct IcWriteFileWorkOrder_S
{
    
   TL     FileName[sizeof("12345678.1234")];
   BOOL   ValidateChangedFileName;
   BOOL   Erase;
   U32    WriteSize;
   U32    WriteOffset;
   U8     FillChar;
   U8     Status;
   S32    FileSize;
   U32    BufferSize;
   void  *Buffer;
   struct IcWriteFileWorkOrder_S  *Next;
}IcWriteFileWorkOrder_T;

 
typedef struct IcWriteFile_S
{
    
   S32   UsedBlocks;
   S32   FreeBlocks;
   S32   FileSize;
   U32   Status;

    
   IcWriteFileWorkOrder_T   _WorkOrder;
}IcWriteFile_T;

 

 

 
#define _CREATE_WRITEFILE_HANDLER(HandlerName, BuffSize, Type)    Type HandlerName##WorkOrderBuffer[BuffSize];                   IcWriteFile_T   HandlerName;

 
#define _WRITEFILE_INIT(HandlerName)    ICWriteFileInit(&HandlerName,                        HandlerName##WorkOrderBuffer, sizeof(HandlerName##WorkOrderBuffer));

 
#define _WRITEFILE_PROCESS(HandlerName, WriteIndex, NoOfElements, DataBuffer,                            BufferType, FileName, DefaultChar, EraseFile)         ICWriteFileProcess(&HandlerName, WriteIndex, NoOfElements, DataBuffer,                           sizeof(BufferType), FileName, DefaultChar, EraseFile);

 

 
extern void ICWriteFileInit(IcWriteFile_T *Handle,
                            void          *WorkOrderBuffer,
                            U32            WorkOrderBufferSize);

 
extern void ICWriteFileProcess(IcWriteFile_T *Handle,
                               U32            WriteIndex,
                               U32            NoOfElements,
                               void          *DataBuffer,
                               U32            ElementSize,
                               const TL      *FileName,
                               U8             FillChar,
                               BOOL           EraseFile);

#endif  

 

#ifndef _IC_READ_LOG_PUBLIC_H
#define _IC_READ_LOG_PUBLIC_H

 

 
#define _IC_READ_LOG_COMMON_INITIAL_SEQUENCE    U32 Index;                                   U32    PreviousIndex;                        BOOL   Enable;                               BOOL   PreviousEnable;                       U8     Tag;                                  U8     Access;                               U32    ByteLength;                           U32    LineCount;                            U32    Status;

#define _IC_READ_LOG_DEFINE_STRUCT(Type, NoOfElements)    struct                                                 {                                                         _IC_READ_LOG_COMMON_INITIAL_SEQUENCE                   Type   Buffer[NoOfElements];                        }

typedef struct _IC_READ_LOG_S
{
   MsgFile_T *LogFile;
   U8    Status;
   U32   NoOfElements;

    
   U8   ElementSize;
   union
   {
       
      _IC_READ_LOG_DEFINE_STRUCT(U8, 1) * ptrU8;
      _IC_READ_LOG_DEFINE_STRUCT(U16, 1) * ptrU16;
      _IC_READ_LOG_DEFINE_STRUCT(U32, 1) * ptrU32;
   }Handle;
   struct _IC_READ_LOG_S  *Next;
}_IC_READ_LOG_T;

 

 

 
#define                                                                        _CREATE_READLOGFILE_HANDLER(HandlerName, LogFileHandler, BuffSize, Type)    _IC_READ_LOG_DEFINE_STRUCT(Type, BuffSize) HandlerName;                     _IC_READ_LOG_T   HandlerName##WorkOrder = {                                    .LogFile      = &LogFileHandler,                                            .Handle       = { (void *)&HandlerName },                                   .NoOfElements = BuffSize,                                                   .ElementSize  = sizeof(Type)                                             };

 
#define _READLOGFILE_INIT(HandlerName)   IcReadLogInit(&HandlerName##WorkOrder);

 
#define _READLOGFILE_PROCESS(HandlerName)    IcReadLogProcess(&HandlerName##WorkOrder);

 

 
extern void IcReadLogInit(const _IC_READ_LOG_T *WorkOrder);

 
extern void IcReadLogProcess(_IC_READ_LOG_T *WorkOrder);

#endif  

 

#ifndef _FH_FILEH_PUBLIC_H_
#define _FH_FILEH_PUBLIC_H_

 

 

 
#define _fh_T_EEFIFO      1
#define _fh_T_FlashFIFO   2

 
#define _fh_S_Closed   0x00
#define _fh_S_Open     0x01
#define _fh_S_Write    0x02
#define _fh_S_Read     0x04
#define _fh_S_Append   0x08
#define _fh_S_Seek     0x10
#define _fh_S_Secondary 0x80
#define _fh_S_StatusMask 0x0f
#define _fh_S_ApplogMask 0xf0

 
 
 
enum
{
   _fh_E_OK = 0,
   _fh_E_AllreadyOpen,
   _fh_E_AllreadyClosed,
   _fh_E_NotOpen,
   _fh_E_CouldNotRead,
   _fh_E_CouldNotWrite,
   _fh_E_ServiceNotImplemented,
   _fh_E_WrongFileType,
   _fh_E_FileNotInitialized,
   _fh_E_FileNotFound,
   _fh_E_NOK,
   _fh_E_EOF,
   _fh_E_CS,
   _fh_E_WriteAccessDenied,
   _fh_E_ReadAccessDenied,
   _fh_E_Count  
};

 

typedef struct tFileStruct
{
   const U16   type;
   U16
   (*Open)(struct tFileStruct *f,
           U16                 status);
   U16
   (*Close)(struct tFileStruct *f);
#ifndef _WriteOnly
   U16
   (*Read)(struct tFileStruct *f,
           U8                 *dst,
           U16                 len,
           U16                *lread);
   U16
   (*Readln)(struct tFileStruct *f,
             U8                 *dst,
             U16                 maxlen,
             U16                *lread);
#endif
   U16
   (*Write)(struct tFileStruct *f,
            U8                 *src,
            U16                 len);
#ifndef _WriteOnly
   U16
   (*Seek)(struct tFileStruct *f,
           U32                 pos);
   U16
   (*Seekln)(struct tFileStruct *f,
             U32                 pos);
#endif
#ifdef _MsgAvailable
   U16 (*Msg)(struct tFileStruct *f,
              U8                  type,
              void               *p);
#endif
   void  *p;
   BOOL   Initialized;
}fh_FILE;

 

 

 

 

#endif  

 

 


 


 


 


 


 

 

#ifndef _FF_FLASHFILE_PUBLIC_H_
#define _FF_FLASHFILE_PUBLIC_H_

 

 

#ifdef _MsgAvailable
 #ifndef _WriteOnly
  #define  _ff_INIT_FLASH_FILE(info)   { _fh_T_FlashFIFO, ff_Open, ff_Close, ff_Read, ff_Readln, ff_Write, ff_Seek, ff_Seekln, Msg, info, FALSE }
 #else
  #define  _ff_INIT_FLASH_FILE(info)   { _fh_T_FlashFIFO, ff_Open, ff_Close, ff_Write, Msg, info, FALSE }
 #endif
#else
 #ifndef _WriteOnly
  #define   _ff_INIT_FLASH_FILE(info)   { _fh_T_FlashFIFO, ff_Open, ff_Close, ff_Read, ff_Readln, ff_Write, ff_Seek, ff_Seekln, info, FALSE }
 #else
  #define   _ff_INIT_FLASH_FILE(info)   { _fh_T_FlashFIFO, ff_Open, ff_Close, ff_Write, info, FALSE }
 #endif
#endif

#ifdef __TMS320C28XX__
 #define _Bytesizeof(v)   (2 * sizeof(v))
#else
 #define _Bytesizeof(v)   (sizeof(v))
#endif

#define _ff_LinearFile     TRUE
#define _ff_CircularFile   FALSE


#define _ff_SectorHeadderType   1
#define _ff_InitSectorHeadder   { _ff_SectorHeadderType, _Bytesizeof(ff_SECTOR_HEADDER_TYPE), 0 }
#define _NrOfFileSectors(name)                (sizeof(name##_s) / sizeof(ff_SECTOR_TYPE))
#define _ff_CREATE_FILE_START(name)           static ff_SECTOR_TYPE name##_s[] __attribute__ ((section (".biosVar"))) = {
#define _ff_CREATE_FILE_SECTOR(addr, size)    { addr, size, 0, 0, 0, _ff_InitSectorHeadder }
#define _ff_CREATE_FILE_END(name, filetype)   };                                                                                                           static ff_FILE_INFO_TYPE name##_i __attribute__ ((section (".biosVar"))) =                                                      { 0xFFFFFFFFU, 0xFFFFFFFFU, 0, 0, 0, 0, 0, 0, 0, 0, filetype, 0, _NrOfFileSectors(name), name##_s };                            ff_FILE name __attribute__ ((section (".biosVar"))) =                                                                           _ff_INIT_FLASH_FILE(&name##_i);


 

 

typedef fh_FILE ff_FILE;

 
typedef struct
{
   U16 type : 8;
   U16 size : 8;
   U16 status;
}ff_SECTOR_HEADDER_TYPE;

typedef struct
{
   U16 nrecords;
}ff_SECTOR_TAIL_TYPE;

 
typedef struct
{
   uintptr_t address;
   uintptr_t size;
   uintptr_t spos;                  
   uintptr_t writepos;              
   uintptr_t nrecords;              
   ff_SECTOR_HEADDER_TYPE headder;  
    
}ff_SECTOR_TYPE;

 
typedef struct
{
   uintptr_t recsize;        
   uintptr_t fsize;          
   uintptr_t recpos;         
   U16 status;               
   uintptr_t fpos;           
   uintptr_t soffs;          
   U16 roffs;                
   U8 sect;                  
   BOOL rok;                 
   U16 rlen;                 
   BOOL linear;              
   uintptr_t p;              
   U16 nrofsect;             
   ff_SECTOR_TYPE *sectors;  
}ff_FILE_INFO_TYPE;

 

 

 


 
U16 ff_Open(ff_FILE *f,
            U16      status);

 
U16 ff_Close(ff_FILE *f);

 
#ifndef  _WriteOnly
U16 ff_Read(ff_FILE *f,
            U8      *dst,
            U16      len,
            U16     *lread);

#endif

 
#ifndef  _WriteOnly
U16 ff_Readln(ff_FILE *f,
              U8      *dst,
              U16      maxlen,
              U16     *lread);

#endif


 
U16 ff_Write(ff_FILE *f,
             U8      *src,
             U16      len);

 
#ifndef  _WriteOnly
U16 ff_Seek(ff_FILE *f,
            U32   pos);

#endif

 
#ifndef  _WriteOnly
U16 ff_Seekln(ff_FILE *f,
              uintptr_t pos);

#endif

 
#ifdef _MsgAvailable
static U16 ff_Msg(ff_FILE *f,
                  U8       type,
                  void    *p);

#endif

#endif  

 

#ifndef _ROMPARAMETERS_PUBLIC_H
#define _ROMPARAMETERS_PUBLIC_H


 

 

 

#define _FILEMEM

 
#define _MultipleFiles

#define ROPPort   CONFIG_ROP_PORT_VIRTUAL_START_ADDRESS

#ifdef _MultipleFiles
 #ifdef __TMS320C28XX__
  #define _PARAFILE_ADDR(Port, ByteOffset)   ((Port) + ((ByteOffset) >> 1))
 #else
  #define _PARAFILE_ADDR(Port, ByteOffset)   ((Port) + (ByteOffset))
 #endif

 #define _PARAFILE_VIRTUAL_TO_OFFSET(MemoryAddress)    (MemoryAddress - ROPPort)
 #define _PARAFILE_VIRTUAL_TO_ADDRESS(MemoryAddress)   (ROMBuffer +                                                         _PARAFILE_VIRTUAL_TO_OFFSET(MemoryAddress))

#else
 #define _PARAFILE_ADDR(n)   ROPPort
#endif

 

 

extern U8   ROMBuffer[];

 

#ifdef _MultipleFiles
_FILEMEM void *_U__USES_PARAM(const TL *FileType,
                              U32       CRC,
                              BOOL     *Valid,
                              U32       Port,
                              U32       ByteOffset);

#else
_FILEMEM void *_U__USES_PARAM(const TL *FileType,
                              U32       CRC,
                              BOOL     *Valid);

#endif

 

#endif  

 

#ifndef INC__CLOUDSYMBOLS_PUBLIC_H_
#define INC__CLOUDSYMBOLS_PUBLIC_H_

 

 
  
#define D_CLOUDBUF_CIRCULAR_MODE   0
#define D_CLOUDBUF_LINEAR_MODE     1

typedef struct
{
   
  PORT  *port;
  BOOL   pending;
  U16    size;
  void  *data;
   
}TP1_WRITE_PORT_INSTANCE;

void CloudBuffer_process(TP1_WRITE_PORT_INSTANCE*instance);
void CloudBuffer_write(TP1_WRITE_PORT_INSTANCE*instance);
void CloudBuffer_init(TP1_WRITE_PORT_INSTANCE*instance);
	
 
#define CREATE_INITVALUE_TP1_WRITE_PORT_INSTANCE(DataSize, DataAddr)   { NULL, FALSE, DataSize, DataAddr }

 
#define PROCESS_TP1_WRITE_PORT_INSTANCE(InstancePointer)   CloudBuffer_process(InstancePointer)

#define WRITE_TP1_WRITE_PORT_INSTANCE(InstancePointer)     CloudBuffer_write(InstancePointer)

#define INIT_TP1_WRITE_PORT_INSTANCE(InstancePointer)      CloudBuffer_init(InstancePointer)

#define REPORT_NV_CHANGED(p)                               (void)(p)

#endif  

#ifndef _UGRAPH_PORTMEM_PUBLIC_H
#define _UGRAPH_PORTMEM_PUBLIC_H

typedef struct ScreenAreaContent SCREEN_AREA_CONTENT_T;
struct ScreenAreaContent
{
   SCREEN_AREA_CONTENT_T    *Next;
   SCREEN_AREA_CONTENT_T    *Prev;
   FLOAT                    Z_Order;
   BOOL                     ContainsAlpha;
   BOOL                     Used;
   SCREEN_AREA_DATA_TYPE_T   TypeCode;
   IODATA                    IO_Data;
   union
   {
      TEXTTYPE                  Text;
      LINETYPE                  Line;
      GRAPHTYPE                 Graph;
      HWIMAGETYPE               HWImage;
      GENERICVIEWPORTTYPE       ViewPort;
   }  
   Data;
};

typedef struct ScreenAreaDefinition SCREEN_AREA_T;
struct ScreenAreaDefinition
{
   SCREEN_AREA_T            *Next;
   SCREEN_AREA_DATA_TYPE_T   TypeCode;
   U16                       ActualPriority;
   S32                       FastIndex;
   const TL                 *FileName;
   SCREEN_AREA_CONTENT_T    *Content;
   SCREEN_AREA_CONTENT_T    *ContentEnd;
   IOFILE                    IO_File;
   VISIONFILE                VisionFile;
   SCREEN_AREA_T            *Prev;
   SCREEN_AREA_T            *LastArea;
};

typedef union ScreenAreaData SCREEN_AREA_DATA_T;
union ScreenAreaData
{
    
   SCREEN_AREA_T           Area;
   SCREEN_AREA_CONTENT_T   Content;
};

extern SCREEN_AREA_DATA_T DataPool[];
extern U32 DataPoolSize;

#define GRAPHIC_OBJECTS_COUNT(c)         U32 DataPoolSize = 2 + 2 * c;         SCREEN_AREA_DATA_T DataPool[2 + 2 * c];

#endif
#ifndef _DATACONTAINER_H
#define _DATACONTAINER_H

#define id_InfoBlock11 ECUInfoPacked
typedef struct {
    U16 CurrentLength;
    U8 Value[64 + 1];
} OS_STRING_STORAGE_64T;

typedef struct {
    U16 CurrentLength;
    U8 Value[128 + 1];
} OS_STRING_STORAGE_128T;

typedef struct {
    U16 CurrentLength;
    U8 Value[255 + 1];
} OS_STRING_STORAGE_255T;

typedef struct {
    U16 CurrentLength;
    U8 Value[256 + 1];
} OS_STRING_STORAGE_256T;

typedef struct {
    U16 CurrentLength;
    U8 Value[4096 + 1];
} OS_STRING_STORAGE_4096T;

typedef struct {
    U32 Timestamp;
    S16 X_Axis;
    S16 Y_Axis;
    S16 Z_Axis;
    U8 RangeConfig;
    U16 Status;
} ACCELEROMETER_STRUCT;

typedef struct {
    U32 Timestamp;
    S16 X_Axis;
    S16 Y_Axis;
    S16 Z_Axis;
    U8 RangeConfig;
    U16 Status;
} GYROSCOPE_STRUCT;

typedef struct {
    U16 AnIn;
    U16 Voltage;
    BOOL PinStatus;
} ANIN_INTERFACE_STRUCT;

typedef struct {
    U16 AnIn;
    U16 Voltage;
    BOOL DigOut;
    BOOL VoltageMode;
} SENSOR_SUPPLY_INTERFACE_STRUCT;

typedef struct {
    U16 AnIn;
    U16 Voltage;
    U16 DigThresLow;
    U16 DigThresHigh;
    BOOL DigIn;
} ANDIGIN_INTERFACE_STRUCT;

typedef struct {
    BOOL DigIn;
} DIGIN_INTERFACE_STRUCT;

typedef struct {
    U16 AnIn;
    U16 Voltage;
    BOOL DigIn;
    U16 Current;
    U16 Freq;
    U32 Per;
    U16 Count;
    U16 CountAbs;
    U16 Duty;
    S16 QuadCount;
    U16 QuadCountAbs;
    S32 Phase;
    U8 Bias;
    U8 Range;
    U16 DigThresLow;
    U16 DigThresHigh;
    U16 InputMode;
    U16 Status;
    U16 Resistance;
} XIN_INTERFACE_STRUCT;

typedef struct {
    BOOL DigFeedBack;
    BOOL DigOut;
} DIGOUT_INTERFACE_STRUCT;

typedef struct {
    U32 Write;
    U32 Read;
} MASTERPASSWORD_T;

typedef struct {
    BOOL DisableRead;
    BOOL DisableWrite;
    BOOL DisableDownload;
    BOOL Connect;
    MASTERPASSWORD_T MasterPassword;
} DIAGNOSTIC_CONTROL_T;

typedef struct {
    U16 InfoBlockTyp;
    U16 uiNodeIDLo;
    U16 uiNodeIDHi;
    U16 OS[21];
    U16 AppCmplTime[4];
    U16 Plus1Ver[4];
    U16 PNr2[3];
    U16 SerNr0[3];
    U16 BDate[4];
    U16 PNr0[6];
    U16 PRev0[2];
    U16 PNr1[6];
    U16 PRev1[2];
    U16 AppId[26];
    U16 AppType[16];
    U16 AppVer[11];
    U16 ExpP[3];
    U16 BootVer0;
    U16 uiFunctionField1;
    U16 uiFunctionField2;
    U16 CheckSum;
} id_INFOBLOCKTYP11;

typedef struct {
    OS_STRING_STORAGE_64T Type;
    U8 System;
    U8 User;
    U32 Freq;
} CORE_STAT_STRUCT;

typedef struct {
    CORE_STAT_STRUCT Core[4];
    S16 Temp;
} CPU_STAT_STRUCT;

typedef struct {
    U32 Total;
    U32 Used;
    U32 Free;
} RAM_STRUCT;

typedef struct {
    U32 Total;
    U32 Used;
    U32 Free;
} FLASH_STRUCT;

typedef struct {
    BOOL Start;
    U16 ExecTime;
    U16 ExecTimeOut;
    U16 ExecTimeWork;
    U16 ExecTimeAppl;
    U32 ETime;
    U32 LoopCnt;
    CPU_STAT_STRUCT CPU[1];
    RAM_STRUCT RAM;
    FLASH_STRUCT Flash;
    BOOL Reboot;
} OSTYPE;

typedef struct {
    BOOL RedBrightness;
    BOOL GreenBrightness;
} LED_FB_STRUCT;

typedef struct {
    OS_STRING_STORAGE_64T Hostname1;
    OS_STRING_STORAGE_64T Hostname2;
} RTC_NTP_CLIENT_STRUCT;

typedef struct {
    RTC_NTP_CLIENT_STRUCT Client;
} RTC_NTP_STRUCT;

typedef struct {
    U16 Year;
    U8 Month;
    U8 Day;
    U8 DayOfWeek;
    U8 Hour;
    U8 Minute;
    U8 Second;
    BOOL Stop;
    BOOL Set;
    BOOL Auto;
    S16 TimeZoneOffset;
    U16 Status;
    RTC_NTP_STRUCT NTP;
} rt_TYPE;

typedef struct {
    U8 Len;
    BOOL Tx;
    U8 Data[255];
    BOOL Rdy;
    U8 SentLen;
} TX_MSG_STRUCT;

typedef struct {
    U8 Len;
    U8 Data[255];
    BOOL Clear;
    BOOL Rx;
} RX_MSG_STRUCT;

typedef struct {
    U32 Baudrate;
    BOOL TwoStopBits;
    TX_MSG_STRUCT TxMsg;
    RX_MSG_STRUCT RxMsg;
} RS232_STRUCT;

typedef struct {
    BOOL EraseHistory;
} PRODTEST_STRUCT;

typedef struct {
    U16 Status;
    U16 Intern;
} NV_STRUCT;

typedef struct {
    U8 Addr;
} NETTYPE_STRUCT;

typedef struct {
    U8 ServerAddr;
    U8 ClientAddr;
} NODETYPE_STRUCT;

typedef struct {
    NETTYPE_STRUCT Net[5];
    NODETYPE_STRUCT Node;
} IDTYPE_STRUCT;

typedef struct {
    PORT Port;
    U32 Baudrate;
    BOOL BusOff;
    BOOL Reset;
    BOOL DriverError;
    BOOL DriverReset;
    BOOL Overflow;
    BOOL ErrorPassive;
} CAN_INTERFACE_STRUCT;

typedef struct {
    BOOL EraseOnDownload;
} APPLOG_INTERFACE_STRUCT;

typedef struct {
    U8 DNS1[4];
    U8 DNS2[4];
} IPV4_DNS_T;

typedef struct {
    U16 DNS1[8];
    U16 DNS2[8];
} IPV6_DNS_T;

typedef struct {
    IPV4_DNS_T IPv4;
    IPV6_DNS_T IPv6;
} DNS_CONFIG_T;

typedef struct {
    DNS_CONFIG_T Static;
    DNS_CONFIG_T Connection;
} NETWORK_COMMON_T;

typedef struct {
    U8 IP[4];
    U8 NetMask[4];
    U8 Gateway[4];
    U16 GWMetric;
} IPV4_NET_CONFIG_T;

typedef struct {
    U16 IPLinkLocal[8];
    U16 Gateway[8];
    U16 GWMetric;
} IPV6_NET_CONFIG_T;

typedef struct {
    BOOL Enable;
    U16 LeaseTime;
    U8 RangeFrom[4];
    U8 RangeTo[4];
} DHCP_SERVICE_T;

typedef struct {
    BOOL Enable;
    U8 DHCP;
    IPV4_NET_CONFIG_T Static;
    U8 AutoIP[4];
    IPV4_NET_CONFIG_T Connection;
    IPV6_NET_CONFIG_T ConnectionIPv6;
    U8 Mode;
    U16 Status;
    DHCP_SERVICE_T DHCPService;
    U8 MAC[6];
} ETHERNET_T;

typedef struct {
    BOOL Used;
    S16 PRN;
    S16 Elevation;
    S16 Azimuth;
    S32 SNR;
} SAT_INFO_T;

typedef struct {
    U32 Baudrate;
    TX_MSG_STRUCT TxMsg;
    RX_MSG_STRUCT RxMsg;
} GNSS_RTK_UART_T;

typedef struct {
    BOOL Enable;
    OS_STRING_STORAGE_255T ServiceURL;
    OS_STRING_STORAGE_64T Username;
    OS_STRING_STORAGE_64T Password;
    GNSS_RTK_UART_T UART;
    S16 Status;
} GNSS_RTK_CLIENT_T;

typedef struct {
    BOOL Enable;
    BOOL Fixed;
    U32 DetectionInterval;
    U32 DetectionRadius;
    S32 FixedLatitude;
    S32 FixedLongitude;
    S32 FixedAltitude;
    GNSS_RTK_UART_T UART;
    S16 Status;
    U8 UpdateRate;
    U16 MsgMask;
} GNSS_RTK_SERVER_T;

typedef struct {
    GNSS_RTK_CLIENT_T Client;
    GNSS_RTK_SERVER_T Server;
} GNSS_RTK_T;

typedef struct {
    BOOL Enable;
    U8 ConstellationsMask;
    BOOL SyncRTC;
    S16 TimeZoneOffset;
    BOOL HasFix;
    U8 Status;
    BOOL Update;
    U32 FixTimestamp;
    U8 FixSubseconds;
    U8 Mode;
    S32 Latitude;
    U32 LatitudeErr;
    S32 Longitude;
    U32 LongitudeErr;
    U32 Speed;
    U32 SpeedErr;
    U32 Track;
    U32 TrackErr;
    S32 Altitude;
    U32 AltitudeErr;
    S32 Climb;
    U32 ClimbErr;
    U8 SatellitesVisible;
    U8 SatellitesUsed;
    U8 SatellitesInfoStartIndex;
    SAT_INFO_T SatellitesInfo[12];
    OS_STRING_STORAGE_128T FirmwareVersion;
    GNSS_RTK_T RTK;
} GNSS_T;

typedef struct {
    U8 Major;
    U8 Minor;
    U8 Patchlevel;
} INTERLINK_VERSION_T;

typedef struct {
    U8 Ethernet;
    U8 EthernetLocal;
    U8 EthernetNonlocal;
    U8 USBEthernet;
    U8 USBEthernetLocal;
    U8 USBEthernetNonLocal;
    U8 Proxy;
    U8 ProxyLocal;
    U8 ProxyNonLocal;
    U8 All;
    U8 AllLocal;
    U8 AllNonLocal;
} SAFE_MODE_T;

typedef struct {
    U16 Port;
    OS_STRING_STORAGE_255T Hostname;
    BOOL IsEnabled;
    BOOL Enable;
    U16 InactivityTimeout;
    S32 ConStatus;
    OS_STRING_STORAGE_256T ErrorMessage;
    U16 StatusCode;
} INTERLINK_PROXY_T;

typedef struct {
    U8 Operation;
    U32 Value;
} INTERLINK_SYSTEM_COUNTER_T;

typedef struct {
    U8 Operation;
    U32 TxCount;
    U32 RxCount;
} INTERLINK_DATA_COUNTER_T;

typedef struct {
    INTERLINK_VERSION_T Version;
    OS_STRING_STORAGE_64T GatewayDeviceName;
    U32 FuncEnabling;
    SAFE_MODE_T SafeMode;
    U8 DoIPGID[6];
    OS_STRING_STORAGE_64T DoIPPassword;
    U8 EID[6];
    U32 ActiveDoIPProtocols;
    S16 CertificateStatus;
    INTERLINK_PROXY_T Proxy;
    INTERLINK_SYSTEM_COUNTER_T SystemCounter[3];
    INTERLINK_DATA_COUNTER_T DataCounter[13];
} INTERLINK_T;

typedef struct {
    BOOL Enable;
    U16 Volume;
    U16 ReqFreq;
    U8 Waveform;
} BUZZER_T;

typedef struct {
    BOOL BootRecovery;
    BOOL PwrDown;
    BOOL PwrDownStatus;
} POWER_HOLD_SERVICE_T;

typedef struct {
    BOOL SortContent;
    BOOL WantDirs;
    BOOL WantRegularFiles;
    BOOL WantOtherFiles;
    OS_STRING_STORAGE_64T Mask;
} DIR_API_CONTENT_PARAMS_T;

typedef struct {
    BOOL Valid;
    OS_STRING_STORAGE_256T FileName;
    U32 Size;
    BOOL IsRegularFile;
    BOOL IsDirectory;
    BOOL IsOtherFile;
} DIR_API_FILE_T;

typedef struct {
    OS_STRING_STORAGE_4096T Directory;
    OS_STRING_STORAGE_256T AppMediaDir;
    OS_STRING_STORAGE_256T MediaMainDir;
    OS_STRING_STORAGE_256T MediaStorageDir;
    BOOL ForceRefresh;
    U16 RequestedFileIndex;
    U16 FoundFilesCount;
    DIR_API_CONTENT_PARAMS_T ContentParams;
    DIR_API_FILE_T FileRequested[32];
    BOOL FastRead;
    BOOL ReadFile;
    OS_STRING_STORAGE_256T ReadFileName;
    U32 ReadFileIndex;
    U8 ReadFileContent[4096];
    BOOL DeleteFile;
    OS_STRING_STORAGE_256T DeleteFileName;
    BOOL CopyFile;
    OS_STRING_STORAGE_256T CopyFileName;
    OS_STRING_STORAGE_4096T CopyFileDestDir;
    BOOL Unmount;
    U16 OperationStatus;
    U32 AsyncOperationsStartedCount;
    U32 AsyncOperationsCompletedCount;
} DIR_API_T;

typedef struct {
    U8 Red;
    U8 Green;
    U8 Blue;
} RGB_LED_T;

extern BOOL _MAINTASKDisable;
extern BOOL _ApplicationDisableAfterReset;
extern BOOL _GraphicTreeDelivered;
extern ACCELEROMETER_STRUCT Accel;
extern GYROSCOPE_STRUCT Gyro;
extern ANIN_INTERFACE_STRUCT C1p02;
extern SENSOR_SUPPLY_INTERFACE_STRUCT C1p08;
extern ANDIGIN_INTERFACE_STRUCT C1p05;
extern ANDIGIN_INTERFACE_STRUCT C2p05;
extern DIGIN_INTERFACE_STRUCT C1p09;
extern DIGIN_INTERFACE_STRUCT C2p10;
extern XIN_INTERFACE_STRUCT C1p10;
extern XIN_INTERFACE_STRUCT C1p11;
extern XIN_INTERFACE_STRUCT C2p08;
extern XIN_INTERFACE_STRUCT C2p09;
extern DIGOUT_INTERFACE_STRUCT C1p12;
extern DIGOUT_INTERFACE_STRUCT C2p02;
extern DIGOUT_INTERFACE_STRUCT C2p11;
extern DIGOUT_INTERFACE_STRUCT C2p12;
extern DIAGNOSTIC_CONTROL_T ServiceTool;
extern id_INFOBLOCKTYP11 ECUInfoPacked;
extern BOOL CK1S;
extern BOOL CK60S;
extern U16 _ElapsedTime[7];
extern OSTYPE OS;
extern LED_FB_STRUCT LED;
extern rt_TYPE RTC;
extern RS232_STRUCT UART[1];
extern PRODTEST_STRUCT ProdTest;
extern NV_STRUCT NVMem;
extern IDTYPE_STRUCT ID;
extern CAN_INTERFACE_STRUCT CAN[4];
extern APPLOG_INTERFACE_STRUCT AppLog;
extern BOOL _SerialFlashInitializationFailed;
extern NETWORK_COMMON_T NetworkCommon;
extern ETHERNET_T Ethernet;
extern ETHERNET_T USBEthernet;
extern GNSS_T GNSS;
extern INTERLINK_T InterLink;
extern BUZZER_T Buzzer;
extern POWER_HOLD_SERVICE_T PowerHoldService;
extern DIR_API_T DirAPI;
extern RGB_LED_T RGB_LED[2];
#define COLOR_STRUCT_NAME Color
#endif
