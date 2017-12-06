#ifndef __MBED_CONFIG_DATA__
#define __MBED_CONFIG_DATA__
// Configuration parameters
#define MBED_CONF_DRIVERS_UART_SERIAL_RXBUF_SIZE    256 // set by library:drivers
#define MBED_CONF_DRIVERS_UART_SERIAL_TXBUF_SIZE    512 // set by application[*]
#define MBED_CONF_PLATFORM_FORCE_NON_COPYABLE_ERROR 0   // set by library:platform
#define MBED_CONF_PLATFORM_STDIO_FLUSH_AT_EXIT      1   // set by library:platform
#define MBED_CONF_PLATFORM_STDIO_BAUD_RATE          9600// set by library:platform
#define MBED_CONF_PLATFORM_DEFAULT_SERIAL_BAUD_RATE 9600// set by library:platform
#define MBED_CONF_PLATFORM_STDIO_CONVERT_NEWLINES   0   // set by library:platform
#endif
