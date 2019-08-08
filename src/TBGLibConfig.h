﻿//=====================================================================
//  Leafony Platform BLE leaf Bule Geko library(TBGLib)
//     Platform     : BGM11x 
//
//		(c) 2019  Trillion-Node Study Group
//		Released under the MIT license
//		https://opensource.org/licenses/MIT
//
//      Rev.00 2019/08/01 First release
//=====================================================================
// Bluegiga BGLib Arduino interface library source file
// Copyright (c) 2014 Jeff Rowberg
// BGLib Arduino interface library code is placed under the MIT license
//=====================================================================

#ifndef __TBGLIB_CONFIG_H__
#define __TBGLIB_CONFIG_H__

//#define BGLIB_DEBUG

/*  */
#define BGLIB_ENABLE_COMMAND_CLASS_COEX                     /* [0x20] */
/*  */
#define BGLIB_ENABLE_COMMAND_CLASS_DFU                      /* [0x00] */
#define BGLIB_ENABLE_EVENT_CLASS_DFU						/* [0x00] */
/*  */
#define BGLIB_ENABLE_COMMAND_CLASS_ENDPOINT                 /* [0x0B] */
/*  */
#define BGLIB_ENABLE_COMMAND_CLASS_FLASH					/* [0x0D] Flash */
/*  */
#define BGLIB_ENABLE_COMMAND_CLASS_GATT                     /* [0x09] */
#define BGLIB_ENABLE_EVENT_CLASS_GATT                       /* [0x09] */
/*  */
#define BGLIB_ENABLE_COMMAND_CLASS_GATT_SERVER              /* [0x0A] */
#define BGLIB_ENABLE_EVENT_CLASS_GATT_SERVER                /* [0x0A] */
/*  */
#define BGLIB_ENABLE_COMMAND_CLASS_HARDWARE					/* [0x0C] */
#define BGLIB_ENABLE_EVENT_CLASS_HARDWARE					/* [0x0C] */
/*  */
#define BGLIB_ENABLE_COMMAND_CLASS_LE_CONNECTION			/* [0x08] */
#define BGLIB_ENABLE_EVENT_CLASS_LE_CONNECTION              /* [0x08] */
/*  */
#define BGLIB_ENABLE_COMMAND_CLASS_LE_GAP					/* [0x03] */
#define BGLIB_ENABLE_EVENT_CLASS_LE_GAP						/* [0x03] */
/*  */
#define BGLIB_ENABLE_COMMAND_CLASS_SM						/* [0x0F] */
#define BGLIB_ENABLE_EVENT_CLASS_SM							/* [0x0F] */
/*  */
#define BGLIB_ENABLE_COMMAND_CLASS_SYSTEM					/* [0x01] System Commands */
#define BGLIB_ENABLE_EVENT_CLASS_SYSTEM						/* [0x01] System Events */
/*  */
#define BGLIB_ENABLE_COMMAND_CLASS_TEST						/* [0x0E] */
#define BGLIB_ENABLE_EVENT_CLASS_TEST						/* [0x0E] */
/*  */
#define BGLIB_ENABLE_COMMAND_CLASS_USER                     /* [0xFF] */
#define BGLIB_ENABLE_EVENT_CLASS_USER                       /* [0xFF] */
/*  */


/* [coex] cooexistence interface */
#ifdef BGLIB_ENABLE_COMMAND_CLASS_COEX
    #define BGLIB_ENABLE_CMD_COEX_GET_COUNTERS              /* [MesID = 0x01] */
    #define BGLIB_ENABLE_CMD_COEX_SET_OPTIONS               /* [MesID = 0x00] */
#endif
/*  */

/* [dfu] Device Firmware Upgrade */
#ifdef BGLIB_ENABLE_COMMAND_CLASS_DFU
    #define BGLIB_ENABLE_CMD_DFU_FLASH_SET_ADDRESS          /* [MesID = 0x01] */
    #define BGLIB_ENABLE_CMD_DFU_FLASH_UPLOAD               /* [MesID = 0x02] */
    #define BGLIB_ENABLE_CMD_DFU_FLASH_UPLOAD_FINISH        /* [MesID = 0x03] */
    #define BGLIB_ENABLE_CMD_DFU_RESET                      /* [MesID = 0x00] */
