/*
 *  dvp.h       DirectDraw video port interfaces
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

#ifndef __DVP_INCLUDED__
#define __DVP_INCLUDED__

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file;
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* DirectDraw video port interface pointers */
typedef interface IDDVideoPortContainer         *LPDDVIDEOPORTCONTAINER;
typedef interface IDirectDrawVideoPort          *LPDIRECTDRAWVIDEOPORT;
typedef interface IDirectDrawVideoPortNotify    *LPDIRECTDRAWVIDEOPORTNOTIFY;

/* DirectDraw video port capability flags */
#define DDVPD_WIDTH             0x00000001L
#define DDVPD_HEIGHT            0x00000002L
#define DDVPD_ID                0x00000004L
#define DDVPD_CAPS              0x00000008L
#define DDVPD_FX                0x00000010L
#define DDVPD_AUTOFLIP          0x00000020L
#define DDVPD_ALIGN             0x00000040L
#define DDVPD_PREFERREDAUTOFLIP 0x00000080L
#define DDVPD_FILTERQUALITY     0x00000100L

/* DirectDraw video port connect flags */
#define DDVPCONNECT_DOUBLECLOCK         0x00000001L
#define DDVPCONNECT_VACT                0x00000002L
#define DDVPCONNECT_INVERTPOLARITY      0x00000004L
#define DDVPCONNECT_DISCARDSVREFDATA    0x00000008L
#define DDVPCONNECT_HALFLINE            0x00000010L
#define DDVPCONNECT_INTERLACED          0x00000020L
#define DDVPCONNECT_SHAREEVEN           0x00000040L
#define DDVPCONNECT_SHAREODD            0x00000080L

/* DirectDraw video port capabilities */
#define DDVPCAPS_AUTOFLIP               0x00000001L
#define DDVPCAPS_INTERLACED             0x00000002L
#define DDVPCAPS_NONINTERLACED          0x00000004L
#define DDVPCAPS_READBACKFIELD          0x00000008L
#define DDVPCAPS_READBACKLINE           0x00000010L
#define DDVPCAPS_SHAREABLE              0x00000020L
#define DDVPCAPS_SKIPEVENFIELDS         0x00000040L
#define DDVPCAPS_SKIPODDFIELDS          0x00000080L
#define DDVPCAPS_SYNCMASTER             0x00000100L
#define DDVPCAPS_VBISURFACE             0x00000200L
#define DDVPCAPS_COLORCONTROL           0x00000400L
#define DDVPCAPS_OVERSAMPLEDVBI         0x00000800L
#define DDVPCAPS_SYSTEMMEMORY           0x00001000L
#define DDVPCAPS_VBIANDVIDEOINDEPENDENT 0x00002000L
#define DDVPCAPS_HARDWAREDEINTERLACE    0x00004000L

/* DirectDraw video port FX flags */
#define DDVPFX_CROPTOPDATA      0x00000001L
#define DDVPFX_CROPX            0x00000002L
#define DDVPFX_CROPY            0x00000004L
#define DDVPFX_INTERLEAVE       0x00000008L
#define DDVPFX_MIRRORLEFTRIGHT  0x00000010L
#define DDVPFX_MIRRORUPDOWN     0x00000020L
#define DDVPFX_PRESHRINKX       0x00000040L
#define DDVPFX_PRESHRINKY       0x00000080L
#define DDVPFX_PRESHRINKXB      0x00000100L
#define DDVPFX_PRESHRINKYB      0x00000200L
#define DDVPFX_PRESHRINKXS      0x00000400L
#define DDVPFX_PRESHRINKYS      0x00000800L
#define DDVPFX_PRESTRETCHX      0x00001000L
#define DDVPFX_PRESTRETCHY      0x00002000L
#define DDVPFX_PRESTRETCHXN     0x00004000L
#define DDVPFX_PRESTRETCHYN     0x00008000L
#define DDVPFX_VBICONVERT       0x00010000L
#define DDVPFX_VBINOSCALE       0x00020000L
#define DDVPFX_IGNOREVBIXCROP   0x00040000L
#define DDVPFX_VBINOINTERLEAVE  0x00080000L

