#include <Arduino.h>
#include "esp32s3_slave.h"

led leed;

void setup(){
    pinMode(BUILTIN_LED, OUTPUT);
}

void loop(){
    leed.blink();
}
