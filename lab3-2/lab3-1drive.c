/* Sample code for speed control using PWM. */
#include <stdio.h>
#include <c8051_SDCC.h>
#define PW_MIN 2028
#define PW_MAX 3503
#define PW_NEUT 2765

//-----------------------------------------------------------------------------
// 8051 Initialization Functions
//-----------------------------------------------------------------------------
void Port_Init(void);
void PCA_Init (void);
void XBR0_Init(void);
void Drive_Motor(void);
unsigned int MOTOR_PW = 0;
unsigned int counts = 0;
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
	printf("Embedded Control Drive Motor Control\r\n");
	
	//set initial value
	MOTOR_PW = PW_NEUT;
	PCA0CP2 = 0xFFFF - MOTOR_PW;
	counts=0;
	while (counts < 50);
	printf("\r\nthis");
	while(1)
	{
		Drive_Motor();
	}
}
//-----------------------------------------------------------------------------
// Drive_Motor
//-----------------------------------------------------------------------------
//
// Vary the pulsewidth based on the user input to change the speed
// of the drive motor.
//
void Drive_Motor()
{
	char input;
	//wait for a key to be pressed
	input = getchar();
	printf("\r\n%c",input);
	if(input == 'f') //if 'f' is pressed by the user
	{
		if(MOTOR_PW > PW_MAX)
		{
			MOTOR_PW = PW_MAX;
		}
		else
		{
			MOTOR_PW = MOTOR_PW + 10; //increase the steering pulsewidth by 10
		}
	}

	else if(input == 's') //if 's' is pressed by the user
	{
		if(MOTOR_PW < PW_MIN)
		{
			MOTOR_PW = PW_MIN;
		}
		else
		{
			MOTOR_PW = MOTOR_PW - 10; //decrease the steering pulsewidth by 10
		}
	}
	PCA0CP2 = 0xFFFF - MOTOR_PW;
	printf("\r\n%d",MOTOR_PW);
}

//-----------------------------------------------------------------------------
// Port_Init
//-----------------------------------------------------------------------------
void Port_Init()
{
	P1MDOUT |= 0x0F;//set output pin for CEX2 in push-pull mode
}

//-----------------------------------------------------------------------------
// XBR0_Init
//-----------------------------------------------------------------------------
void XBR0_Init()
{
	XBR0 = 0x27; //configure crossbar with UART, SPI, SMBus, and CEX channels as
	// in worksheet
}

//-----------------------------------------------------------------------------
// PCA_Init
//-----------------------------------------------------------------------------
void PCA_Init(void)
{
	// reference to the sample code in Example 4.5 - Pulse Width Modulation
	// implemented using the PCA (Programmable Counter Array, p. 50 in Lab Manual.
	// Use a 16 bit counter with SYSCLK/12.

	PCA0MD = 0x81;			// Enable CF interrupt & SYSCLK/12
	PCA0CPM2 = 0xC2;		// 16-bit Compare Mode
	PCA0CN = 0x40;			// Enable PCA Counter
	EIE1 |= 0x08;			// Enable PCA Interrupt
	EA = 1;					// Enable Global Interrupts
}

//-----------------------------------------------------------------------------
// PCA_ISR
//-----------------------------------------------------------------------------

// Interrupt Service Routine for Programmable Counter Array Overflow Interrupt
void PCA_ISR ( void ) __interrupt 9
{
	// reference to the sample code in Example 4.5 -Pulse Width Modulation
	// implemented using the PCA (Programmable Counter Array), p. 50 in Lab Manual.
	if (CF)
	{
		CF = 0;				// Clear Overflox Flag
		PCA0 = 0x7000;		// Establishes the 20ms period
		counts++;
	}
	PCA0CN &= 0xC0;			// Handle other PCA Interrupt Sources
}