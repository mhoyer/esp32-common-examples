#include "Blink.h"

Blink::Blink() {}
void Blink::loop(uint8_t pin, bool invert_high_low) {
  digitalWrite(pin, invert_high_low ? LOW : HIGH);
  delay(50);
  digitalWrite(pin, invert_high_low ? HIGH : LOW);
  delay(450);
}

Blink blink;
