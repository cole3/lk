
// le_counter.h generated from ../../example/le_counter.gatt for BTstack

// binary representation
// attribute size in bytes (16), flags(16), handle (16), uuid (16/128), value(...)

#include <stdint.h>

const uint8_t profile_data[] =
{
    // 0x0001 PRIMARY_SERVICE-GAP_SERVICE
    0x0a, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x28, 0x00, 0x18, 
    // 0x0002 CHARACTERISTIC-GAP_DEVICE_NAME-READ
    0x0d, 0x00, 0x02, 0x00, 0x02, 0x00, 0x03, 0x28, 0x02, 0x03, 0x00, 0x00, 0x2a, 
    // 0x0003 VALUE-GAP_DEVICE_NAME-READ-'SPP+LE Counter'
    0x16, 0x00, 0x02, 0x00, 0x03, 0x00, 0x00, 0x2a, 0x53, 0x50, 0x50, 0x2b, 0x4c, 0x45, 0x20, 0x43, 0x6f, 0x75, 0x6e, 0x74, 0x65, 0x72, 

    // 0x0004 PRIMARY_SERVICE-GATT_SERVICE
    0x0a, 0x00, 0x02, 0x00, 0x04, 0x00, 0x00, 0x28, 0x01, 0x18, 
    // 0x0005 CHARACTERISTIC-GATT_SERVICE_CHANGED-READ
    0x0d, 0x00, 0x02, 0x00, 0x05, 0x00, 0x03, 0x28, 0x02, 0x06, 0x00, 0x05, 0x2a, 
    // 0x0006 VALUE-GATT_SERVICE_CHANGED-READ-''
    0x08, 0x00, 0x02, 0x00, 0x06, 0x00, 0x05, 0x2a, 
// Counter Service

    // 0x0007 PRIMARY_SERVICE-0000FF10-0000-1000-8000-00805F9B34FB
    0x18, 0x00, 0x02, 0x00, 0x07, 0x00, 0x00, 0x28, 0xfb, 0x34, 0x9b, 0x5f, 0x80, 0x00, 0x00, 0x80, 0x00, 0x10, 0x00, 0x00, 0x10, 0xff, 0x00, 0x00, 
// Counter Characteristic, with read and notify
    // 0x0008 CHARACTERISTIC-0000FF11-0000-1000-8000-00805F9B34FB-READ | NOTIFY | DYNAMIC
    0x1b, 0x00, 0x02, 0x00, 0x08, 0x00, 0x03, 0x28, 0x12, 0x09, 0x00, 0xfb, 0x34, 0x9b, 0x5f, 0x80, 0x00, 0x00, 0x80, 0x00, 0x10, 0x00, 0x00, 0x11, 0xff, 0x00, 0x00, 
    // 0x0009 VALUE-0000FF11-0000-1000-8000-00805F9B34FB-READ | NOTIFY | DYNAMIC-''
    0x16, 0x00, 0x12, 0x03, 0x09, 0x00, 0xfb, 0x34, 0x9b, 0x5f, 0x80, 0x00, 0x00, 0x80, 0x00, 0x10, 0x00, 0x00, 0x11, 0xff, 0x00, 0x00, 
    // 0x000a CLIENT_CHARACTERISTIC_CONFIGURATION
    0x0a, 0x00, 0x0a, 0x01, 0x0a, 0x00, 0x02, 0x29, 0x00, 0x00, 
    // END
    0x00, 0x00, 
}; // total size 99 bytes 


//
// list mapping between characteristics and handles
//
#define ATT_CHARACTERISTIC_GAP_DEVICE_NAME_01_VALUE_HANDLE 0x0003
#define ATT_CHARACTERISTIC_GATT_SERVICE_CHANGED_01_VALUE_HANDLE 0x0006
#define ATT_CHARACTERISTIC_0000FF11_0000_1000_8000_00805F9B34FB_01_VALUE_HANDLE 0x0009
#define ATT_CHARACTERISTIC_0000FF11_0000_1000_8000_00805F9B34FB_01_CLIENT_CONFIGURATION_HANDLE 0x000a
