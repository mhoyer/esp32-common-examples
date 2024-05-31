#include <Arduino.h>
#include <Blink.h>

#define LED_PIN 8
#define LED_ON LOW
#define LED_OFF HIGH

#if CONFIG_FREERTOS_UNICORE
#define TASK_CORE_ID 0
#else
#define TASK_CORE_ID 1
#endif

void blinkTaskHandler(void *parameter) {
  while(1)
  {
    blink.loop(LED_PIN, INVERT_HIGH_LOW);
  }
}

void setup() {
  pinMode(LED_PIN, OUTPUT);
  xTaskCreatePinnedToCore(blinkTaskHandler, "Blink", 1024, NULL, 1, NULL, TASK_CORE_ID);
}

void loop() {
}
