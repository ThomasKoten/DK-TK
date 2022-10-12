#include "mbed.h"
#include "morse.h"

DigitalOut myled(LED1);
const double dot=0.2;
const double dash=3*dot;

const double waitLetter=2*dot;
const double waitWord=4*dot;

const int ledOn=1;
const int ledOff=0;

int main()
{
    while(1) {
        Word("navlecka",dot,dash,waitLetter,waitWord,myled,ledOn,ledOff);
        wait(waitWord);
    }
}
