#define MICROPY_HW_BOARD_NAME "Electronic Cats CatWAN USBStick"
#define MICROPY_HW_MCU_NAME "samd21e18"

#define MICROPY_HW_LED_RX   &pin_PA14

#define MICROPY_PORT_A        (PORT_PA14 | PORT_PA27 | PORT_PA24 | PORT_PA25)
#define MICROPY_PORT_B        (0)
#define MICROPY_PORT_C        (0)

#define CIRCUITPY_INTERNAL_NVM_SIZE 0

#define DEFAULT_SPI_BUS_SCK (&pin_PA19)
#define DEFAULT_SPI_BUS_MOSI (&pin_PA18)
#define DEFAULT_SPI_BUS_MISO (&pin_PA22)

#define DEFAULT_UART_BUS_RX (&pin_PA11)
#define DEFAULT_UART_BUS_TX (&pin_PA10)

#define BOARD_FLASH_SIZE (0x00040000 - 0x2000 - 0x010000)

#define IGNORE_PIN_PA00     1
#define IGNORE_PIN_PA01     1
#define IGNORE_PIN_PA02     1
#define IGNORE_PIN_PA03     1
#define IGNORE_PIN_PA05     1
#define IGNORE_PIN_PA06     1
#define IGNORE_PIN_PA07     1
#define IGNORE_PIN_PA08     1
#define IGNORE_PIN_PA09     1
#define IGNORE_PIN_PA12     1
#define IGNORE_PIN_PA13     1
#define IGNORE_PIN_PA14     1
#define IGNORE_PIN_PA16     1
#define IGNORE_PIN_PA20     1
#define IGNORE_PIN_PA21     1
// USB is always used.
#define IGNORE_PIN_PA24     1
#define IGNORE_PIN_PA25     1
#define IGNORE_PIN_PA28     1
#define IGNORE_PIN_PA30     1
#define IGNORE_PIN_PA31     1
#define IGNORE_PIN_PB01     1
#define IGNORE_PIN_PB02     1
#define IGNORE_PIN_PB03     1
#define IGNORE_PIN_PB04     1
#define IGNORE_PIN_PB05     1
#define IGNORE_PIN_PB06     1
#define IGNORE_PIN_PB07     1
#define IGNORE_PIN_PB08     1
#define IGNORE_PIN_PB09     1
#define IGNORE_PIN_PB10     1
#define IGNORE_PIN_PB11     1
#define IGNORE_PIN_PB12     1
#define IGNORE_PIN_PB13     1
#define IGNORE_PIN_PB14     1
#define IGNORE_PIN_PB15     1
#define IGNORE_PIN_PB16     1
#define IGNORE_PIN_PB17     1
#define IGNORE_PIN_PB22     1
#define IGNORE_PIN_PB23     1
#define IGNORE_PIN_PB30     1
#define IGNORE_PIN_PB31     1
#define IGNORE_PIN_PB00     1
