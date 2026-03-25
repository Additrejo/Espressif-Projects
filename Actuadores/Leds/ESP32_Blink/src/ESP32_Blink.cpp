#include <Arduino.h>

// LED interno en GPIO 2
#define LED_PIN 2

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);  // Encender
  delay(2000);                   // 100 milisegundos
  digitalWrite(LED_PIN, LOW);   // Apagar
  delay(2000);                   // 100 milisegundos
}