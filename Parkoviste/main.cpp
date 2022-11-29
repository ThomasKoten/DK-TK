//#include "functions.h"
#include "mbed.h"
#include "stm32746g_discovery_lcd.h"
#include <Callback.h>

Mutex stdio_mutex;
Mutex VolnychMist;
Semaphore Sem(4);

Thread cars0;
Thread cars1;
Thread cars2;
Thread cars3;
Thread cars4;

struct misto{ //jedno misto na parkovisti
    int x = 0; 
    int y = 100;
    struct misto* last=NULL;
};
struct park{ //-ukazatel top/volne misto- parkoviste
    uint32_t BG_Colour=LCD_COLOR_BLACK;
    struct misto* volno;
};
struct car{ //vzhled auta + doba na parkovisti v ms
    char* txt="       ";
    uint32_t BG_Colour;
    uint32_t period;
};
struct PC{ // zapouzdreni dat pro callback funkci
    struct park* P;
    struct car* C;
};


struct misto* getVolno(struct park* parkoviste){
    struct misto* tmp = parkoviste->volno;
    parkoviste->volno=(parkoviste->volno)->last;
    return tmp;
}
void setVolno(struct park* parkoviste, struct misto* m){
    m->last=parkoviste->volno;
    parkoviste->volno=m;
}

void threading(struct PC* PCx) {
    while(true){
        //nacteni dat z PCx
        struct park* p=PCx->P;
        struct car* c=PCx->C;
        
        //zabrani mista na parkovisti
        Sem.acquire(); 
        
        //nalezeni volneho mista
        VolnychMist.lock();
            struct misto* m=getVolno(p); 
        VolnychMist.unlock();
        //parkovani
        stdio_mutex.lock(); 
            BSP_LCD_SetBackColor(c->BG_Colour);
            BSP_LCD_DisplayStringAt(m->x,m->y, (uint8_t *)(c->txt), CENTER_MODE);
        stdio_mutex.unlock();
        
        //cekani v lekarne
        ThisThread::sleep_for(c->period); 
        
        //odparkovavani
        stdio_mutex.lock(); 
            BSP_LCD_SetBackColor(p->BG_Colour);
            BSP_LCD_DisplayStringAt(m->x,m->y, (uint8_t *)(c->txt), CENTER_MODE);
        stdio_mutex.unlock();
        
        //misto je volne POG
        VolnychMist.lock();
            setVolno(p,m);
        VolnychMist.unlock();
        
         //odjezd
        Sem.release();
    }
}

int main()
{   
    //display init
    BSP_LCD_Init();
    BSP_LCD_LayerDefaultInit(LTDC_ACTIVE_LAYER, LCD_FB_START_ADDRESS);
    BSP_LCD_SetFont(&LCD_DEFAULT_FONT);
    BSP_LCD_SelectLayer(LTDC_ACTIVE_LAYER);
    BSP_LCD_Clear(LCD_COLOR_BLACK);
    
    //Parkoviste init
    struct misto misto0;
        misto0.y=250;
    struct misto misto1;
        misto1.y=200;
        misto1.last=&misto0;
    struct misto misto2;
        misto2.y=150;
        misto2.last=&misto1;
    struct misto misto3;
        misto3.y=100;
        misto3.last=&misto2;
    struct park Parkoviste;
        Parkoviste.volno=&misto3;
        
    //auta init
    struct car auto0;
        auto0.BG_Colour = LCD_COLOR_ORANGE;
        auto0.period = 3000;
    struct car auto1;
        auto1.BG_Colour = LCD_COLOR_BLUE;
        auto1.period = 1000;
    struct car auto2;
        auto2.BG_Colour = LCD_COLOR_GREEN;
        auto2.period = 5000;
    struct car auto3;
        auto3.BG_Colour = LCD_COLOR_RED;
        auto3.period = 2500;
    struct car auto4;
        auto4.BG_Colour = LCD_COLOR_YELLOW;
        auto4.period = 1000;
    
    //zabalení dat pro vstup do threading funkce
    struct PC PC0;
        PC0.P = &Parkoviste;
        PC0.C = &auto0;
    struct PC PC1;
        PC1.P = &Parkoviste;
        PC1.C = &auto1;
    struct PC PC2;
        PC2.P = &Parkoviste;
        PC2.C = &auto2;
    struct PC PC3;
        PC3.P = &Parkoviste;
        PC3.C = &auto3;
    struct PC PC4;
        PC4.P = &Parkoviste;
        PC4.C = &auto4;
    
    
    //spusteni fronty
    cars0.start(callback(threading,&PC0));
    cars1.start(callback(threading,&PC1));
    cars2.start(callback(threading,&PC2));
    cars3.start(callback(threading,&PC3));
    cars4.start(callback(threading,&PC4));
    while(true){}
}
