#include <Arduino.h>

#include <esp32s3_slave.h>

led::led(int pin){
    _pin = pin;
}

void led::blink(void)
{
    digitalWrite(_pin, LOW);
    delay(100);
    digitalWrite(_pin, HIGH);
    delay(100);
}