/* DirectDraw video port information flags */
#define DDVP_AUTOFLIP               0x00000001L
#define DDVP_CONVERT                0x00000002L
#define DDVP_CROP                   0x00000004L
#define DDVP_INTERLEAVE             0x00000008L
#define DDVP_MIRRORLEFTRIGHT        0x00000010L
#define DDVP_MIRRORUPDOWN           0x00000020L
#define DDVP_PRESCALE               0x00000040L
#define DDVP_SKIPEVENFIELDS         0x00000080L
#define DDVP_SKIPODDFIELDS          0x00000100L
#define DDVP_SYNCMASTER             0x00000200L
#define DDVP_VBICONVERT             0x00000400L
#define DDVP_VBINOSCALE             0x00000800L
#define DDVP_OVERRIDEBOBWEAVE       0x00001000L
#define DDVP_IGNOREVBIXCROP         0x00002000L
#define DDVP_VBINOINTERLEAVE        0x00004000L
#define DDVP_HARDWAREDEINTERLACE    0x00008000L

/* IDirectDrawVideoPort::GetInputFormats() flags */
#define DDVPFORMAT_VIDEO    0x00000001L
#define DDVPFORMAT_VBI      0x00000002L

/* IDirectDrawVideoPort::SetTargetSurface() flags */
#define DDVPTARGET_VIDEO    0x00000001L
#define DDVPTARGET_VBI      0x00000002L

/* IDirectDrawVideoPort::WaitForSync() flags */
#define DDVPWAIT_BEGIN  0x00000001L
#define DDVPWAIT_END    0x00000002L
#define DDVPWAIT_LINE   0x00000003L

/* IDirectDrawVideoPort::Flip() flags */
#define DDVPFLIP_VIDEO  0x00000001L
#define DDVPFLIP_VBI    0x00000002L

/* IDirectDrawVideoPort::GetVideoSignalStatus() flags */
#define DDVPSQ_NOSIGNAL 0x00000001L
#define DDVPSQ_SIGNALOK 0x00000002L

/* DirectDraw video port bandwidth flags */
#define DDVPB_VIDEOPORT 0x00000001L
#define DDVPB_OVERLAY   0x00000002L
#define DDVPB_TYPE      0x00000004L

/* DirectDraw video port bandwidth capability flags */
#define DDVPBCAPS_SOURCE        0x00000001L
#define DDVPBCAPS_DESTINATION   0x00000002L

/* IDDVideoPortContainer::CreateVideoPort() flags */
#define DDVPCREATE_VBIONLY      0x00000001L
#define DDVPCREATE_VIDEOONLY    0x00000002L

/* DirectDraw video port status flags */
#define DDVPSTATUS_VBIONLY      0x00000001L
#define DDVPSTATUS_VIDEOONLY    0x00000002L

/* DirectDraw video port connection information */
typedef struct _DDVIDEOPORTCONNECT {
    DWORD       dwSize;
    DWORD       dwPortWidth;
    GUID        guidTypeID;
    DWORD       dwFlags;
    ULONG_PTR   dwReserved1;
} DDVIDEOPORTCONNECT;
typedef DDVIDEOPORTCONNECT  *LPDDVIDEOPORTCONNECT;

/* DirectDraw video port capabilities */
typedef struct _DDVIDEOPORTCAPS {
    DWORD   dwSize;
    DWORD   dwFlags;
    DWORD   dwMaxWidth;
    DWORD   dwMaxVBIWidth;
    DWORD   dwMaxHeight;
    DWORD   dwVideoPortID;
    DWORD   dwCaps;
    DWORD   dwFX;
    DWORD   dwNumAutoFlipSurfaces;
    DWORD   dwAlignVideoPortBoundary;
    DWORD   dwAlignVideoPortPrescaleWidth;
    DWORD   dwAlignVideoPortCropBoundary;
    DWORD   dwAlignVideoPortCropWidth;
    DWORD   dwPreshrinkXStep;
    DWORD   dwPreshrinkYStep;
    DWORD   dwNumVBIAutoFlipSurfaces;
    DWORD   dwNumPreferredAutoflip;
    WORD    wNumFilterTapsX;
    WORD    wNumFilterTapsY;
} DDVIDEOPORTCAPS;
typedef DDVIDEOPORTCAPS *LPDDVIDEOPORTCAPS;

/* DirectDraw video port description */
typedef struct _DDVIDEOPORTDESC {
    DWORD               dwSize;
    DWORD               dwFieldWidth;
    DWORD               dwVBIWidth;
    DWORD               dwFieldHeight;
    DWORD               dwMicrosecondsPerField;
    DWORD               dwMaxPixelsPerSecond;
    DWORD               dwVideoPortID;
    DWORD               dwReserved1;
    DDVIDEOPORTCONNECT  VideoPortType;
    ULONG_PTR           dwReserved2;
    ULONG_PTR           dwReserved3;
} DDVIDEOPORTDESC;
typedef DDVIDEOPORTDESC *LPDDVIDEOPORTDESC;

