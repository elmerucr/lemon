// video display controller

#ifndef VC_HPP
#define VC_HPP

#include <cstdint>
#include "font_cbm_8x8.hpp"

class vdc_t {
private:
    uint8_t *ram;

    font_cbm_8x8_t font;

    // registers
    uint8_t bg0_x{0};
    uint8_t bg0_y{0};
    
public:
    vdc_t();
    ~vdc_t();

    void run();
};

#endif