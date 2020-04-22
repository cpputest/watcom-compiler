/*
 *  ifdef.h     Interface definitions
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

#ifndef _IFDEF_
#define _IFDEF_

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file;
#endif

#include <ipifcons.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Network interface object identifier data type */
typedef ULONG32 NET_IF_OBJECT_ID;
typedef ULONG32 *PNET_IF_OBJECT_ID;

/* Network interface compartment identifier data type */
typedef UINT32  NET_IF_COMPARTMENT_ID;
typedef UINT32  *PNET_IF_COMPARTMENT_ID;

/* Network interface network GUID data type */
typedef GUID    NET_IF_NETWORK_GUID;
typedef GUID    *PNET_IF_NETWORK_GUID;

/* Network interface index and type data types */
typedef ULONG       NET_IFINDEX;
typedef ULONG       *PNET_IFINDEX;
typedef UINT16      NET_IFTYPE;
typedef UINT16      *PNET_IFTYPE;
typedef NET_IFINDEX IF_INDEX;
typedef NET_IFINDEX *PIF_INDEX;

/* Network interface operational status flags */
#define NET_IF_OPER_STATUS_DOWN_NOT_AUTHENTICATED   0x00000001L
#define NET_IF_OPER_STATUS_DOWN_NOT_MEDIA_CONNECTED 0x00000002L
#define NET_IF_OPER_STATUS_DORMANT_PAUSED           0x00000004L
#define NET_IF_OPER_STATUS_DORMANT_LOW_POWER        0x00000008L

/* Network interface compartment identifier types */
#define NET_IF_COMPARTMENT_ID_UNSPECIFIED   0
#define NET_IF_COMPARTMENT_ID_PRIMARY       1

/* Network interface object identifier flags */
#define NET_IF_OID_IF_ALIAS         0x00000001L
#define NET_IF_OID_COMPARTMENT_ID   0x00000002L
#define NET_IF_OID_NETWORK_GUID     0x00000003L
#define NET_IF_OID_IF_ENTRY         0x00000004L

/* Macros relating to network GUIDs */
#define NET_SET_UNSPECIFIED_NETWORK_GUID( x )
#define NET_IS_UNSPECIFIED_NETWORK_GUID( x )

/* Network site identifiers */
#define NET_SITEID_UNSPECIFIED  0L
#define NET_SITEID_MAXUSER      0x07FFFFFFL
#define NET_SITEID_MAXSYSTEM    0x0FFFFFFFL

/* Network interface index special value */
#define NET_IFINDEX_UNSPECIFIED 0L
#define IFI_UNSPECIFIED         NET_IFINDEX_UNSPECIFIED

/* Network interface LUID special value */
#define NET_IFLUID_UNSPECIFIED  0

/* Network interface information flags */
#define NIIF_HARDWARE_INTERFACE         0x00000001L
#define NIIF_FILTER_INTERFACE           0x00000002L
#define NIIF_NDIS_WDM_INTERFACE         0x00000020L
#define NIIF_NDIS_ENDPOINT_INTERFACE    0x00000040L
#define NIIF_NDIS_ISCSI_INTERFACE       0x00000080L
#define NIIF_WAN_TUNNEL_TYPE_UNKNOWN    0xFFFFFFFFL

/* Network interface link speed special value */
#define NET_IF_LINK_SPEED_UNKNOWN   0xFFFFFFFFFFFFFFFFLL

/* Network physical location special values */
#define NET_BUS_NUMBER_UNKNOWN      0xFFFFFFFFL
#define NET_SLOT_NUMBER_UNKNOWN     0xFFFFFFFFL
#define NET_FUNCTION_NUMBER_UNKNOWN 0xFFFFFFFFL

/* Interface maximum string size */
#define IF_MAX_STRING_SIZE  256

/* Interface maximum physical address length */
#define IF_MAX_PHYS_ADDRESS_LENGTH  32

/* Network interface administrative status values */
typedef enum _NET_IF_ADMIN_STATUS {
    NET_IF_ADMIN_STATUS_UP      = 1,
    NET_IF_ADMIN_STATUS_DOWN    = 2,
    NET_IF_ADMIN_STATUS_TESTING = 3
} NET_IF_ADMIN_STATUS;
typedef NET_IF_ADMIN_STATUS *PNET_IF_ADMIN_STATUS;

/* Network interface operational status values */
typedef enum _NET_IF_OPER_STATUS {
    NET_IF_OPER_STATUS_UP               = 1,
    NET_IF_OPER_STATUS_DOWN             = 2,
    NET_IF_OPER_STATUS_TESTING          = 3,
    NET_IF_OPER_STATUS_UNKNOWN          = 4,
    NET_IF_OPER_STATUS_DORMANT          = 5,
    NET_IF_OPER_STATUS_NOT_PRESENT      = 6,
    NET_IF_OPER_STATUS_LOWER_LAYER_DOWN = 7
} NET_IF_OPER_STATUS;
typedef NET_IF_OPER_STATUS  *PNET_IF_OPER_STATUS;

