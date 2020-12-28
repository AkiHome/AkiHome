#include <Arduino.h>
#include <AkiEthernet.h>
#include <AkiConfigurator.h>

void setup(void)
{
    Serial.begin(9600);
    pinMode(2, INPUT_PULLUP);
    bool wipe = !digitalRead(2);
    AkiCfg.begin(wipe);
    AkiNet.begin(wipe);
}

void loop(void)
{
    AkiCfg.loop();
    AkiNet.loop();
}