/* DirectDraw video port information */
typedef struct _DDVIDEOPORTINFO {
    DWORD           dwSize;
    DWORD           dwOriginX;
    DWORD           dwOriginY;
    DWORD           dwVPFlags;
    RECT            rCrop;
    DWORD           dwPrescaleWidth;
    DWORD           dwPrescaleHeight;
    LPDDPIXELFORMAT lpddpfInputFormat;
    LPDDPIXELFORMAT lpddpfVBIInputFormat;
    LPDDPIXELFORMAT lpddpfVBIOutputFormat;
    DWORD           dwVBIHeight;
    ULONG_PTR       dwReserved1;
    ULONG_PTR       dwReserved2;
} DDVIDEOPORTINFO;
typedef DDVIDEOPORTINFO *LPDDVIDEOPORTINFO;

/* DirectDraw video port bandwidth */
typedef struct _DDVIDEOPORTBANDWIDTH {
    DWORD       dwSize;
    DWORD       dwCaps;
    DWORD       dwOverlay;
    DWORD       dwColorKey;
    DWORD       dwYInterpolate;
    DWORD       dwYInterpAndColorKey;
    ULONG_PTR   dwReserved1;
    ULONG_PTR   dwReserved2;
} DDVIDEOPORTBANDWIDTH;
typedef DDVIDEOPORTBANDWIDTH    *LPDDVIDEOPORTBANDWIDTH;

/* DirectDraw video port status */
typedef struct _DDVIDEOPORTSTATUS {
    DWORD               dwSize;
    BOOL                bInUse;
    DWORD               dwFlags;
    DWORD               dwReserved1;
    DDVIDEOPORTCONNECT  VideoPortType;
    ULONG_PTR           dwReserved2;
    ULONG_PTR           dwReserved3;
} DDVIDEOPORTSTATUS;
typedef DDVIDEOPORTSTATUS   *LPDDVIDEOPORTSTATUS;

/* DirectDraw video port notify */
typedef struct _DDVIDEOPORTNOTIFY {
    LARGE_INTEGER   ApproximateTimeStamp;
    LONG            lField;
    UINT            dwSurfaceIndex;
    LONG            lDone;
} DDVIDEOPORTNOTIFY;
typedef DDVIDEOPORTNOTIFY   *LPDDVIDEOPORTNOTIFY;

/* DirectDraw video enumeration callbacks */
typedef HRESULT (PASCAL *LPDDENUMVIDEOCALLBACK)( LPDDVIDEOPORTCAPS, LPVOID );

/* GUIDs */
EXTERN_C const IID  IID_IDDVideoPortContainer;
EXTERN_C const IID  IID_IDirectDrawVideoPort;
EXTERN_C const IID  IID_IDirectDrawVideoPortNotify;

/* IDDVideoPortContainer interface */
#undef INTERFACE
#define INTERFACE   IDDVideoPortContainer
DECLARE_INTERFACE_( IDDVideoPortContainer, IUnknown ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, void ** ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* IDDVideoPortContainer methods */
    STDMETHOD( CreateVideoPort )( THIS_ DWORD, LPDDVIDEOPORTDESC, LPDIRECTDRAWVIDEOPORT *, IUnknown * ) PURE;
    STDMETHOD( EnumVideoPorts )( THIS_ DWORD, LPDDVIDEOPORTCAPS, LPVOID, LPDDENUMVIDEOCALLBACK ) PURE;
    STDMETHOD( GetVideoPortConnectInfo )( THIS_ DWORD, LPDWORD, LPDDVIDEOPORTCONNECT ) PURE;
    STDMETHOD( QueryVideoPortStatus )( THIS_ DWORD, LPDDVIDEOPORTSTATUS ) PURE;
};

/* IDirectDrawVideoPort interface */
#undef INTERFACE
#define INTERFACE   IDirectDrawVideoPort
DECLARE_INTERFACE_( IDirectDrawVideoPort, IUnknown ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, void ** ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* IDirectDrawVideoPort methods */
    STDMETHOD( Flip )( THIS_ LPDIRECTDRAWSURFACE, DWORD ) PURE;
    STDMETHOD( GetBandwidthInfo )( THIS_ LPDDPIXELFORMAT, DWORD, DWORD, DWORD, LPDDVIDEOPORTBANDWIDTH ) PURE;
    STDMETHOD( GetColorControls )( THIS_ LPDDCOLORCONTROL ) PURE;
    STDMETHOD( GetInputFormats )( THIS_ LPDWORD, LPDDPIXELFORMAT, DWORD ) PURE;
    STDMETHOD( GetOutputFormats )( THIS_ LPDDPIXELFORMAT, LPDWORD, LPDDPIXELFORMAT, DWORD ) PURE;
    STDMETHOD( GetFieldPriority )( THIS_ LPBOOL ) PURE;
    STDMETHOD( GetVideoLine )( THIS_ LPDWORD ) PURE;
    STDMETHOD( GetVideoSignalStatus )( THIS_ LPDWORD ) PURE;
    STDMETHOD( SetColorControls )( THIS_ LPDDCOLORCONTROL ) PURE;
    STDMETHOD( SetTargetSurface )( THIS_ LPDIRECTDRAWSURFACE, DWORD ) PURE;
    STDMETHOD( StartVideo )( THIS_ LPDDVIDEOPORTINFO ) PURE;
    STDMETHOD( StopVideo )( THIS ) PURE;
    STDMETHOD( UpdateVideo )( THIS_ LPDDVIDEOPORTINFO ) PURE;
    STDMETHOD( WaitForSync )( THIS_ DWORD, DWORD, DWORD ) PURE;
};

