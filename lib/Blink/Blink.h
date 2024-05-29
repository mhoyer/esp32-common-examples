#pragma once

#include <esp32-hal-gpio.h>

#define INVERT_HIGH_LOW true

class Blink
{
public:
    Blink();

    void loop(uint8_t pin, bool invert_high_low = false);
};

extern Blink blink;