#endif
#ifdef BGLIB_ENABLE_EVENT_CLASS_DFU
    #define BGLIB_ENABLE_EVT_DFU_BOOT                       /* [MesID = 0x00] */
    #define BGLIB_ENABLE_EVT_DFU_BOOT_FAILURE               /* [MesID = 0x01] */
#endif
/*  */

/* [endpoint] Endpoint */
#ifdef BGLIB_ENABLE_COMMAND_CLASS_ENDPOINT
    #define BGLIB_ENABLE_CMD_ENDPOINT_CLOSE                 /* [MesID = 0x02] [v2.8.1:deprecated] */
#endif
/*  */

/* [flash] Peripheral Store */
#ifdef BGLIB_ENABLE_COMMAND_CLASS_FLASH
    #define BGLIB_ENABLE_CMD_FLASH_PS_ERASE                 /* [MesID = 0x04] */
    #define BGLIB_ENABLE_CMD_FLASH_PS_ERASE_ALL             /* [MesID = 0x01] */
    #define BGLIB_ENABLE_CMD_FLASH_PS_LOAD                  /* [MesID = 0x03] */
    #define BGLIB_ENABLE_CMD_FLASH_PS_SAVE                  /* [MesID = 0x02] */
#endif
/*  */

/* [gatt] Generic Attribute Profile */
#ifdef BGLIB_ENABLE_COMMAND_CLASS_GATT
    #define BGLIB_ENABLE_CMD_GATT_DISCOVER_CHARACTERISTICS          /* [MesID = 0x03] */
    #define BGLIB_ENABLE_CMD_GATT_DISCOVER_CHARACTERISTICS_BY_UUID  /* [MesID = 0x04] */
    #define BGLIB_ENABLE_CMD_GATT_DISCOVER_DESCRIPTORS              /* [MesID = 0x06] */
    #define BGLIB_ENABLE_CMD_GATT_DISCOVER_PRIMARY_SERVICES
    #define BGLIB_ENABLE_CMD_GATT_DISCOVER_PRIMARY_SERVICES_BY_UUID
    #define BGLIB_ENABLE_CMD_GATT_EXECUTE_CHARACTERISTIC_VALUE_WRITE
    #define BGLIB_ENABLE_CMD_GATT_FIND_INCLUDED_SERVICES
    #define BGLIB_ENABLE_CMD_GATT_PREPARE_CHARACTERISTIC_VALUE_RELIABLE_WRITE
    #define BGLIB_ENABLE_CMD_GATT_PREPARE_CHARACTERISTIC_VALUE_WRITE
    #define BGLIB_ENABLE_CMD_GATT_READ_CHARACTERISTIC_VALUE
    #define BGLIB_ENABLE_CMD_GATT_READ_CHARACTERISTIC_VALUE_BY_UUID
    #define BGLIB_ENABLE_CMD_GATT_READ_CHARACTERICTIC_VALUE_FROM_OFFSET
    #define BGLIB_ENABLE_CMD_GATT_READ_DESCRIPTOR_VALUE
    #define BGLIB_ENABLE_CMD_GATT_READ_MULTIPLE_CHARACTERISTIC_VALUES
    #define BGLIB_ENABLE_CMD_GATT_SEND_CHARACTERICTIC_CONFIRMATION
    #define BGLIB_ENABLE_CMD_GATT_SET_CHARACTERISTIC_NOTIFICATION
    #define BGLIB_ENABLE_CMD_GATT_SET_MAX_MTU
    #define BGLIB_ENABLE_CMD_GATT_WRITE_CHARACTERISTIC_VALUE
    #define BGLIB_ENABLE_CMD_GATT_WRITE_CHARACTERISTIC_VALUE_WITHOUT_RESPONSE
    #define BGLIB_ENABLE_CMD_GATT_WRITE_DESCRIPTOR_VALUE
