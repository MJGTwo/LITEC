/*  Lab3-3
Michael J. Gardner II && Chrstine Marini
Section 03
Side B
Date: 04/03/15

The goal of this code is to read values from the compass via i2c
and steer the wheels toward a desired direction.
 */
#include <stdio.h>
#include <c8051_SDCC.h>
#include <i2c.h>
#define PW_CENTER_STR 2685
#define PW_MIN_STR    2265
#define PW_MAX_STR    3195
#define PW_MAX_DRIVE  3503
#define PW_MIN_DRIVE  2028
#define PW_NUET_DRIVE 2765


//-----------------------------------------------------------------------------
// 8051 Initialization Functions
//-----------------------------------------------------------------------------
void Port_Init(void);
void PCA_Init (void);
void XBR0_Init(void);
void SMB_Init(void);
unsigned int ReadCompass(void);
void Steering_Servo(unsigned int direction);
void Drive_Motor(void);
unsigned int Read_Ranger(void);

//-----------------------------------------------------------------------------
// Global Variables
//-----------------------------------------------------------------------------
unsigned int tmp0_lo_to_hi;
unsigned int STR_PW   = 0;
unsigned int count = 0;
char input;
 int actual_heading;
 int desired_heading = 900; //East
unsigned int error;
unsigned int offset;

unsigned int range = 0;
unsigned char r_counts = 0;
unsigned char c_counts = 0;
unsigned char r_addr;
unsigned char new_range;
unsigned char r_data[2];
unsigned int MOTOR_PW = 0;
unsigned char new_heading;

char r_input;
__sbit __at 0xB6 SS0;

//-----------------------------------------------------------------------------
// Main Function
//-----------------------------------------------------------------------------

void main(void)
{
    // initialize board
    Sys_Init();
    putchar(' '); //the quotes in this line may not format correctly
    Port_Init();
    XBR0_Init();
    PCA_Init();
	SMB_Init();
	
    //print beginning message
    printf("Embedded Control Car Calibration\n");

    STR_PW = PW_CENTER_STR;
    MOTOR_PW = PW_NUET_DRIVE;
    tmp0_lo_to_hi= 0xFFFF - STR_PW;
    PCA0CP0 = tmp0_lo_to_hi;

    MOTOR_PW = PW_NUET_DRIVE;
    PCA0CPL2 = 0xFFFF - MOTOR_PW;
    PCA0CPH2 = (0xFFFF - MOTOR_PW) >> 8;

    count=0;

	while (count < 50);
	while (1)
	{
		if (!SS0)
		{
			count =0;

			while (count < 2);
			if (c_counts == 2  && new_heading)
			{
				actual_heading = ReadCompass();
	        	offset = (unsigned int)((actual_heading +3600- desired_heading ) % 3600);
	       		printf("\r\n%d||%d",actual_heading,offset);
				Steering_Servo(offset);				
			}

			if (r_counts == 4 && new_range)
			{
				range = Read_Ranger();
				r_counts = 0;
				new_range = 0;
				r_data[0] = 0x51;
				i2c_write_data(r_addr, 0, r_data, 1);
				printf("\r\n The range is: %d", range);
				Drive_Motor();
			}
		}

		if (SS0) {printf("\r\n The control is paused");}
    }   
}

//******************************************************************************
// Drive and Steering Control Functions

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
	printf("\r\n Motor Power is %u", MOTOR_PW);
	PCA0CP2 = 0xFFFF - MOTOR_PW;
}

//------------------------------------------------------------------------------
// Read Ranger Function
//------------------------------------------------------------------------------
unsigned int Read_Ranger(void)
{
	unsigned int read = 0;
	r_addr = 0xE0;
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
	unsigned int range = 0;
	unsigned char addr = 0xC0;
	i2c_read_data(addr, 2,Data,2);
	range = ((unsigned int) Data[0] << 8 | Data[1]);
	return range;
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


    printf("\r\nSTR_PW: %u", STR_PW);
    tmp0_lo_to_hi= 0xFFFF - STR_PW;
    PCA0CP0 = tmp0_lo_to_hi;
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

	P3MDOUT &= ~0x40;
	P3 |= 0x40;
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
    PCA0CN = 0x40;      //Enable PCA counter
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
        PCA0 = 0x7000;
        count++;
        r_counts++;
        if (r_counts > 4)
        {
        	new_range = 1;
        	r_counts = 0;
        }
    }

    PCA0CN &= 0xC0;
}






