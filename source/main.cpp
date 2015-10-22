#include "mbed-drivers/mbed.h"

static void blinky(void) {
    static DigitalOut led(LED1);

    led = !led;
    printf("LED = %d \n\r",led.read());
}

void app_start(int, char**){
    minar::Scheduler::postCallback(blinky).period(minar::milliseconds(500));
}