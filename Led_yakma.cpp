#include "mbed.h" //  " " işareti cpp dosya içerisine girmesini sağlar
DigitalOut led(PA_5);
int main()
{
    while(1) 
	{
        led=1;
        wait(1.23);	//float veri tipinde değer döndürür
        /*
        wait_ms(100);	//int veri tipinde değer döndürür
        wait_us(1);	//int
        */
        led=0;
        wait_ms(1230);
    }
}