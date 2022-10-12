#include "mbed.h"
void Symbol(double symbol,double pLetter,DigitalOut myled,int ledOn,int ledOff){
            myled = ledOn;
            wait(symbol);
            myled=ledOff;
            wait(pLetter);
    }
void Letter(char letter,double dot,double dash,double pLetter,DigitalOut myled,int ledOn,int ledOff)
{
    switch(letter) {
        case 'A':
        case 'a':
            Symbol(dot,pLetter,myled,ledOn,ledOff);
            Symbol(dash,pLetter,myled,ledOn,ledOff);
            break;
        case 'B':
        case 'b':
            //-...
            Symbol(dash,pLetter,myled,ledOn,ledOff);
            Symbol(dot,pLetter,myled,ledOn,ledOff);
            Symbol(dot,pLetter,myled,ledOn,ledOff);
            Symbol(dot,pLetter,myled,ledOn,ledOff);
            break;
        case 'C':
        case 'c':
            //-.-.
            Symbol(dash,pLetter,myled,ledOn,ledOff);
            Symbol(dot,pLetter,myled,ledOn,ledOff);
            Symbol(dash,pLetter,myled,ledOn,ledOff);
            Symbol(dot,pLetter,myled,ledOn,ledOff);
            break;
        case 'D':
        case 'd':
            //-..
            Symbol(dash,pLetter,myled,ledOn,ledOff);
            Symbol(dot,pLetter,myled,ledOn,ledOff);
            Symbol(dot,pLetter,myled,ledOn,ledOff);
            break;
        case 'E':
        case 'e':
            //.
            Symbol(dot,pLetter,myled,ledOn,ledOff);
            break;
        case 'F':
        case 'f':
            //..-.
            Symbol(dot,pLetter,myled,ledOn,ledOff);
            Symbol(dot,pLetter,myled,ledOn,ledOff);
            Symbol(dash,pLetter,myled,ledOn,ledOff);
            Symbol(dot,pLetter,myled,ledOn,ledOff);
            break;
        case 'G':
        case 'g':
            //--.
            Symbol(dash,pLetter,myled,ledOn,ledOff);
            Symbol(dash,pLetter,myled,ledOn,ledOff);
            Symbol(dot,pLetter,myled,ledOn,ledOff);
            break;
        case 'H':
        case 'h':
            //....
            Symbol(dot,pLetter,myled,ledOn,ledOff);
            Symbol(dot,pLetter,myled,ledOn,ledOff);
            Symbol(dot,pLetter,myled,ledOn,ledOff);
            Symbol(dot,pLetter,myled,ledOn,ledOff);
            break;
        case 'I':
        case 'i':
            //..
            Symbol(dot,pLetter,myled,ledOn,ledOff);
            Symbol(dot,pLetter,myled,ledOn,ledOff);
            break;
        case 'J':
        case 'j':
            //.---
            Symbol(dot,pLetter,myled,ledOn,ledOff);
            Symbol(dash,pLetter,myled,ledOn,ledOff);
            Symbol(dash,pLetter,myled,ledOn,ledOff);
            Symbol(dash,pLetter,myled,ledOn,ledOff);
            break;
        case 'K':
        case 'k':
            //-.-
            Symbol(dash,pLetter,myled,ledOn,ledOff);
            Symbol(dot,pLetter,myled,ledOn,ledOff);
            Symbol(dash,pLetter,myled,ledOn,ledOff);
            break;
        case 'L':
        case 'l':
            //.-..
            Symbol(dot,pLetter,myled,ledOn,ledOff);
            Symbol(dash,pLetter,myled,ledOn,ledOff);
            Symbol(dot,pLetter,myled,ledOn,ledOff);
            Symbol(dot,pLetter,myled,ledOn,ledOff);
            break;
        case 'M':
        case 'm':
            //--
            Symbol(dash,pLetter,myled,ledOn,ledOff);
            Symbol(dash,pLetter,myled,ledOn,ledOff);
            break;
        case 'N':
        case 'n':
            //-.
            Symbol(dash,pLetter,myled,ledOn,ledOff);
            Symbol(dot,pLetter,myled,ledOn,ledOff);
            break;
        case 'O':
        case 'o':
            //---
            Symbol(dash,pLetter,myled,ledOn,ledOff);
            Symbol(dash,pLetter,myled,ledOn,ledOff);
            Symbol(dash,pLetter,myled,ledOn,ledOff);
            break;
        case 'P':
        case 'p':
            //.--.
            Symbol(dot,pLetter,myled,ledOn,ledOff);
            Symbol(dash,pLetter,myled,ledOn,ledOff);
            Symbol(dash,pLetter,myled,ledOn,ledOff);
            Symbol(dot,pLetter,myled,ledOn,ledOff);
            break;
        case 'Q':
        case 'q':
            //--.-
            Symbol(dash,pLetter,myled,ledOn,ledOff);
            Symbol(dash,pLetter,myled,ledOn,ledOff);
            Symbol(dot,pLetter,myled,ledOn,ledOff);
            Symbol(dash,pLetter,myled,ledOn,ledOff);
            break;
        case 'R':
        case 'r':
            //.-.
            Symbol(dot,pLetter,myled,ledOn,ledOff);
            Symbol(dash,pLetter,myled,ledOn,ledOff);
            Symbol(dot,pLetter,myled,ledOn,ledOff);
            break;
        case 'S':
        case 's':
            //...
            Symbol(dot,pLetter,myled,ledOn,ledOff);
            Symbol(dot,pLetter,myled,ledOn,ledOff);
            Symbol(dot,pLetter,myled,ledOn,ledOff);
            break;
        case 'T':
        case 't':
            //-
            Symbol(dash,pLetter,myled,ledOn,ledOff);
            break;
        case 'U':
        case 'u':
            //..-
            Symbol(dot,pLetter,myled,ledOn,ledOff);
            Symbol(dot,pLetter,myled,ledOn,ledOff);
            Symbol(dash,pLetter,myled,ledOn,ledOff);
            break;
        case 'V':
        case 'v':
            //...-
            Symbol(dot,pLetter,myled,ledOn,ledOff);
            Symbol(dot,pLetter,myled,ledOn,ledOff);
            Symbol(dot,pLetter,myled,ledOn,ledOff);
            Symbol(dash,pLetter,myled,ledOn,ledOff);
            break;
        case 'W':
        case 'w':
            //.--
            Symbol(dot,pLetter,myled,ledOn,ledOff);
            Symbol(dash,pLetter,myled,ledOn,ledOff);
            Symbol(dash,pLetter,myled,ledOn,ledOff);
            break;
        case 'X':
        case 'x':
            //-..-
            Symbol(dash,pLetter,myled,ledOn,ledOff);
            Symbol(dot,pLetter,myled,ledOn,ledOff);
            Symbol(dot,pLetter,myled,ledOn,ledOff);
            Symbol(dash,pLetter,myled,ledOn,ledOff);
            break;
        case 'Y':
        case 'y':
            //-.--
            Symbol(dash,pLetter,myled,ledOn,ledOff);
            Symbol(dot,pLetter,myled,ledOn,ledOff);
            Symbol(dash,pLetter,myled,ledOn,ledOff);
            Symbol(dash,pLetter,myled,ledOn,ledOff);
            break;
        case 'Z':
        case 'z':
            //--..
            Symbol(dash,pLetter,myled,ledOn,ledOff);
            Symbol(dash,pLetter,myled,ledOn,ledOff);
            Symbol(dot,pLetter,myled,ledOn,ledOff);
            Symbol(dot,pLetter,myled,ledOn,ledOff);
            break;
            default:
            wait(pLetter);
            break;
    }
    wait(pLetter);
}
void Word(char in[10],double dot,double dash,double pLetter,double pWord, DigitalOut myled,int ledOn,int ledOff){ //string in, calls letters, ends words
    int max=sizeof(in)-1;
    for (int i=0;i<max;i++){
        Letter(in[i],dot,dash,pLetter,myled,ledOn,ledOff);
    }
    wait(pWord);
}
