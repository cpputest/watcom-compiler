/*
 *  ntddmou.h   Mouse device I/O control codes
 *
 * =========================================================================
 *
 *                          Open Watcom Project
 *
 * Copyright (c) 2004-2010 The Open Watcom Contributors. All Rights Reserved.
 *
 *    This file is automatically generated. Do not edit directly.
 *
 * =========================================================================
 */

#ifndef _NTDDMOU_
#define _NTDDMOU_

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file;
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Mouse device name */
#define DD_MOUSE_DEVICE_NAME    "\\Device\\PointerClass"
#define DD_MOUSE_DEVICE_NAME_U  L"\\Device\\PointerClass"

/* Mouse device I/O control codes */
#define IOCTL_MOUSE_QUERY_ATTRIBUTES \
    CTL_CODE( FILE_DEVICE_MOUSE, 0, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_MOUSE_INSERT_DATA \
    CTL_CODE( FILE_DEVICE_MOUSE, 1, METHOD_BUFFERED, FILE_ANY_ACCESS )

/* Mouse button state flags */
#define MOUSE_LEFT_BUTTON_DOWN      0x0001
#define MOUSE_LEFT_BUTTON_UP        0x0002
#define MOUSE_RIGHT_BUTTON_DOWN     0x0004
#define MOUSE_RIGHT_BUTTON_UP       0x0008
#define MOUSE_MIDDLE_BUTTON_DOWN    0x0010
#define MOUSE_MIDDLE_BUTTON_UP      0x0020
#define MOUSE_BUTTON_1_DOWN         MOUSE_LEFT_BUTTON_DOWN
#define MOUSE_BUTTON_1_UP           MOUSE_LEFT_BUTTON_UP
#define MOUSE_BUTTON_2_DOWN         MOUSE_RIGHT_BUTTON_DOWN
#define MOUSE_BUTTON_2_UP           MOUSE_RIGHT_BUTTON_UP
#define MOUSE_BUTTON_3_DOWN         MOUSE_MIDDLE_BUTTON_DOWN
#define MOUSE_BUTTON_3_UP           MOUSE_MIDDLE_BUTTON_UP
#define MOUSE_BUTTON_4_DOWN         0x0040
#define MOUSE_BUTTON_4_UP           0x0080
#define MOUSE_BUTTON_5_DOWN         0x0100
#define MOUSE_BUTTON_5_UP           0x0200
#define MOUSE_WHEEL                 0x0400
#define MOUSE_HWHEEL                0x0800

/* Mouse move flags */
#define MOUSE_MOVE_RELATIVE         0x0000
#define MOUSE_MOVE_ABSOLUTE         0x0001
#define MOUSE_VIRTUAL_DESKTOP       0x0002
#define MOUSE_ATTRIBUTES_CHANGED    0x0004
#if (_WIN32_WINNT >= 0x0600)
    #define MOUSE_MOVE_NOCOALESCE   0x0008
#endif
#define MOUSE_TERMSRV_SRC_SHADOW    0x0100

/* Mouse hardware flags */
#define MOUSE_INPORT_HARDWARE       0x0001
#define MOUSE_I8042_HARDWARE        0x0002
#define MOUSE_SERIAL_HARDWARE       0x0004
#define BALLPOINT_I8042_HARDWARE    0x0008
#define BALLPOINT_SERIAL_HARDWARE   0x0010
#define WHEELMOUSE_I8042_HARDWARE   0x0020
#define WHEELMOUSE_SERIAL_HARDWARE  0x0040
#define MOUSE_HID_HARDWARE          0x0080
#define WHEELMOUSE_HID_HARDWARE     0x0100
#define HORIZONTAL_WHEEL_PRESENT    0x8000

/* Mouse error value base */
#define MOUSE_ERROR_VALUE_BASE  20000

/* Mouse input data */
typedef struct _MOUSE_INPUT_DATA {
    USHORT  UnitId;
    USHORT  Flags;
    union {
        ULONG   Buttons;
        struct {
            USHORT  ButtonFlags;
            USHORT  ButtonData;
        };
    };
    ULONG   RawButtons;
    LONG    LastX;
    LONG    LastY;
    ULONG   ExtraInformation;
} MOUSE_INPUT_DATA;
typedef MOUSE_INPUT_DATA    *PMOUSE_INPUT_DATA;

/* Mouse attributes */
typedef struct _MOUSE_ATTRIBUTES {
    USHORT  MouseIdentifier;
    USHORT  NumberOfButtons;
    USHORT  SampleRate;
    ULONG   InputDataQueueLength;
} MOUSE_ATTRIBUTES;
typedef MOUSE_ATTRIBUTES    *PMOUSE_ATTRIBUTES;

/* Mouse unit identifier parameter */
typedef struct _MOUSE_UNIT_ID_PARAMETER {
    USHORT  UnitId;
} MOUSE_UNIT_ID_PARAMETER;
typedef MOUSE_UNIT_ID_PARAMETER *PMOUSE_UNIT_ID_PARAMETER;

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _NTDDMOU_ */
