/* Sample code for Lab 3.1. This code provides a basic start. */
#include <c8051_SDCC.h>
#include <stdio.h>
#include <stdlib.h>
//-----------------------------------------------------------------------------
// Function Prototypes
//-----------------------------------------------------------------------------
void Port_Init(void);
void PCA_Init (void);
void XBR0_Init();
void Steering_Servo(void);
void PCA_ISR ( void ) __interrupt 9;

//-----------------------------------------------------------------------------
// Global Variables
//-----------------------------------------------------------------------------
unsigned int PW_CENTER = 2765;
unsigned int PW_MIN =  2085;
unsigned int PW_MAX = 3265;
unsigned int PW = 0;
unsigned int count =0;
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

    //print beginning message
    printf("Embedded Control Steering Calibration\n");
    // set the PCA output to a neutral setting
    //__________________________________________
    //__________________________________________
    PW = PW_CENTER;
    count=0;
	while (count < 29);
    PCA0CPL0 = 0xFFFF - PW;
    PCA0CPH0 = (0xFFFF - PW) >> 8;
    while(1)
        Steering_Servo();
}

//-----------------------------------------------------------------------------
// Port_Init
//-----------------------------------------------------------------------------
//
// Set up ports for input and output
//
void Port_Init()
{
    P1MDOUT = 0x0F;  //set output pin for CEX0 or >CEX2< in push-pull mode

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
	PCA0CPM0 = 0xC2;	//CCM0 in 16-bit compare mode
    PCA0CN = 0x40;		//Enable PCA counter
	EIE1 |= 0x08;		//Enable PCA interrupt
	EA = 1;				//Enable global interrupts
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
    char input;
    //wait for a key to be pressed
    input = (char)getchar();
    if(input == 'r')  // single character input to increase the pulsewidth
    {
        // ___________________________
        // ___________________________
        if(PW <= PW_MIN)  // check if less than pulsewidth minimum
        {	
			PW = PW_MIN;    // set SERVO_PW to a minimum value
    	}
		else
		{
			PW -= 10;
		}
	}
    else if(input == 'l')  // single character input to decrease the pulsewidth
    {
        // ___________________________
        // ___________________________
        if(PW > PW_MAX)  // check if pulsewidth maximum exceeded
        {
			PW = PW_MAX;     // set PW to a maximum value
    	}
		else
		{
			PW += 10;
		}
	}
    printf("PW: %u\n", PW);
    PCA0CPL0 = 0xFFFF - PW;
    PCA0CPH0 = (0xFFFF - PW) >> 8;

}
