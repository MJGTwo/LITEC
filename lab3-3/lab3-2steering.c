/*  Lab3-2
Michael J. Gardner II && Chrstine Marini
Section 03
Side B
Date: 03/20/15

The goal of this code is to read values from the compass via i2c

 */
#include <stdio.h>
#include <c8051_SDCC.h>
#include <i2c.h>
#define PW_CENTER_STR 2765
#define PW_MIN_STR    2265
#define PW_MAX_STR    3275
//-----------------------------------------------------------------------------
// 8051 Initialization Functions
//-----------------------------------------------------------------------------
void Port_Init(void);
void PCA_Init (void);
void XBR0_Init(void);
void SMB_Init(void);
unsigned int ReadCompass(void);
void Steering_Servo(void);
unsigned int STR_PW   = 0;
unsigned int count = 0;
char input;
unsigned int answer;
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
    printf("Embedded Control Steering Calibration\n");
    // set the PCA output to a neutral setting
    //__________________________________________
    //__________________________________________
    STR_PW = PW_CENTER_STR;
    
    PCA0CPL0 = 0xFFFF - STR_PW;
    PCA0CPH0 = (0xFFFF - STR_PW) >> 8;
    count=0;
	while (count < 50);
	while (1)
	{
		count =0;
		while (count < 2);
		answer = ReadCompass();
		printf("\r\n%d",answer);
	}
	

        
}

void Port_Init()
{
    P1MDOUT = 0x0F;  //set output pin for CEX0 or CEX2 in push-pull mode
	P0MDOUT &= ~0x32;
}

unsigned int ReadCompass(void)
{
	unsigned char Data[2];
	unsigned int range =0;
	unsigned char addr=0xC0;
	i2c_read_data(addr, 2,Data,2);
	range = ((unsigned int) Data[0] << 8 | Data[1]);
	return range;

}

//-----------------------------------------------------------------------------
// XBR0_Init
//-----------------------------------------------------------------------------
//
// Set up the crossbar
//
void XBR0_Init()
{
    
    XBR0  = 0x27;  //configure crossbar as directed in the laboratory

}

void SMB_Init(void)
{
	SMB0CR =0x93;
	ENSMB =1;
}

//-----------------------------------------------------------------------------
// PCA_Init
//-----------------------------------------------------------------------------
//
// Set up Programmable Counter Array
//
void PCA_Init(void)
{
    // reference to the sample code in Example 4.5 -Pulse Width Modulation 
    // implemented using the PCA (Programmable Counter Array), p. 50 in Lab Manual.
    PCA0MD = 0x81;
    PCA0CPM0 = 0xC2;    //CCM0 in 16-bit compare mode
    PCA0CN = 0x40;      //Enable PCA counter
    EIE1 |= 0x08;       //Enable PCA interrupt
    EA = 1;             //Enable global interrupts
}

//-----------------------------------------------------------------------------
// PCA_ISR
//-----------------------------------------------------------------------------
//
// Interrupt Service Routine for Programmable Counter Array Overflow Interrupt
//
void PCA_ISR ( void ) __interrupt 9
{

    if (CF)
    {
        CF =0;
        PCA0 = 0x7000;
        count++;
    }

    PCA0CN &= 0xC0;
    // reference to the sample code in Example 4.5 -Pulse Width Modulation 
    // implemented using the PCA (Programmable Counter Array), p. 50 in Lab Manual.
}

void Steering_Servo()
{
    
    //wait for a key to be pressed

    if(input == 'r')  // single character input to increase the pulsewidth
    {
        // ___________________________
        // ___________________________
        if(STR_PW<= PW_MIN_STR)  // check if less than pulsewidth minimum
        {   
            STR_PW= PW_MIN_STR;    // set SERVO_PW to a minimum value
        }
        else
        {
            STR_PW-= 10;
        }
    }
    else if(input == 'l')  // single character input to decrease the pulsewidth
    {
        // ___________________________
        // ___________________________
        if(STR_PW> PW_MAX_STR)  // check if pulsewidth maximum exceeded
        {
            STR_PW= PW_MAX_STR;     // set STR_PW to a maximum value
        }
        else
        {
            STR_PW+= 10;
        }
    }
    printf("\r\nSTR_PW: %u", STR_PW);
    PCA0CPL0 = 0xFFFF - STR_PW;
    PCA0CPH0 = (0xFFFF - STR_PW) >> 8;

}




