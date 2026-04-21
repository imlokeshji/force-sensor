#include <Arduino.h>
int fsrPin = A0;
void setup() {

    Serial.begin(9600);
}

void loop() {
    int fsrReading = analogRead(fsrPin);
    Serial.print("Analog reading = ");
    Serial.println(fsrReading);
    delay(100);
}