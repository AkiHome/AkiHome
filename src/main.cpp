#include <Arduino.h>
#include <AkiEthernet.h>

void setup(void) {
    Serial.begin(9600);
    pinMode(13, OUTPUT);
}

void loop(void) {
    digitalWrite(13,HIGH);
    delay(100);
    digitalWrite(13,LOW);
    delay(100);
}