#endif
#ifdef BGLIB_ENABLE_EVENT_CLASS_GATT
    #define BGLIB_ENABLE_EVT_GATT_CHARACTERISTIC
    #define BGLIB_ENABLE_EVT_GATT_CHARACTERISTIC_VALUE
    #define BGLIB_ENABLE_EVT_GATT_DESCRIPTOR
    #define BGLIB_ENABLE_EVT_GATT_DESCRIPTOR_VALUE
    #define BGLIB_ENABLE_EVT_GATT_MTU_EXCHANGED
    #define BGLIB_ENABLE_EVT_GATT_PROCEDURE_COMPLETED
    #define BGLIB_ENABLE_EVT_GATT_SERVICE
#endif
/*  */

/* [gatt_server] Generic Attribure Profile Server */
#ifdef BGLIB_ENABLE_COMMAND_CLASS_GATT_SERVER
    #define BGLIB_ENABLE_CMD_GATT_SERVER_FIND_ATTRIBUTE
    #define BGLIB_ENABLE_CMD_GATT_SERVER_READ_ATTRIBUTE_TYPE
    #define BGLIB_ENABLE_CMD_GATT_SERVER_READ_ATTRIBUTE_VALUE
    #define BGLIB_ENABLE_CMD_GATT_SERVER_SEND_CHARACTERISTIC_NOTIFICATION
    #define BGLIB_ENABLE_CMD_GATT_SERVER_SEND_USER_READ_RESPONSE
    #define BGLIB_ENABLE_CMD_GATT_SERVER_SEND_USER_WRITE_RESPONSE
    #define BGLIB_ENABLE_CMD_GATT_SERVER_SENT_CAPABILITIES
    #define BGLIB_ENABLE_CMD_GATT_SERVER_SET_DATABASE               /* [v2.8.1:deprecated] */
    #define BGLIB_ENABLE_CMD_GATT_SERVER_WRITE_ATTRIBUTE_VALUE
#endif
#ifdef BGLIB_ENABLE_EVENT_CLASS_GATT_SERVER
    #define BGLIB_ENABLE_EVT_GATT_SERVER_ATTRIBUTE_VALUE
    #define BGLIB_ENABLE_EVT_GATT_SERVER_CHARACTERISTIC_STATUS
    #define BGLIB_ENABLE_EVT_GATT_SERVER_EXECUTE_WRITE_COMPLETED
    #define BGLIB_ENABLE_EVT_GATT_SERVER_USER_READ_REQUEST
    #define BGLIB_ENABLE_EVT_GATT_SERVER_USER_WRITE_REQUEST
#endif
/*  */

/* [hardware] Hardware */
#ifdef BGLIB_ENABLE_COMMAND_CLASS_HARDWARE
    #define BGLIB_ENABLE_CMD_HARDWARE_ENABLE_DCDC
    #define BGLIB_ENABLE_CMD_HARDWARE_GET_TIME
    #define BGLIB_ENABLE_CMD_HARDWARE_SET_LAZY_SOFT_TIMER
    #define BGLIB_ENABLE_CMD_HARDWARE_SET_SOFT_TIMER
#endif
#ifdef BGLIB_ENABLE_EVENT_CLASS_HARDWARE
    #define BGLIB_ENABLE_EVT_HARDWARE_SOFT_TIMER
#endif
/*  */

/* [le connection] Connection management */
#ifdef BGLIB_ENABLE_COMMAND_CLASS_LE_CONNECTION
    #define BGLIB_ENABLE_CMD_LE_CONNECTION_CLOSE
    #define BGLIB_ENABLE_CMD_LE_CONNECTION_DISABLE_SLAVE_LATENCY
    #define BGLIB_ENABLE_CMD_LE_CONNECTION_GET_RSSI
    #define BGLIB_ENABLE_CMD_LE_CONNECTION_SET_PARAMETERS
    #define BGLIB_ENABLE_CMD_LE_CONNECTION_SET_PHY
#endif
#ifdef BGLIB_ENABLE_EVENT_CLASS_LE_CONNECTION
    #define BGLIB_ENABLE_EVT_LE_CONNECTION_CLOSED
    #define BGLIB_ENABLE_EVT_LE_CONNECTION_OPENED
    #define BGLIB_ENABLE_EVT_LE_CONNECTION_PARAMETERS
    #define BGLIB_ENABLE_EVT_LE_CONNECTION_PHY_STATUS
    #define BGLIB_ENABLE_EVT_LE_CONNECTION_RSSI
