 /*  Lab4
Michael J. Gardner II && Chrstine Marini && Patrick Mitchell && Robert Guiles
Section 03
Side B
Date: 04/17/15

The goal of this code is to read values from the compass via i2c
and steer the wheels toward a desired direction.
 */



#include <stdio.h>
#include <stdlib.h>
#include <c8051_SDCC.h>
#include <i2c.h>
#define PW_CENTER_STR 2825
#define PW_MIN_STR    2345
#define PW_MAX_STR    3295
#define PW_MAX_DRIVE  3503
#define PW_MIN_DRIVE  2028
#define PW_NUET_DRIVE 2765
#define PCA_START 	  28672  // 20ms PERIOD at sysclock/12


//-----------------------------------------------------------------------------
// 8051 Initialization Functions
//-----------------------------------------------------------------------------

void Port_Init(void);
void PCA_Init (void);
void XBR0_Init(void);
void SMB_Init(void);
void ADC_Init(void);
							/////COMPASS/////
unsigned int ReadCompass(void);
void Steering_Servo(unsigned int direction);
void Steering_func(void);
							////MOTOR/////
void Drive_Motor(void);
unsigned int Read_Ranger(void);
void Drive_func(void);
							/////LCD//////
void wait(void);
void start(void);
unsigned int direction(void);

unsigned long read_AD_input(unsigned char n);
void Battery_func(void);

void avoid_crash(void);


//-----------------------------------------------------------------------------
// Global Variables
//-----------------------------------------------------------------------------

unsigned int STR_lo_to_hi;
unsigned int STR_PW   = 0;
unsigned int count = 0;
 int actual_heading;
 int desired_heading;
unsigned int error;
unsigned int offset;

unsigned int range = 0;
unsigned int MOTOR_PW = 0;

__sbit __at 0xB7 SS0;

unsigned char starter =0;

unsigned int DRV_lo_to_hi;

//-----------------------------------------------------------------------------
// Main Function
//-----------------------------------------------------------------------------

void main(void)
{
    
    //-----------------------------------------------------------------------------
	// initializing 
	//-----------------------------------------------------------------------------

    Sys_Init();
    putchar(' '); //the quotes in this line may not format correctly
    Port_Init();
    XBR0_Init();
    PCA_Init();
	SMB_Init();
	ADC_Init();
	
    
    printf("\r\nEmbedded Control Car Calibration");
    count=0;
    STR_PW = PW_CENTER_STR;
    MOTOR_PW = PW_NUET_DRIVE;

    STR_lo_to_hi= 0xFFFF - STR_PW;
    PCA0CP0 = STR_lo_to_hi;

    DRV_lo_to_hi = 0xFFFF - MOTOR_PW;
    PCA0CP2 = DRV_lo_to_hi;

    count=0; //1 count = 20 milliseconds

	while (count < 50);

	//-----------------------------------------------------------------------------
	// Start program 
	//-----------------------------------------------------------------------------

	printf("\r\nEmbedded Control Car ready!");
	desired_heading = direction();
	count=0;
	while (1)
	{


		if (!SS0)
		{
			wait();
			if (count % 4==0)
			{
				Drive_func();
			}

			if (count%2==0)
			{
				Steering_func();	
			}

			if (count % 50 ==0)
			{
				Battery_func();
			}

			if (range <= 20)
			{
				avoid_crash();
			}        	
		}

		else {printf("\r\n The control is paused");count=1;starter=0;}
    }   
}

//******************************************************************************


//------------------------------------------------------------------------------
// Drive Motor Control
//------------------------------------------------------------------------------

void Drive_Motor(void)
{
	if (range <= 10) {MOTOR_PW = PW_MAX_DRIVE;}
	if (range >= 90) {MOTOR_PW = PW_MIN_DRIVE;}
	if (range <= 50 && range >= 40) {MOTOR_PW = PW_NUET_DRIVE;}
	
	if (range < 40 && range > 10)
	{
		MOTOR_PW = -24.6 * range + 3749;
	}

	if (range > 50 && range < 90)
	{
		MOTOR_PW = 3686.25 - (18.425 * range);
	}
	//printf("\r\n Motor Power is %u", MOTOR_PW);
	DRV_lo_to_hi =0xFFFF - MOTOR_PW;
	PCA0CP2 = DRV_lo_to_hi;
}

//------------------------------------------------------------------------------
// Read Ranger Function
//------------------------------------------------------------------------------

unsigned int Read_Ranger(void)
{
	unsigned char r_data[2];

	unsigned char r_addr = 0xE0;
	unsigned int read = 0;
	r_data[0] = 0x51;
	i2c_read_data(r_addr, 2, r_data, 2);
	read = (((unsigned int) r_data[0] <<8) | r_data[1]);
	return read;
}

