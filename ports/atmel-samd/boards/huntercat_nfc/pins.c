#include "shared-bindings/board/__init__.h"

STATIC const mp_rom_map_elem_t board_global_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_D0), MP_ROM_PTR(&pin_PA00) }, // LED 1
    { MP_ROM_QSTR(MP_QSTR_D1), MP_ROM_PTR(&pin_PA01) }, // LED 2
    { MP_ROM_QSTR(MP_QSTR_D2), MP_ROM_PTR(&pin_PA02) }, // LED 3
    { MP_ROM_QSTR(MP_QSTR_D3), MP_ROM_PTR(&pin_PA03) }, // BAT_ADC
    { MP_ROM_QSTR(MP_QSTR_A0), MP_ROM_PTR(&pin_PA03) },
    { MP_ROM_QSTR(MP_QSTR_D4), MP_ROM_PTR(&pin_PA04) }, // VEN
    { MP_ROM_QSTR(MP_QSTR_D8), MP_ROM_PTR(&pin_PA08) }, // SDA
    { MP_ROM_QSTR(MP_QSTR_D8), MP_ROM_PTR(&pin_PA09) }, // SCL
    { MP_ROM_QSTR(MP_QSTR_D10), MP_ROM_PTR(&pin_PA10) }, // IRQ
    { MP_ROM_QSTR(MP_QSTR_D11), MP_ROM_PTR(&pin_PA11) }, // CLK
    { MP_ROM_QSTR(MP_QSTR_LED), MP_ROM_PTR(&pin_PA00) }, // LED 1
    { MP_ROM_QSTR(MP_QSTR_SDA), MP_ROM_PTR(&pin_PA08) },
    { MP_ROM_QSTR(MP_QSTR_SCL), MP_ROM_PTR(&pin_PA09) },
    { MP_ROM_QSTR(MP_QSTR_I2C), MP_ROM_PTR(&board_i2c_obj) },
};
MP_DEFINE_CONST_DICT(board_module_globals, board_global_dict_table);