/* IDirectDrawVideoPortNotify interface */
#undef INTERFACE
#define INTERFACE   IDirectDrawVideoPortNotify
DECLARE_INTERFACE_( IDirectDrawVideoPortNotify, IUnknown ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, void ** ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* IDirectDrawVideoPortNotify methods */
    STDMETHOD( AcquireNotification )( THIS_ HANDLE *, LPDDVIDEOPORTNOTIFY ) PURE;
    STDMETHOD( ReleaseNotification )( THIS_ HANDLE ) PURE;
};

/* C/C++ object macros */
#if !defined( __cplusplus ) || defined( CINTERFACE )
    #define IVideoPortContainer_QueryInterface( x, p1, p2 ) \
        (x)->lpVtbl->QueryInterface( x, p1, p2 )
    #define IVideoPortContainer_AddRef( x ) \
        (x)->lpVtbl->AddRef( x )
    #define IVideoPortContainer_Release( x ) \
        (x)->lpVtbl->Release( x )
    #define IVideoPortContainer_CreateVideoPort( x, p1, p2, p3, p4 ) \
        (x)->lpVtbl->CreateVideoPort( x, p1, p2, p, p4 )
    #define IVideoPortContainer_EnumVideoPorts( x, p1, p2, p3, p4 ) \
        (x)->lpVtbl->EnumVideoPorts( x, p1, p2, p3, p4 )
    #define IVideoPortContainer_GetVideoPortConnectInfo( x, p1, p2, p3 ) \
        (x)->lpVtbl->GetVideoPortConnectInfo( x, p1, p2, p3 )
    #define IVideoPortContainer_QueryVideoPortStatus( x, p1, p2 ) \
        (x)->lpVtbl->QueryVideoPortStatus( x, p1, p2 )
    #define IVideoPort_QueryInterface( x, p1, p2 ) \
        (x)->lpVtbl->QueryInterface( x, p1, p2 )
    #define IVideoPort_AddRef( x ) \
        (x)->lpVtbl->AddRef( x )
    #define IVideoPort_Release( x ) \
        (x)->lpVtbl->Release( x )
    #define IVideoPort_Flip( x, p1, p2 ) \
        (x)->lpVtbl->Flip( x, p1, p2 )
    #define IVideoPort_GetBandwidthInfo( x, p1, p2, p3, p4, p5 ) \
        (x)->lpVtbl->GetBandwidthInfo( x, p1, p2, p3, p4, p5 )
    #define IVideoPort_GetColorControls( x, p ) \
        (x)->lpVtbl->GetColorControls( x, p )
    #define IVideoPort_GetInputFormats( x, p1, p2, p3 ) \
        (x)->lpVtbl->GetInputFormats( x, p1, p2, p3 )
    #define IVideoPort_GetOutputFormats( x, p1, p2, p3, p4 ) \
        (x)->lpVtbl->GetOutputFormats( x, p1, p2, p3, p4 )
    #define IVideoPort_GetFieldPriority( x, p ) \
        (x)->lpVtbl->GetFieldPriority( x, p )
    #define IVideoPort_GetVideoLine( x, p ) \
        (x)->lpVtbl->GetVideoLine( x, p )
    #define IVideoPort_GetVideoSignalStatus( x, p ) \
        (x)->lpVtbl->GetVideoSignalStatus( x, p )
    #define IVideoPort_SetColorControls( x, p ) \
        (x)->lpVtbl->SetColorControls( x, p )
    #define IVideoPort_SetTargetSurface( x, p1, p2 ) \
        (x)->lpVtbl->SetTargetSurface( x, p1, p2 )
    #define IVideoPort_StartVideo( x, p ) \
        (x)->lpVtbl->StartVideo( x, p )
    #define IVideoPort_StopVideo( x ) \
        (x)->lpVtbl->StopVideo( x )
    #define IVideoPort_UpdateVideo( x, p ) \
        (x)->lpVtbl->UpdateVideo( x, p )
    #define IVideoPort_WaitForSync( x, p1, p2, p3 ) \
        (x)->lpVtbl->WaitForSync( x, p1, p2, p3 )
    #define IVideoPortNotify_QueryInterface( x, p1, p2 ) \
        (x)->lpVtbl->QueryInterface( x, p1, p2 )
    #define IVideoPortNotify_AddRef( x ) \
        (x)->lpVtbl->AddRef( x )
    #define IVideoPortNotify_Release( x ) \
        (x)->lpVtbl->Release( x )
    #define IVideoPortNotify_AcquireNotification( x, p1, p2 ) \
        (x)->lpVtbl->AcquireNotification( x, p1, p2 )
    #define IVideoPortNotify_ReleaseNotification( x, p ) \
        (x)->lpVtbl->ReleaseNotification( x, p )
