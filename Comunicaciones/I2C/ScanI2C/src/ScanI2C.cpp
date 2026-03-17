#include <Arduino.h>
#include <Wire.h>

void setup() {
  Serial.begin(115200);
  Wire.begin(21, 22);  // Pines SDA y SCL para ESP32
  Serial.println("Escaneando bus I2C...");
  delay(100); // Pequeña pausa para estabilidad

  for (byte i = 8; i < 120; i++) {
    Wire.beginTransmission(i);
    byte error = Wire.endTransmission();
    
    if (error == 0) {
      Serial.print("Dispositivo I2C encontrado en dirección: 0x");
      if (i < 16) {
        Serial.print("0");
      }
      Serial.println(i, HEX);
    }
    delay(5); // Pequeña pausa entre escaneos
  }
  
  Serial.println("Escaneo completado!");
}

void loop() {
  // No es necesario hacer nada aquí
}