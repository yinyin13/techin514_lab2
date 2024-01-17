#include <Arduino.h>

const int analogPin = A1; // Analog pin to read from

void setup() {
  Serial.begin(115200);
}

void loop() {
  int adcValue = analogRead(analogPin);
  float voltage = (adcValue / 4095.0) * 3.3;

  Serial.print("ADC Value: ");
  Serial.print(adcValue);
  Serial.print(", Voltage: ");
  Serial.println(voltage);

  delay(1000); // Adjust the delay as needed
}