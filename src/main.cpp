#include <Arduino.h>

#define LED_PIN 8
#define LED_ON LOW
#define LED_OFF HIGH

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, LED_ON);
  delay(50);
  digitalWrite(LED_PIN, LED_OFF);
  delay(950);
}