/* Network interface receive address types */
typedef enum _NET_IF_RCV_ADDRESS_TYPE {
    NET_IF_RCV_ADDRESS_TYPE_OTHER           = 1,
    NET_IF_RCV_ADDRESS_TYPE_VOLATILE        = 2,
    NET_IF_RCV_ADDRESS_TYPE_NON_VOLATILE    = 3
} NET_IF_RCV_ADDRESS_TYPE;

/* Network interface receive address */
typedef struct _NET_IF_RCV_ADDRESS_LH {
    NET_IF_RCV_ADDRESS_TYPE ifRcvAddressType;
    USHORT                  ifRcvAddressLength;
    USHORT                  ifRcvAddressOffset;
} NET_IF_RCV_ADDRESS_LH;
typedef NET_IF_RCV_ADDRESS_LH   *PNET_IF_RCV_ADDRESS_LH;
#if (NTDDI_VERSION >= 0x06000000)
typedef NET_IF_RCV_ADDRESS_LH   NET_IF_RCV_ADDRESS;
typedef NET_IF_RCV_ADDRESS      *PNET_IF_RCV_ADDRESS;
#endif

/* Network interface alias */
typedef struct _NET_IF_ALIAS_LH {
    USHORT  ifAliasLength;
    USHORT  ifAliasOffset;
} NET_IF_ALIAS_LH;
typedef NET_IF_ALIAS_LH *PNET_IF_ALIAS_LH;
#if (NTDDI_VERSION >= 0x06000000)
typedef NET_IF_ALIAS_LH NET_IF_ALIAS;
typedef NET_IF_ALIAS    *PNET_IF_ALIAS;
#endif

/* Network LUID */
typedef union _NET_LUID_LH {
    ULONG64 Value;
    struct {
        ULONG64 Reserved        : 24;
        ULONG64 NetLuidIndex    : 24;
        ULONG64 IfType          : 16;
    } Info;
} NET_LUID_LH;
typedef NET_LUID_LH *PNET_LUID_LH;
typedef NET_LUID_LH NET_LUID;
typedef NET_LUID    *PNET_LUID;
typedef NET_LUID    IF_LUID;
typedef NET_LUID    *PIF_LUID;

/* Network interface access types */
typedef enum _NET_IF_ACCESS_TYPE {
    NET_IF_ACCESS_LOOPBACK              = 1,
    NET_IF_ACCESS_BROADCAST             = 2,
    NET_IF_ACCESS_POINT_TO_POINT        = 3,
    NET_IF_ACCESS_POINT_TO_MULTI_POINT  = 4,
    NET_IF_ACCESS_MAXIMUM               = 5
} NET_IF_ACCESS_TYPE;
typedef NET_IF_ACCESS_TYPE  *PNET_IF_ACCESS_TYPE;

/* Network interface direction type */
typedef enum _NET_IF_DIRECTION_TYPE {
    NET_IF_DIRECTION_SENDRECEIVE    = 0,
    NET_IF_DIRECTION_SENDONLY       = 1,
    NET_IF_DIRECTION_RECEIVEONLY    = 2,
    NET_IF_DIRECTION_MAXIMUM        = 3
} NET_IF_DIRECTION_TYPE;
typedef NET_IF_DIRECTION_TYPE   *PNET_IF_DIRECTION_TYPE;

/* Network interface connection type */
typedef enum _NET_IF_CONNECTION_TYPE {
    NET_IF_CONNECTION_DEDICATED = 1,
    NET_IF_CONNECTION_PASSIVE   = 2,
    NET_IF_CONNECTION_DEMAND    = 3,
    NET_IF_CONNECTION_MAXIMUM   = 4
} NET_IF_CONNECTION_TYPE;
typedef NET_IF_CONNECTION_TYPE  *PNET_IF_CONNECTION_TYPE;

/* Network interface media connection states */
typedef enum _NET_IF_MEDIA_CONNECT_STATE {
    MediaConnectStateUnknown        = 0,
    MediaConnectStateConnected      = 1,
    MediaConnectStateDisconnected   = 2
} NET_IF_MEDIA_CONNECT_STATE;
typedef NET_IF_MEDIA_CONNECT_STATE  *PNET_IF_MEDIA_CONNECT_STATE;

/* Network interface media duplex states */
typedef enum _NET_IF_MEDIA_DUPLEX_STATE {
    MediaDuplexStateUnknown = 0,
    MediaDuplexStateHalf    = 1,
    MediaDuplexStateFull    = 2
} NET_IF_MEDIA_DUPLEX_STATE;
typedef NET_IF_MEDIA_DUPLEX_STATE   *PNET_IF_MEDIA_DUPLEX_STATE;

