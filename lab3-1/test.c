#include <c8051_SDCC.h>
#include <stdlib.h>
#include <stdio.h>

int CEX0_PW = 10000;
void Port_init(void);
void PCA_Init(void);
void PCA_ISR(void) __interrupt 9;

void main(void)
{

}