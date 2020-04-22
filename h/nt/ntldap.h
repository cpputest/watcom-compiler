/*
 *  ntldap.h    NT Lightweight Data Access Protocol (LDAP) definitions
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

#ifndef NT_LDAP_H
#define NT_LDAP_H

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file;
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* LDAP object identifiers */
#define LDAP_SERVER_FORCE_UPDATE_OID            "1.2.840.113556.1.4.1974"
#define LDAP_SERVER_FORCE_UPDATE_OID_W          L"1.2.840.113556.1.4.1974"
#define LDAP_SERVER_PERMISSIVE_MODIFY_OID       "1.2.840.113556.1.4.1413"
#define LDAP_SERVER_PERMISSIVE_MODIFY_OID_W     L"1.2.840.113556.1.4.1413"
#define LDAP_SERVER_SHOW_DELETED_OID            "1.2.840.113556.1.4.417"
#define LDAP_SERVER_SHOW_DELETED_OID_W          L"1.2.840.113556.1.4.417"
#define LDAP_SERVER_SHOW_RECYCLED_OID           "1.2.840.113556.1.4.2064"
#define LDAP_SERVER_SHOW_RECYCLED_OID_W         L"1.2.840.113556.1.4.2064"
#define LDAP_SERVER_SHOW_DEACTIVATED_LINK_OID   "1.2.840.113556.1.4.2065"
#define LDAP_SERVER_SHOW_DEACTIVATED_LINK_OID_W L"1.2.840.113556.1.4.2065"
#define LDAP_SERVER_CROSSDOM_MOVE_TARGET_OID    "1.2.840.113556.1.4.521"
#define LDAP_SERVER_CROSSDOM_MOVE_TARGET_OID_W  L"1.2.840.113556.1.4.521"
#define LDAP_SERVER_NOTIFICATION_OID            "1.2.840.113556.1.4.528"
#define LDAP_SERVER_NOTIFICATION_OID_W          L"1.2.840.113556.1.4.528"
#define LDAP_SERVER_SHUTDOWN_NOTIFY_OID         "1.2.840.113556.1.4.1907"
#define LDAP_SERVER_SHUTDOWN_NOTIFY_OID_W       L"1.2.840.113556.1.4.1907"
#define LDAP_SERVER_LAZY_COMMIT_OID             "1.2.840.113556.1.4.619"
#define LDAP_SERVER_LAZY_COMMIT_OID_W           L"1.2.840.113556.1.4.619"
#define LDAP_SERVER_SD_FLAGS_OID                "1.2.840.113556.1.4.801"
#define LDAP_SERVER_SD_FLAGS_OID_W              L"1.2.840.113556.1.4.801"
#define LDAP_SERVER_TREE_DELETE_OID             "1.2.840.113556.1.4.805"
#define LDAP_SERVER_TREE_DELETE_OID_W           L"1.2.840.113556.1.4.805"
#define LDAP_SERVER_ASQ_OID                     "1.2.840.113556.1.4.1504"
#define LDAP_SERVER_ASQ_OID_W                   L"1.2.840.113556.1.4.1504"
#define LDAP_SERVER_DIRSYNC_OID                 "1.2.840.113556.1.4.841"
#define LDAP_SERVER_DIRSYNC_OID_W               L"1.2.840.113556.1.4.841"
#define LDAP_SERVER_EXTENDED_DN_OID             "1.2.840.113556.1.4.529"
#define LDAP_SERVER_EXTENDED_DN_OID_W           L"1.2.840.113556.1.4.529"
#define LDAP_SERVER_VERIFY_NAME_OID             "1.2.840.113556.1.4.1338"
#define LDAP_SERVER_VERIFY_NAME_OID_W           L"1.2.840.113556.1.4.1338"
#define LDAP_SERVER_DOMAIN_SCOPE_OID            "1.2.840.113556.1.4.1339"
#define LDAP_SERVER_DOMAIN_SCOPE_OID_W          L"1.2.840.113556.1.4.1339"
#define LDAP_SERVER_SEARCH_OPTIONS_OID          "1.2.840.113556.1.4.1340"
#define LDAP_SERVER_SEARCH_OPTIONS_OID_W        L"1.2.840.113556.1.4.1340"
#define LDAP_SERVER_QUOTA_CONTROL_OID           "1.2.840.113556.1.4.1852"
#define LDAP_SERVER_QUOTA_CONTROL_OID_W         L"1.2.840.113556.1.4.1852"
#define LDAP_SERVER_COPY_CONTROL_OID            "1.2.840.113556.1.4.1919"
#define LDAP_SERVER_COPY_CONTROL_OID_W          L"1.2.840.113556.1.4.1919"
#define LDAP_SERVER_RANGE_RETRIEVAL_NOERR_OID   "1.2.840.113556.1.4.1948"
#define LDAP_SERVER_RANGE_RETRIEVAL_NOERR_OID_W L"1.2.840.113556.1.4.1948"
#define LDAP_SERVER_DN_INPUT_OID                "1.2.840.113556.1.4.2026"
#define LDAP_SERVER_DN_INPUT_OID_W              L"1.2.840.113556.1.4.2026"