#endif
/*  */

/* [le gap] Generic Access Profile */
#ifdef BGLIB_ENABLE_COMMAND_CLASS_LE_GAP
    #define BGLIB_ENABLE_CMD_LE_GAP_BT5_SET_ADV_DATA
    #define BGLIB_ENABLE_CMD_LE_GAP_BT5_SET_ADV_PARAMETERS          /* [v2.8.1:deprecated] */
    #define BGLIB_ENABLE_CMD_LE_GAP_BT5_SET_MODE                    /* [v2.8.1:deprecated] */
    #define BGLIB_ENABLE_CMD_LE_GAP_CLEAR_ADVERTISE_CONFIGURATION
    #define BGLIB_ENABLE_CMD_LE_GAP_CONNECT
    #define BGLIB_ENABLE_CMD_LE_GAP_DISCOVER                        /* [v2.8.1:deprecated] */
    #define BGLIB_ENABLE_CMD_LE_GAP_END_PROCEDURE
    #define BGLIB_ENABLE_CMD_LE_GAP_OPEN                            /* [v2.8.1:deprecated] */
    #define BGLIB_ENABLE_CMD_LE_GAP_SET_ADV_DATA                    /* [v2.8.1:deprecated] */
    #define BGLIB_ENABLE_CMD_LE_GAP_SET_ADV_PARAMETERS              /* [v2.8.1:deprecated] */
    #define BGLIB_ENABLE_CMD_LE_GAP_SET_ADV_TIMEOUT                 /* [v2.8.1:deprecated] */
    #define BGLIB_ENABLE_CMD_LE_GAP_SET_ADVERTISE_CHANNEL_MAP
    #define BGLIB_ENABLE_CMD_LE_GAP_SET_ADVERTISE_CONFIGURATION
    #define BGLIB_ENABLE_CMD_LE_GAP_SET_ADVERTISE_PHY
    #define BGLIB_ENABLE_CMD_LE_GAP_SET_ADVERTISE_REPORT_SCAN_REQUEST
    #define BGLIB_ENABLE_CMD_LE_GAP_SET_ADVERTISE_TIMING
    #define BGLIB_ENABLE_CMD_LE_GAP_SET_CONN_PARAMEETERS
    #define BGLIB_ENABLE_CMD_LE_GAP_SET_DATA_CHANNEL_CLASSIFICATION
    #define BGLIB_ENABLE_CMD_LE_GAP_SET_DISCOVERY_TIMING
    #define BGLIB_ENABLE_CMD_LE_GAP_SET_DISCOVERY_TYPE
    #define BGLIB_ENABLE_CMD_LE_GAP_SET_MODE                        /* [v2.8.1:deprecated] */
    #define BGLIB_ENABLE_CMD_LE_GAP_SET_PRIVACY_MODE
    #define BGLIB_ENABLE_CMD_LE_GAP_SET_SCAN_PARAMETERS             /* [v2.8.1:deprecated] */
    #define BGLIB_ENABLE_CMD_LE_GAP_START_ADVERTISING
    #define BGLIB_ENABLE_CMD_LE_GAP_START_DISCOVERY
    #define BGLIB_ENABLE_CMD_LE_GAP_STOP_ADVERTISING
#endif
#ifdef BGLIB_ENABLE_EVENT_CLASS_LE_GAP
    #define BGLIB_ENABLE_EVT_LE_GAP_ADV_TIMEOUT
    #define BGLIB_ENABLE_EVT_LE_GAP_SCAN_REQUEST
    #define BGLIB_ENABLE_EVT_LE_GAP_SCAN_RESPONSE
#endif
/*  */

