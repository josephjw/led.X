/* 
 * File:   main.c
 * Author: joestalin
 *
 * Created on July 14, 2021, 12:36 PM
 */
//
//#include <stdio.h>
//#include <stdlib.h>
//
///*
// * 
// */
//int main(int argc, char** argv) {
//
//    return (EXIT_SUCCESS);
//}

#include<pic.h>
__CONFIG(0X2CE4);
#define _XTAL_FREQ 4000000
int i=0;
void main()
{
PORTC=0X00;
TRISC=0X01;
PORTA=0X00;
TRISA=0X00;
PORTB=0X00;
TRISB=0X00;
ANSEL=0X00;
ANSELH=0X00;
while(1)
{
if(RA1==1)
{
PORTB=0Xff;
while(RA1==1);
}

}
}