/* LDAP operational attributes */
#define LDAP_OPATT_BECOME_DOM_MASTER            "becomeDomainMaster"
#define LDAP_OPATT_BECOME_DOM_MASTER_W          L"becomeDomainMaster"
#define LDAP_OPATT_BECOME_RID_MASTER            "becomeRidMaster"
#define LDAP_OPATT_BECOME_RID_MASTER_W          L"becomeRidMaster"
#define LDAP_OPATT_BECOME_SCHEMA_MASTER         "becomeSchemaMaster"
#define LDAP_OPATT_BECOME_SCHEMA_MASTER_W       L"becomeSchemaMaster"
#define LDAP_OPATT_RECALC_HIERARCHY             "recalcHierarchy"
#define LDAP_OPATT_RECALC_HIERARCHY_W           L"recalcHierarchy"
#define LDAP_OPATT_SCHEMA_UPDATE_NOW            "schemaUpdateNow"
#define LDAP_OPATT_SCHEMA_UPDATE_NOW_W          L"schemaUpdateNow"
#define LDAP_OPATT_BECOME_PDC                   "becomePdc"
#define LDAP_OPATT_BECOME_PDC_W                 L"becomePdc"
#define LDAP_OPATT_FIXUP_INHERITANCE            "fixupInheritance"
#define LDAP_OPATT_FIXUP_INHERITANCE_W          L"fixupInheritance"
#define LDAP_OPATT_INVALIDATE_RID_POOL          "invalidateRidPool"
#define LDAP_OPATT_INVALIDATE_RID_POOL_W        L"invalidateRidPool"
#define LDAP_OPATT_ABANDON_REPL                 "abandonReplication"
#define LDAP_OPATT_ABANDON_REPL_W               L"abandonReplication"
#define LDAP_OPATT_DO_GARBAGE_COLLECTION        "doGarbageCollection"
#define LDAP_OPATT_DO_GARBAGE_COLLECTION_W      L"doGarbageCollection"
#define LDAP_OPATT_SUBSCHEMA_SUBENTRY           "subschemaEntry"
#define LDAP_OPATT_SUBSCHEMA_SUBENTRY_W         L"subschemaEntry"
#define LDAP_OPATT_CURRENT_TIME                 "currentTime"
#define LDAP_OPATT_CURRENT_TIME_W               L"currentTime"
#define LDAP_OPATT_SERVER_NAME                  "serverName"
#define LDAP_OPATT_SERVER_NAME_W                L"serverName"
#define LDAP_OPATT_NAMING_CONTEXTS              "namingContexts"
#define LDAP_OPATT_NAMING_CONTEXTS_W            L"namingContexts"
#define LDAP_OPATT_DEFAULT_NAMING_CONTEXT       "defaultNamingContext"
#define LDAP_OPATT_DEFAULT_NAMING_CONTEXT_W     L"defaultNamingContext"
#define LDAP_OPATT_SUPPORTED_CONTROL            "supportedControl"
#define LDAP_OPATT_SUPPORTED_CONTROL_W          L"supportedControl"
#define LDAP_OPATT_HIGHEST_COMMITTED_USN        "highestCommittedUSN"
#define LDAP_OPATT_HIGHEST_COMMITTED_USN_W      L"highestCommittedUSN"
#define LDAP_OPATT_SUPPORTED_LDAP_VERSION       "supportedLDAPVersion"
#define LDAP_OPATT_SUPPORTED_LDAP_VERSION_W     L"supportedLDAPVersion"
#define LDAP_OPATT_SUPPORTED_LDAP_POLICIES      "supportedLDAPPolicies"
#define LDAP_OPATT_SUPPORTED_LDAP_POLICIES_W    L"supportedLDAPPolicies"
#define LDAP_OPATT_SCHEMA_NAMING_CONTEXT        "schemaNamingContext"
#define LDAP_OPATT_SCHEMA_NAMING_CONTEXT_W      L"schemaNamingContext"
#define LDAP_OPATT_CONFIG_NAMING_CONTEXT        "configurationNamingContext"
#define LDAP_OPATT_CONFIG_NAMING_CONTEXT_W      L"configurationNamingContext"
#define LDAP_OPATT_ROOT_DOMAIN_NAMING_CONTEXT   "rootDomainNamingContext"
#define LDAP_OPATT_ROOT_DOMAIN_NAMING_CONTEXT_W L"rootDomainNamingContext"
#define LDAP_OPATT_SUPPORTED_SASL_MECHANISM     "supportedSASLMechanisms"
#define LDAP_OPATT_SUPPORTED_SASL_MECHANISM_W   L"supportedSASLMechanisms"
#define LDAP_OPATT_DNS_HOST_NAME                "dnsHostName"
#define LDAP_OPATT_DNS_HOST_NAME_W              L"dnsHostName"
#define LDAP_OPATT_LDAP_SERVICE_NAME            "ldapServiceName"
#define LDAP_OPATT_LDAP_SERVICE_NAME_W          L"ldapServiceName"
#define LDAP_OPATT_DS_SERVICE_NAME              "dsServiceName"
#define LDAP_OPATT_DS_SERVICE_NAME_W            L"dsServiceName"
#define LDAP_OPATT_SUPPORTED_CAPABILITIES       "supportedCapabilities"
#define LDAP_OPATT_SUPPORTED_CAPABILITIES_W     L"supportedCapabilities"

