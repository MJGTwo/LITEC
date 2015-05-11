/* Lab5
Michael J. Gardner II && Chrstine Marini && Patrick Mitchell && Robert Guiles
Section 03
Side B
Date: 05/08/15

The goal of this code is to read the accelometer values to steer
and drive up the hill until the car is level at the top. 

CEX0 = DRIVE
CEX1 = STEERING
-Y = backward
+y = forward
-X = right
+X =left
ks = 10
kdx = 15
kdy = 15
ki= 15




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
void PCA_ISR ( void ) __interrupt 9;
void read_accel (void); //Sets global variables gx & gy
void set_servo_PWM (void);
void set_drive_PWM(void);
void updateLCD(void);
void set_gains(void); // function which allow operator to set feedback gains
void Update_Value(int Constant, unsigned char incr, int maxval, int minval);
void read_accels(void);

//-----------------------------------------------------------------------------
// Global Variables
//-----------------------------------------------------------------------------
unsigned int PW_CENTER = 2675; //pw to steer straight 
unsigned int PW_RIGHT = 3175;  //pw to steer right
unsigned int PW_LEFT = 2135;   //pw to steer left
unsigned int SERVO_PW = 2765;  //neutral drive pw
unsigned int SERVO_MAX= 3503;  //max forward speed pw
unsigned int SERVO_MIN= 2028;  //max reverse speed pw
unsigned int DRV_PW;           //variable pulsewidth to control speed
unsigned int STR_PW;           //variable pulsewidth to controll steering
unsigned char new_accels = 0; // flag for count of accel timing
unsigned char new_lcd = 0;    // flag for count of LCD timing
unsigned int range;
unsigned int count;           // overflow count for acceleration
unsigned char ks, kdy,kdx, ki;
		 int gx,gy;
		 char xoff,yoff;
unsigned char run_stop; // define local variables
		 int error_sum;

__sbit __at 0xB6 run;         // sbit linked to slide switch

//-----------------------------------------------------------------------------
// Main Function
//-----------------------------------------------------------------------------
void main(void)
{
	int x=0;
	xoff = -170;
	yoff = -220;
	error_sum=0;
	Sys_Init(); // initialize board
	putchar(' ');
	Port_Init();
	PCA_Init();
	SMB_Init();
	XBR0_Init();
	Accel_Init();

	count = 0;
	DRV_PW = SERVO_PW;
	STR_PW = PW_CENTER;
	printf("\r\nGO!");

	while (1)
	{
		x++;
		run_stop = 0;
		while (!run) // make run an sbit for the run/stop switch
		{ // stay in loop until switch is in run position
			DRV_PW = SERVO_PW;
			STR_PW = PW_CENTER;
			PCA0CP0 = 0xFFFF - DRV_PW;
			PCA0CP1 = 0xFFFF - DRV_PW;
			if (run_stop == 0)
			{
				set_gains(); // function adjusting feedback gains
				run_stop = 1; // only try to update once
			}
			count=0;
		}
		read_accels();
		set_servo_PWM(); // set the servo PWM
		set_drive_PWM(); // set drive PWM
		printf("\r\n%u,\t%d,\t%d,\t%u,\t%u",count,(gx+ xoff),(gy+ yoff),DRV_PW,STR_PW);
		new_accels = 0;
		if (count % 15 == 0) // enough overflow to write to LCD
		{
			updateLCD(); // display values
			new_lcd = 0;
	
		}
	}
}

//-----------------------------------------------------------------------------
// Control Functions
//-----------------------------------------------------------------------------
void set_gains(void)
{
	lcd_clear();
	lcd_print("Please enter a ks value:\n "); 
	ks = kpd_input(0);    //prompts and stores vale for ks gain
	lcd_clear();
	lcd_print("Please enter a kdx value:\n ");
	kdx = kpd_input(0);   //prompts and stores value for kdx gain
	lcd_clear();
	lcd_print("Please enter a kdy value:\n ");
	kdy = kpd_input(0);   //promts and stores value for kdy gain
	lcd_clear();
	lcd_print("Please enter a ki value:\n ");	
	ki  = kpd_input(0);   //prompts and stores value for ki gain
	lcd_clear();
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
	char Data[4];
	int avg_gx, avg_gy;
	char i =0;
	avg_gy=avg_gx=0;
	gx=gy=0;
	for (; i < 12; i++)
	{
		wait();
		i2c_read_data(0x30,0x27,Data,1);
		if (Data[0] & 0x03 == 0x03)
		{
			i2c_read_data(0x30,0x28|0x80,Data,4);
			avg_gx += ((Data[1] << 8) >> 4);
			avg_gy += ((Data[3] << 8) >> 4);
		}
	}
	avg_gy= avg_gy/12;
	avg_gx= avg_gx/12;
	gx = avg_gx;
	gy = avg_gy;


}

void set_drive_PWM(void)
{
	DRV_PW = SERVO_PW + kdy * gy;       //sets the pulsewidth of the drive motor
	DRV_PW += kdx * abs(gx); + ki * error_sum; //ensures that the drive pulsewidth is 
	error_sum += gy + abs(gx);                 //not bigger/smaller than max/min value   

	PCA0CP0 = 0xFFFF - DRV_PW;      //sets capture compare module value  
}

void set_servo_PWM(void)
{
	STR_PW = PW_CENTER - ks  * gx;      //sets the pulsewidth of the steering servo
	if (STR_PW < PW_LEFT) STR_PW = PW_LEFT;   //ensures that the steering pulsewith is
	if (STR_PW > PW_RIGHT) STR_PW = PW_RIGHT; //not bigger than max or smaller than min values
	PCA0CP1 = 0xFFFF - STR_PW;
}



void updateLCD(void)
{
	lcd_clear();
	lcd_print("ks: %u, kdx: %u, kdy: %u\nMpw: %u, Spw: %u\n"); //prints values
	                   //for ks, kdx, kdy gains and motor and steering pulsewidth
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
.
//-----------------------------------------------------------------------------
// Initialization and ISR Functions
//-----------------------------------------------------------------------------
void PCA_Init(void)
{
	PCA0MD = 0x81;
	PCA0CPM0 = 0xC2;
	PCA0CPM1 = 0xC2;
	PCA0CN 	= 0x40;      //Enable PCA counter
    EIE1 |= 0x08;       //Enable PCA interrupt
    EA = 1;             //Enable global interrupts


}

void Port_Init(void)
{
<<<<<<< HEAD
	lcd_clear();
	lcd_print("ks: %u kdx: %u\rkdy: %u\rMpw: %u\rSpw: %u",ks,kdx,kdy,DRV_PW,STR_PW);
=======
    P1MDOUT |= 0x03;  //set output pin for CEX0 and CEX2 in push-pull mode

	P3MDOUT &= ~0x40;
	P3 = 0x40;
>>>>>>> origin/dev
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

void PCA_ISR ( void ) __interrupt 9
{
	if (CF)
	{
		CF = 0; // clear overflow indicator
		count++;
		PCA0L = PCA_START;
		PCA0H = PCA_START >> 8;
	}
	// handle other PCA interrupt sources
	PCA0CN &= 0xC0;
}