//------------------------------------------------------------------------------
// Read Compass Function
//------------------------------------------------------------------------------

unsigned int ReadCompass(void)
{
	unsigned char Data[2];

	unsigned int Crange = 0;
	unsigned char addr = 0xC0;
	i2c_read_data(addr, 2,Data,2);
	Crange = ((unsigned int) Data[0] << 8 | Data[1]);
	return Crange;
}

//------------------------------------------------------------------------------
// Steering Servo Control
//------------------------------------------------------------------------------
void Steering_Servo(unsigned int direction)
{
    
    //wait for a key to be pressed
	if (direction < 1800)
	{
		if (STR_PW <= PW_CENTER_STR - (float)(direction)/4.2)
		{
			STR_PW = PW_CENTER_STR - (float)(direction)/4.2;
		}
		else
		{
			STR_PW -= 10;
		}
	}
	else if ( direction == 0 || direction ==3600)
	{
		STR_PW=PW_CENTER_STR;
	}
	else
	{
		if (STR_PW >= PW_CENTER_STR + (float)(3600-direction)/1.9)
		{
			STR_PW = PW_CENTER_STR + (float)(3600-direction)/1.9;
		}
		else
		{
			STR_PW += 10;
		}			
	}		


    //printf("\r\nSTR_PW: %u", STR_PW);
    STR_lo_to_hi= 0xFFFF - STR_PW;
    PCA0CP0 = STR_lo_to_hi;
}

//******************************************************************************
//Initializations and Interrupts

//------------------------------------------------------------------------------
// Port Initialization
//------------------------------------------------------------------------------
void Port_Init()
{
	P0MDOUT &= ~0x32;
    P1MDOUT = 0x0F;  //set output pin for CEX0 and CEX2 in push-pull mode
    P1MDIN &= ~0x10;
    P1MDOUT |= 0x10;
    P1 		 = 0x10;

	P3MDOUT &= ~0x80;
	P3 = 0x80;
}

//------------------------------------------------------------------------------
// XBR0_Init
//------------------------------------------------------------------------------
void XBR0_Init()
{
    XBR0  = 0x27;  //configure crossbar as directed in the laboratory
}

//------------------------------------------------------------------------------
// SMB_Init
//------------------------------------------------------------------------------
void SMB_Init(void)
{
	SMB0CR =0x93;
	ENSMB =1;
}

//-----------------------------------------------------------------------------
// PCA_Init
//-----------------------------------------------------------------------------
void PCA_Init(void)
{
    PCA0MD = 0x81;
    PCA0CPM0 = 0xC2;    //CCM0 in 16-bit compare mode
    PCA0CN 	= 0x40;      //Enable PCA counter
    EIE1 |= 0x08;       //Enable PCA interrupt
    EA = 1;             //Enable global interrupts
}

//-----------------------------------------------------------------------------
// PCA_ISR
//-----------------------------------------------------------------------------

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


//-----------------------------------------------------------------------------
// LCD FUNCTIONS
//-----------------------------------------------------------------------------


unsigned int direction(void)
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

void start(void)
{
	while (read_keypad() != '*') wait();
}

void wait(void)
{
	unsigned int old_c = count+1;
	while (count < old_c);
}

void Steering_func(void)
{
	actual_heading = ReadCompass();
	offset = (unsigned int)((actual_heading +3600- desired_heading ) % 3600);
	//printf("\r\n%d||%d",actual_heading,offset);
	Steering_Servo(offset);

}

void Drive_func(void)
{
	unsigned char r_data[2];

	unsigned char r_addr = 0xE0;
	unsigned int read = 0;
	r_data[0] = 0x51;
	range = Read_Ranger();
	
	i2c_write_data(r_addr, 0, r_data, 1);
	printf("\r\n The range is: %u", range);
	Drive_Motor();

}

unsigned long read_AD_input(unsigned char n)
{
	AMX1SL = n;
	ADC1CN = ADC1CN & ~0x20;
	ADC1CN = ADC1CN | 0x10;
	while ((ADC1CN & 0x20)== 0x00);

	return ADC1;

}

void ADC_Init(void)								/////SETS ADC 
{
	REF0CN = 0x03;
	ADC1CN = 0x80;
	ADC1CF |= 0x01;
}


void Battery_func(void)
{
	lcd_clear();
	lcd_print( "\r\nBattery is: %ld",read_AD_input(4));
}

void avoid_crash(void)
{
	STR_PW = PW_MIN_STR;

	//printf("\r\nSTR_PW: %u", STR_PW);
	STR_lo_to_hi= 0xFFFF - STR_PW;
	PCA0CP0 = STR_lo_to_hi;
	while(range < 45)
	{
		wait();
		Drive_func();

	}
}