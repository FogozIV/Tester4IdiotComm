#include <Arduino.h>
#include <Wire.h>
void setup() {
  Serial.begin(115200);
  Wire.begin();
  delay(2000);
  Serial.println("Hello World");
  Wire.beginTransmission(0x22);
  Wire.write(0x00);
  uint16_t data = 500;
  Wire.write(&data, 2);
  Wire.endTransmission();
  delay(2000);
  Wire.beginTransmission(0x22);
  Wire.write(0x00);
  data = 16000;
  Wire.write(&data, 2);

// write your initialization code here
}

void loop() {
// write your code here
}