#else
    #define IVideoPortContainer_QueryInterface( x, p1, p2 ) \
        (x)->QueryInterface( p1, p2 )
    #define IVideoPortContainer_AddRef( x ) \
        (x)->AddRef()
    #define IVideoPortContainer_Release( x ) \
        (x)->Release()
    #define IVideoPortContainer_CreateVideoPort( x, p1, p2, p3, p4 ) \
        (x)->CreateVideoPort( p1, p2, p, p4 )
    #define IVideoPortContainer_EnumVideoPorts( x, p1, p2, p3, p4 ) \
        (x)->EnumVideoPorts( p1, p2, p3, p4 )
    #define IVideoPortContainer_GetVideoPortConnectInfo( x, p1, p2, p3 ) \
        (x)->GetVideoPortConnectInfo( p1, p2, p3 )
    #define IVideoPortContainer_QueryVideoPortStatus( x, p1, p2 ) \
        (x)->QueryVideoPortStatus( p1, p2 )
    #define IVideoPort_QueryInterface( x, p1, p2 ) \
        (x)->QueryInterface( p1, p2 )
    #define IVideoPort_AddRef( x ) \
        (x)->AddRef()
    #define IVideoPort_Release( x ) \
        (x)->Release()
    #define IVideoPort_Flip( x, p1, p2 ) \
        (x)->Flip( p1, p2 )
    #define IVideoPort_GetBandwidthInfo( x, p1, p2, p3, p4, p5 ) \
        (x)->GetBandwidthInfo( p1, p2, p3, p4, p5 )
    #define IVideoPort_GetColorControls( x, p ) \
        (x)->GetColorControls( p )
    #define IVideoPort_GetInputFormats( x, p1, p2, p3 ) \
        (x)->GetInputFormats( p1, p2, p3 )
    #define IVideoPort_GetOutputFormats( x, p1, p2, p3, p4 ) \
        (x)->GetOutputFormats( p1, p2, p3, p4 )
    #define IVideoPort_GetFieldPriority( x, p ) \
        (x)->GetFieldPriority( p )
    #define IVideoPort_GetVideoLine( x, p ) \
        (x)->GetVideoLine( p )
    #define IVideoPort_GetVideoSignalStatus( x, p ) \
        (x)->GetVideoSignalStatus( p )
    #define IVideoPort_SetColorControls( x, p ) \
        (x)->SetColorControls( p )
    #define IVideoPort_SetTargetSurface( x, p1, p2 ) \
        (x)->SetTargetSurface( p1, p2 )
    #define IVideoPort_StartVideo( x, p ) \
        (x)->StartVideo( p )
    #define IVideoPort_StopVideo( x ) \
        (x)->StopVideo()
    #define IVideoPort_UpdateVideo( x, p ) \
        (x)->UpdateVideo( p )
    #define IVideoPort_WaitForSync( x, p1, p2, p3 ) \
        (x)->WaitForSync( p1, p2, p3 )
    #define IVideoPortNotify_QueryInterface( x, p1, p2 ) \
        (x)->QueryInterface( p1, p2 )
    #define IVideoPortNotify_AddRef( x ) \
        (x)->AddRef()
    #define IVideoPortNotify_Release( x ) \
        (x)->Release()
    #define IVideoPortNotify_AcquireNotification( x, p1, p2 ) \
        (x)->AcquireNotification( p1, p2 )
    #define IVideoPortNotify_ReleaseNotification( x, p ) \
        (x)->ReleaseNotification( p )
#endif

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* __DVP_INCLUDED__ */
