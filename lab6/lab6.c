
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

void wait(void);
void start(void);
unsigned int direction(void);

int count=0;
unsigned int PW_MIN_THRUST = 2000;
unsigned int PW_NUET_THRUST = 2750;
unsigned int PW_MAX_THRUST = 3500;

unsigned int PW_LEFT_RUDDER = 2000;
unsigned int PW_CENTER_RUDDER = 2750;
unsigned int PW_RIGHT_RUDDER = 3500;

unsigned int PW_UP_ANGLE = 2000;
unsigned int PW_CENTER_ANGLE = 2750;
unsigned int PW_DOWN_ANGLE = 3500;


unsigned int RUDDER_PW;
unsigned int ANGLE_PW;
unsigned int THRUST_PW;


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

	while (1)
	{
		printf("\r\n%u ms",count*20);
		wait();
	}

}


void Rudder_cal(void)
{	
	int value =0;
	int times =0;
	while (1)
	{

		count =0;
		while (count < 1);
		lcd_clear();
		lcd_print("Rudder Calibration\n go left: press 1\n go right: press 2\n confirm: press 3\nPress # for next screen");
		start();
		lcd_clear();
		//unsigned int PW_LEFT_RUDDER = 2000;
//unsigned int PW_CENTER_RUDDER = 2750;
//unsigned int PW_RIGHT_RUDDER = 3500;
		while (1)
		{
			if (times == 0 )
			{
				if (value ==0)
				{
					 lcd_print("Now calibrating Min_PW");
					 RUDDER_PW = PW_LEFT_RUDDER;
				}
				value = kpd_input(1);
				if (value == 1)
				{
					RUDDER_PW -= 10;
				}
				else if (value==2)
				{
					RUDDER_PW += 10;
				}
				else if (value == 3)
				{
					times++;
					value =0;
					PW_LEFT_RUDDER = RUDDER_PW;
				}
			}
			else if (times ==1)
			{
				if (value ==0)
				{
					 lcd_print("Now calibrating Cen_PW");
					 RUDDER_PW = PW_CENTER_RUDDER;
				}
				value = kpd_input(1);
				if (value == 1)
				{
					RUDDER_PW -= 10;
				}
				else if (value==2)
				{
					RUDDER_PW += 10;
				}
				else if (value == 3)
				{
					times++;
					value=0;
					PW_CENTER_RUDDER = RUDDER_PW;
				}
			}
			else
			{
				if (value==0)
				{
					 lcd_print("Now calibrating Max_PW");
					 RUDDER_PW = PW_RIGHT_RUDDER;
				}
				value = kpd_input(1);
				if (value == 1)
				{
					RUDDER_PW -= 10;
				}
				else if (value==2)
				{
					RUDDER_PW += 10;
				}
				else if (value == 3)
				{
					PW_RIGHT_RUDDER = RUDDER_PW;
					return;
				}
			}


		}
		
	}

}

void Angle_cal(void)
{

}

void Thrust_cal(void)
{

}

unsigned int direction(void)        ///ADJUSTS THE VALUES OF DIRECTION SO THE DESIRED DIRECTION IS THE CAR'S 'NORTH'
{
	int value;
	count =0;
	while (count < 1);
	lcd_clear();
	lcd_print("Calibration:\nHello world!\n012_345_678:\nabc def ghij");
	start();
	lcd_clear();
	value = kpd_input(0);
	lcd_clear();
	lcd_print("\r\nThe desired direction is: %d", value);
	printf("\r\nThe desired direction is: %d", value);
    
	return value;

}

void start(void)            ///WAITS UNTIL '*' IS ENTERED
{
	while (read_keypad() != '*') wait();
}



void wait(void)
{
	int old_count = count+1;
	while (old_count> count);
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