/* LDAP server capabilities */
#define LDAP_CAP_ACTIVE_DIRECTORY_OID                   "1.2.840.113556.1.4.800"
#define LDAP_CAP_ACTIVE_DIRECTORY_OID_W                 L"1.2.840.113556.1.4.800"
#define LDAP_CAP_ACTIVE_DIRECTORY_V51_OID               "1.2.840.113556.1.4.1670"
#define LDAP_CAP_ACTIVE_DIRECTORY_V51_OID_W             L"1.2.840.113556.1.4.1670"
#define LDAP_CAP_ACTIVE_DIRECTORY_LDAP_INTEG_OID        "1.2.840.113556.1.4.1791"
#define LDAP_CAP_ACTIVE_DIRECTORY_LDAP_INTEG_OID_W      L"1.2.840.113556.1.4.1791"
#define LDAP_CAP_ACTIVE_DIRECTORY_ADAM_OID              "1.2.840.113556.1.4.1851"
#define LDAP_CAP_ACTIVE_DIRECTORY_ADAM_OID_W            L"1.2.840.113556.1.4.1851"
#define LDAP_CAP_ACTIVE_DIRECTORY_PARTIAL_SECRETS_OID   "1.2.840.113556.1.4.1920"
#define LDAP_CAP_ACTIVE_DIRECTORY_PARTIAL_SECRETS_OID_W L"1.2.840.113556.1.4.1920"
#define LDAP_CAP_ACTIVE_DIRECTORY_V60_OID               "1.2.840.113556.1.4.1935"
#define LDAP_CAP_ACTIVE_DIRECTORY_V60_OID_W             L"1.2.840.113556.1.4.1935"
#define LDAP_CAP_ACTIVE_DIRECTORY_V61_OID               LDAP_CAP_ACTIVE_DIRECTORY_V60_OID
#define LDAP_CAP_ACTIVE_DIRECTORY_V61_OID_W             LDAP_CAP_ACTIVE_DIRECTORY_V60_OID_W
#define LDAP_CAP_ACTIVE_DIRECTORY_V61_R2_OID            "1.2.840.113556.1.4.2080"
#define LDAP_CAP_ACTIVE_DIRECTORY_V61_R2_OID_W          L"1.2.840.113556.1.4.2080"

/* LDAP matching rules */
#define LDAP_MATCHING_RULE_BIT_AND      "1.2.840.113556.1.4.803"
#define LDAP_MATCHING_RULE_BIT_AND_W    L"1.2.840.113556.1.4.803"
#define LDAP_MATCHING_RULE_BIT_OR       "1.2.840.113556.1.4.804"
#define LDAP_MATCHING_RULE_BIT_OR_W     L"1.2.840.113556.1.4.804"

/* LDAP extended requests */
#define LDAP_SERVER_FAST_BIND_OID   "1.2.840.113556.1.4.1781"
#define LDAP_SERVER_FAST_BIND_OID_W L"1.2.840.113556.1.4.1781"
#define LDAP_SERVER_WHO_AM_I_OID    "1.3.6.1.4.1.4203.1.11.3"
#define LDAP_SERVER_WHO_AM_I_OID_W  L"1.3.6.1.4.1.4203.1.11.3"

/* Search option flags */
#define SERVER_SEARCH_FLAG_DOMAIN_SCOPE 0x00000001
#define SERVER_SEARCH_FLAG_PHANTOM_ROOT 0x00000002

/* Copy control flags */
#define LDAP_SERVER_COPY_CONTROL_USE_COPY       0x00000000
#define LDAP_SERVER_COPY_CONTROL_DONT_USE_COPY  0x00000001

/* DirSync flags */
#define LDAP_DIRSYNC_OBJECT_SECURITY        0x00000001
#define LDAP_DIRSYNC_ANCESTORS_FIRST_ORDER  0x00000800
#define LDAP_DIRSYNC_PUBLIC_DATA_ONLY       0x00002000
#define LDAP_DIRSYNC_INCREMENTAL_VALUES     0x80000000
#define LDAP_DIRSYNC_ROPAS_DATA_ONLY        0x40000000

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* NT_LDAP_H */
