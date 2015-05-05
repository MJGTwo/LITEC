/* Lab5
Michael J. Gardner II && Chrstine Marini && Patrick Mitchell && Robert Guiles
Section 03
Side B
Date: 05/04/15

The goal of this code is to read the 
*/


/* Sample code for main function to read the accelerometer */
#include <c8051_SDCC.h>
#include <stdlib.h>// needed for abs function
#include <stdio.h>
#include <i2c.h>
#define PCA_START 	  28672
//-----------------------------------------------------------------------------
// 8051 Initialization Functions
//-----------------------------------------------------------------------------
void Port_Init(void);
void PCA_Init (void);
void SMB_Init (void);
void XBR0_Init(void);
void wait(void);
void start(void);
void Interrupt_Init(void);
void PCA_ISR ( void ) __interrupt 9;
void read_accel (void); //Sets global variables gx & gy
void set_servo_PWM (void);
void set_drive_PWM(void);
void updateLCD(void);
void set_gains(void); // function which allow operator to set feedback gains
void Update_Value(int Constant, unsigned char incr, int maxval, int minval);
void read_accels(void);
//define global variables
unsigned int PW_CENTER = 2685;
unsigned int PW_RIGHT = 2235;
unsigned int PW_LEFT = 3185;
unsigned int SERVO_PW = 2765;
unsigned int SERVO_MAX= 3503;
unsigned int SERVO_MIN= 2028;
unsigned char new_accels = 0; // flag for count of accel timing
unsigned char new_lcd = 0; // flag for count of LCD timing
unsigned int range;
unsigned char count; // overflow count for acceleration
unsigned char lcd_count; // overflow count for LCD updates
unsigned char ks, kdy,kdx;
unsigned int avg_gx,avg_gy;

__sbit __at 0xB7 run;

//-----------------------------------------------------------------------------
// Main Function
//-----------------------------------------------------------------------------
void main(void)
{
	unsigned char run_stop; // define local variables
	Sys_Init(); // initialize board
	putchar(' ');
	Port_Init();
	PCA_Init();
	SMB_Init();
	Interrupt_Init();
	Accel_Init();
	count = 0;
	lcd_count = 0;
	while (1)
	{
		run_stop = 0;
		while (!run) // make run an sbit for the run/stop switch
		{ // stay in loop until switch is in run position
			if (run_stop == 0)
			{
				set_gains(); // function adjusting feedback gains
				run_stop = 1; // only try to update once
			}
		}
		read_accels();
		set_servo_PWM(); // set the servo PWM
		set_drive_PWM(); // set drive PWM
		new_accels = 0;
		if (new_lcd) // enough overflow to write to LCD
		{
			updateLCD(); // display values
			new_lcd = 0;
			lcd_count = 0;
		}
	}
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
		CF = 0; // clear overflow indicator
		count++;
		lcd_count++;
		if (lcd_count>=15)
		{
			new_lcd = 1;
			lcd_count = 0;
		}
		PCA0L = PCA_START;
		PCA0H = PCA_START >> 8;
	}
	// handle other PCA interrupt sources
	PCA0CN &= 0xC0;
}

void wait(void)
{
	int old_count = count+1;
	while (old_count> count);
}

void start(void)            ///WAITS UNTIL '*' IS ENTERED
{
	while (read_keypad() != '*') wait();
}

void set_gains(void)
{
	lcd_clear();
	lcd_print("Please enter a ks value:\n ");
	ks = kpd_input(0);
	lcd_clear();
	lcd_print("Please enter a kdx value:\n ");
	kdx = kpd_input(0);
	lcd_clear();
	lcd_print("Please enter a kdy value:\n ");
	kdy = kpd_input(0);
	lcd_clear();
}

void XBR0_Init(void)
{
	XBR0 = 0x17;
}

void SMB_Init(void)
{
	SMB0CR =0x93;
	ENSMB =1;
}

void Update_Value(int Constant, unsigned char incr, int maxval, int minval)
{	
	int deflt;
	char input;
	// 'c' - default, 'i' - increment, 'd' - decrement, 'u' - update and return
	// This can easily be changed to use the keypad instead of the terminal
	deflt = Constant;
	while(1)
	{
		input = getchar();
		if (input == 'c') Constant = deflt;
		if (input == 'i')
		{
			Constant += incr;
			if (Constant > maxval) Constant = maxval;
		}
		if (input == 'd')
		{
			Constant -= incr;
			if (Constant < minval) Constant = minval;
		}
		if (input == 'u')
		{
			return;
		}
	}
}

void read_accels(void)
{

}

void set_servo_PWM(void)
{

}

void PCA_Init(void)
{

}

void updateLCD(void)
{

}

void set_drive_PWM(void)
{

}

void Interrupt_Init(void)
{

}

void Port_Init(void)
{

}