/* Network physical location */
typedef struct _NET_PHYSICAL_LOCATION_LH {
    ULONG   BusNumber;
    ULONG   SlotNumber;
    ULONG   FunctionNumber;
} NET_PHYSICAL_LOCATION_LH;
typedef NET_PHYSICAL_LOCATION_LH    *PNET_PHYSICAL_LOCATION_LH;
#if (NTDDI_VERSION >= 0x06000000)
typedef NET_PHYSICAL_LOCATION_LH    NET_PHYSICAL_LOCATION;
typedef NET_PHYSICAL_LOCATION       *PNET_PHYSICAL_LOCATION;
#endif

/* Interface counted string */
typedef struct _IF_COUNTED_STRING_LH {
    USHORT  Length;
    WCHAR   String[IF_MAX_STRING_SIZE + 1];
} IF_COUNTED_STRING_LH;
typedef IF_COUNTED_STRING_LH    *PIF_COUNTED_STRING_LH;
#if (NTDDI_VERSION >= 0x06000000)
typedef IF_COUNTED_STRING_LH    IF_COUNTED_STRING;
typedef IF_COUNTED_STRING       *PIF_COUNTED_STRING;
#endif

/* Interface maximum physical address length */
typedef struct _IF_PHYSICAL_ADDRESS_LH {
    USHORT  Length;
    UCHAR   Address[IF_MAX_PHYS_ADDRESS_LENGTH];
} IF_PHYSICAL_ADDRESS_LH;
typedef IF_PHYSICAL_ADDRESS_LH  *PIF_PHYSICAL_ADDRESS_LH;
#if (NTDDI_VERSION >= 0x06000000)
typedef IF_PHYSICAL_ADDRESS_LH  IF_PHYSICAL_ADDRESS;
typedef IF_PHYSICAL_ADDRESS     *PIF_PHYSICAL_ADDRESS;
#endif

/* Tunnel types */
typedef enum {
    TUNNEL_TYPE_NONE    = 0,
    TUNNEL_TYPE_OTHER   = 1,
    TUNNEL_TYPE_DIRECT  = 2,
    TUNNEL_TYPE_6TO4    = 11,
    TUNNEL_TYPE_ISATAP  = 13,
    TUNNEL_TYPE_TEREDO  = 14,
    TUNNEL_TYPE_IPHTTPS = 15
} TUNNEL_TYPE;
typedef TUNNEL_TYPE *PTUNNEL_TYPE;

/* Interface administrative states */
typedef enum _IF_ADMINISTRATIVE_STATE {
    IF_ADMINISTRATIVE_DISABLED      = 0,
    IF_ADMINISTRATIVE_ENABLED       = 1,
    IF_ADMINISTRATIVE_DEMANDDIAL    = 2
} IF_ADMINISTRATIVE_STATE;
typedef IF_ADMINISTRATIVE_STATE *PIF_ADMINISTRATIVE_STATE;

/* Interface operational status values */
typedef enum {
    IfOperStatusUp              = 1,
    IfOperStatusDown            = 2,
    IfOperStatusTesting         = 3,
    IfOperStatusUnknown         = 4,
    IfOperStatusDormant         = 5,
    IfOperStatusNotPresent      = 6,
    IfOperStatusLowerLayerDown  = 7
} IF_OPER_STATUS;

/* NDIS interface information */
typedef struct _NDIS_INTERFACE_INFORMATION {
    NET_IF_OPER_STATUS          ifOperStatus;
    ULONG                       ifOperStatusFlags;
    NET_IF_MEDIA_CONNECT_STATE  MediaConnectState;
    NET_IF_MEDIA_DUPLEX_STATE   MediaDuplexState;
    ULONG                       ifMtu;
    BOOLEAN                     ifPromiscuousMode;
    BOOLEAN                     ifDeviceWakeUpEnable;
    ULONG64                     XmitLinkSpeed;
    ULONG64                     RcvLinkSpeed;
    ULONG64                     ifLastChange;
    ULONG64                     ifCounterDiscontinuityTime;
    ULONG64                     ifInUnknownProtos;
    ULONG64                     ifInDiscards;
    ULONG64                     ifInErrors;
    ULONG64                     ifHCInOctets;
    ULONG64                     ifHCInUcastPkts;
    ULONG64                     ifHCInMulticastPkts;
    ULONG64                     ifHCInBroadcastPkts;
    ULONG64                     ifHCOutOctets;
    ULONG64                     ifHCOutUcastPkts;
    ULONG64                     ifHCOutMulticastPkts;
    ULONG64                     ifHCOutBroadcastPkts;
    ULONG64                     ifOutErrors;
    ULONG64                     ifOutDiscards;
    ULONG64                     ifHCInUcastOctets;
    ULONG64                     ifHCInMulticastOctets;
    ULONG64                     ifHCInBroadcastOctets;
    ULONG64                     ifHCOutUcastOctets;
    ULONG64                     ifHCOutMulticastOctets;
    ULONG64                     ifHCOutBroadcastOctets;
    NET_IF_COMPARTMENT_ID       CompartmentId;
    ULONG                       SupportedStatistics;
} NDIS_INTERFACE_INFORMATION;
typedef NDIS_INTERFACE_INFORMATION  *PNDIS_INTERFACE_INFORMATION;

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _IFDEF_ */
