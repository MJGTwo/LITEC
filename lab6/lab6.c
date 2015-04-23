
 /*  Lab6
Michael J. Gardner II && Chrstine Marini && Patrick Mitchell && Robert Guiles
Section 03
Side B
Date: 04/23/15

The goal of the code is to contorl a blimp.

*/



#include <stdio.h>
#include <stdlib.h>
#include <c8051_SDCC.h>
#include <i2c.h>
#define PCA_START 	28672




void Port_Init(void);
void PCA_Init (void);
void XBR0_Init(void);
void SMB_Init(void);
void ADC_Init(void);

int count=0;




void main(void)
{
	Sys_Init();
    putchar(' '); //the quotes in this line may not format correctly
    Port_Init();
    XBR0_Init();
    PCA_Init();
	SMB_Init();
	ADC_Init();
	
	count =0;

}

void Port_Init(void)
{
	P0MDOUT &= ~0x32;

	P1MDIN  &= ~0x20;

	P1MDOUT |= 0x0F;
	P1MDOUT &= 0x20;

	P1 		 = 0x20;


}

void PCA_Init(void)
{
    PCA0MD   = 0x81;
    PCA0CPM0 = 0xC2;    //CCM0 in 16-bit compare mode FOR STEERING
    PCA0CPM1 = 0xC2;
    PCA0CPM2 = 0xC2;    //CCM2 in 16-bit compare mode FOR MOTOR
    PCA0CPM3 = 0xC2;
    PCA0CN 	 = 0x40;    //Enable PCA counter
    EIE1    |= 0x08;    //Enable PCA interrupt
    EA       = 1   ;    //Enable global interrupts
}


void XBR0_Init(void)
{
	XBR0 = 0x27;
}

void SMB_Init(void)
{
	SMB0CR =0x93;
	ENSMB =1;
}

void ADC_Init(void)								/////SETS ADC 
{
	REF0CN = 0x03;
	ADC1CN = 0x80;
	ADC1CF |= 0x01;
}

void PCA_ISR ( void ) __interrupt 9
{

    if (CF)
    {
        CF =0;
        PCA0 = PCA_START;
        count++;
       

    }

    PCA0CN &= 0xC0;
}