/* [SM] Security Manager */
#ifdef BGLIB_ENABLE_COMMAND_CLASS_SM
    #define BGLIB_ENABLE_CMD_SM_BONDING_CONFIRM
    #define BGLIB_ENABLE_CMD_SM_CONFIGURE
    #define BGLIB_ENABLE_CMD_SM_DELETE_BONDING
    #define BGLIB_ENABLE_CMD_SM_DELETE_BONDINGS
    #define BGLIB_ENABLE_CMD_SM_ENTER_PASSKEY
    #define BGLIB_ENABLE_CMD_SM_INCREASE_SECURITY
    #define BGLIB_ENABLE_CMD_SM_LIST_ALL_BONDINGS
    #define BGLIB_ENABLE_CMD_SM_PASSKEY_CONFIRM
    #define BGLIB_ENABLE_CMD_SM_SET_BONDABLE_MODE
    #define BGLIB_ENABLE_CMD_SM_SET_DEBUG_MODE
    #define BGLIB_ENABLE_CMD_SM_SET_OOB_DATA
    #define BGLIB_ENABLE_CMD_SM_SET_PASSKEY
    #define BGLIB_ENABLE_CMD_SM_SET_SC_REMOTE_OOB_DATA
    #define BGLIB_ENABLE_CMD_SM_STORE_BONDING_CONFIGURATION
    #define BGLIB_ENABLE_CMD_SM_USE_SC_OOB
#endif
#ifdef BGLIB_ENABLE_EVENT_CLASS_SM
    #define BGLIB_ENABLE_EVT_SM_BONDED
    #define BGLIB_ENABLE_EVT_SM_BONDING_FAILED
    #define BGLIB_ENABLE_EVT_SM_CONFIRM_BONDING
    #define BGLIB_ENABLE_EVT_SM_CONFIRM_PASSKEY
    #define BGLIB_ENABLE_EVT_SM_LIST_ALL_BONDINGS_COMPLETE
    #define BGLIB_ENABLE_EVT_SM_LIST_BONDING_ENTRY
    #define BGLIB_ENABLE_EVT_SM_PASSKEY_DISPLAY
    #define BGLIB_ENABLE_EVT_SM_PASSKEY_REQUEST
#endif
/*  */

/* [system] System */
#ifdef BGLIB_ENABLE_COMMAND_CLASS_SYSTEM
    #define BGLIB_ENABLE_CMD_SYSTEM_GET_BT_ADDRESS
    #define BGLIB_ENABLE_CMD_SYSTEM_GET_COUNTERS
    #define BGLIB_ENABLE_CMD_SYSTEM_GET_RANDOM_DATA
    #define BGLIB_ENABLE_CMD_SYSTEM_HALT
    #define BGLIB_ENABLE_CMD_SYSTEM_HELLO
    #define BGLIB_ENABLE_CMD_SYSTEM_RESET
    #define BGLIB_ENABLE_CMD_SYSTEM_SET_BT_ADDRESS
    #define BGLIB_ENABLE_CMD_SYSTEM_SET_DEVICE_NAME
    #define BGLIB_ENABLE_CMD_SYSTEM_SET_TX_POWER
#endif
#ifdef BGLIB_ENABLE_EVENT_CLASS_SYSTEM
    #define BGLIB_ENABLE_EVT_SYSTEM_AWAKE
    #define BGLIB_ENABLE_EVT_SYSTEM_BOOT
    #define BGLIB_ENABLE_EVT_SYSTEM_ERROR
    #define BGLIB_ENABLE_EVT_SYSTEM_EXTERNAL_SIGNAL
    #define BGLIB_ENABLE_EVT_SYSTEM_HARDWARE_ERROR
#endif
/*  */

/* [test] testing */
#ifdef BGLIB_ENABLE_COMMAND_CLASS_TEST
    #define BGLIB_ENABLE_CMD_TEST_DTM_END
    #define BGLIB_ENABLE_CMD_TEST_DTM_RX
    #define BGLIB_ENABLE_CMD_TEST_DTM_TX
#endif
#ifdef BGLIB_ENABLE_EVENT_CLASS_TEST
    #define BGLIB_ENABLE_EVT_TEST_DTM_COMPLETED
#endif
/*  */

/* [user] User message */
#ifdef BGLIB_ENABLE_COMMAND_CLASS_USER
    #define BGLIB_ENABLE_CMD_USER_MESSAGE_TO_TARGET
#endif
#ifdef BGLIB_ENABLE_EVENT_CLASS_USER
    #define BGLIB_ENABLE_EVT_USER_MASSAGE_TO_HOST
#endif
/*  */

#endif /* __TBGLIB_CONFIG_H__ */
