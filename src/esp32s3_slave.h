#ifndef ESP32S3_SLAVE_H_
#define ESP32S3_SLAVE_H_

#include <Arduino.h>

class led {
    private:
        int _pin;
    public:
        led(int pin);
        void blink(void);
};

#endif // ESP32S3_SLAVE_H_