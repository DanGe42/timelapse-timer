#include <Arduino.h>

#define INTERVAL_SECONDS 6

#define OPTOCOUPLER_PIN 4
#define INTERVAL_MS INTERVAL_SECONDS * 1000
#define SHUTTER_MS 200

void setup() {
    pinMode(OPTOCOUPLER_PIN, OUTPUT);
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
    digitalWrite(LED_BUILTIN, HIGH);
    digitalWrite(OPTOCOUPLER_PIN, HIGH);
    delay(SHUTTER_MS);

    digitalWrite(LED_BUILTIN, LOW);
    digitalWrite(OPTOCOUPLER_PIN, LOW);
    delay(INTERVAL_MS - SHUTTER_MS);
}
