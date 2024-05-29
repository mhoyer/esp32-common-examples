#include <Arduino.h>
#include <Blink.h>

#define LED_PIN 8
#define LED_ON LOW
#define LED_OFF HIGH

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  blink.loop(LED_PIN, INVERT_HIGH_LOW);
}
