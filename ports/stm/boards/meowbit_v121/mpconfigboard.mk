USB_VID = 0x239A
USB_PID = 0x805A
USB_PRODUCT = "Meowbit"
USB_MANUFACTURER = "Kittenbot"

SPI_FLASH_FILESYSTEM = 1
EXTERNAL_FLASH_DEVICE_COUNT = 1
EXTERNAL_FLASH_DEVICES = W25Q16JV_IQ
# INTERNAL_FLASH_FILESYSTEM = 1

BOOTLOADER_OFFSET = 0x8010000

MCU_SERIES = F4
MCU_VARIANT = STM32F401xE
MCU_PACKAGE = LQFP64

OPTIMIZATION_FLAGS = -Os

LD_COMMON = boards/common_default.ld
LD_FILE = boards/STM32F401xe_boot.ld
# For debugging - also comment BOOTLOADER_OFFSET and BOARD_VTOR_DEFER
# LD_FILE = boards/STM32F401xe_fs.ld
