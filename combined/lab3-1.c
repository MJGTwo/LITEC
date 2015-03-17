/* Sample code for speed control using PWM. */
#include <stdio.h>
#include <c8051_SDCC.h>
#define PW_MIN_DRIVE  2028
#define PW_MAX_DRIVE  3503
#define PW_NEUT_DRIVE 2765
#define PW_CENTER_STR 2765
#define PW_MIN_STR	  2085
#define PW_MAX_STR	  3265
//-----------------------------------------------------------------------------
// 8051 Initialization Functions
//-----------------------------------------------------------------------------
void Port_Init(void);
void PCA_Init (void);
void XBR0_Init(void);
void Drive_Motor(void);
void Steering_Servo(void);
unsigned int MOTOR_PW = 0;
unsigned int STR_PW	  = 0;
unsigned int counts = 0;
char input;
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
    STR_PW = PW_CENTER_STR;
   	MOTOR_PW = PW_NEUT_DRIVE;
	
    PCA0CPL0 = 0xFFFF - STR_PW;
    PCA0CPH0 = (0xFFFF - STR_PW) >> 8;
    PCA0CPL2 = 0xFFFF - MOTOR_PW;
    PCA0CPH2 = (0xFFFF - MOTOR_PW) >> 8;
    count=0;
    while (count < 29);
    while(1)
    {
    	input = (char)getchar();
    	Steering_Servo();
    	Drive_Motor();
    }

        
}

void Port_Init()
{
    P1MDOUT = 0x0F;  //set output pin for CEX0 or CEX2 in push-pull mode

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
	PCA0CPM2 = 0xC2;		// 16-bit Compare Mode
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
    
    //wait for a key to be pressed

    if(input == 'r')  // single character input to increase the pulsewidth
    {
        // ___________________________
        // ___________________________
        if(STR_PW<= PW_MIN)  // check if less than pulsewidth minimum
        {	
			STR_PW= PW_MIN;    // set SERVO_PW to a minimum value
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
        if(STR_PW> PW_MAX)  // check if pulsewidth maximum exceeded
        {
			STR_PW= PW_MAX;     // set STR_PW to a maximum value
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

void Drive_Motor()
{

	//wait for a key to be pressed
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
	printf("\r\nMOTOR_PW: %u",MOTOR_PW);
}