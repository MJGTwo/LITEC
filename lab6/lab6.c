
 /*  Lab6
Michael J. Gardner II && Chrstine Marini && Patrick Mitchell && Robert Guiles
Section 03
Side B
Date: 04/23/15

The goal of the code is to contorl a blimp. With style!

*/



#include <stdio.h>
#include <stdlib.h>
#include <c8051_SDCC.h>
#include <i2c.h>
#define PCA_START 	28672

//-----------------------------------------------------------------------------
// c8051 Initialization Functions
//-----------------------------------------------------------------------------
void Port_Init(void);
void PCA_Init (void);
void XBR0_Init(void);
void SMB_Init(void);
void ADC_Init(void);

void wait(void);
void start(void);
unsigned int direction(void);

//void Rudder_cal(void);
//void Angle_cal(void);
//void Thrust_cal(void);
//void Calibrate(void);
void kpkd(void);

void Change_D(void);
unsigned int Read_Ranger(void);
unsigned int ReadCompass(void);
void Steering_func(void);
void Steering_Servo(unsigned int direction);

//-----------------------------------------------------------------------------
// Define Global Variables
//-----------------------------------------------------------------------------
int count=0;
//thrust control values, max=forward, min=reverse
unsigned int PW_MIN_THRUST = 2000;
unsigned int PW_NUET_THRUST = 2750;
unsigned int PW_MAX_THRUST = 3500;

//rudder control values
unsigned int PW_LEFT_RUDDER = 2000;
unsigned int PW_CENTER_RUDDER = 2750;
unsigned int PW_RIGHT_RUDDER = 3500;

//pitch angle control values, 
unsigned int PW_UP_ANGLE = 2880;
unsigned int PW_CENTER_ANGLE = 3530;
unsigned int PW_DOWN_ANGLE = 4180;

//
unsigned int RUDDER_PW;
unsigned int RDR_lo_to_hi;
unsigned int ANGLE_PW;
unsigned int AGL_lo_to_hi;
unsigned int RTHRUST_PW;
unsigned int LTHRUST_PW;
unsigned int RTRST_lo_to_hi;
unsigned int LTRST_lo_to_hi;

//extra variables stored on extra memory device
__xdata  int desired_D;
__xdata  int actual_D;
__xdata unsigned int offset;
__xdata	 int error =0;
__xdata  int old_error =0;
__xdata unsigned int distanceR=40;

unsigned char r_data[2];
unsigned char r_addr = 0xE0;

float kp;
int kd;
 

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

	RUDDER_PW= PW_CENTER_RUDDER;
	ANGLE_PW = PW_CENTER_ANGLE;
	RTHRUST_PW = PW_NUET_THRUST;
	LTHRUST_PW = PW_NUET_THRUST;

	RDR_lo_to_hi = 0xFFFF - RUDDER_PW;
	RTRST_lo_to_hi = 0xFFFF - RTHRUST_PW;
	LTRST_lo_to_hi = 0xFFFF - LTHRUST_PW;
	AGL_lo_to_hi = 0xFFFF - ANGLE_PW;

	PCA0CP0 = RDR_lo_to_hi;
	PCA0CP1 = AGL_lo_to_hi;	
	PCA0CP2 = RTRST_lo_to_hi;
	PCA0CP3 = LTRST_lo_to_hi;

	kpkd();
	//printf("that");
	//Calibrate();

	direction();
	count=0;
	while (1)
	{
		//printf("\r\n%u",actual_D);
		wait();
		if ((count +1) % 2 ==0)
		{

			Steering_func();
		}
		if ((count +1) % 4 ==0)
		{
			Change_D();
		}
		if ((count+1) % 8 == 0)
		{
			printf("\r\n%u,\t%d,\t%d,\t%u,\t%d,\t%u",count,desired_D,actual_D,distanceR,error,RTHRUST_PW);
		}
	}

}

void kpkd(void)
{
	lcd_clear();
	lcd_print("Please enter a kp value:\n ");
	kp = kpd_input(0);
	kp = 12;
	lcd_clear();
	lcd_print("Please enter a kd value:\n ");
	kd = kpd_input(0);
	kd = 180;
	lcd_clear();
}


void Change_D(void)
{
	
	__xdata int temp =1;
	while (distanceR < 50)
	{
		distanceR = 100;
		distanceR = Read_Ranger();
		r_data[0] = 0x51;
		i2c_write_data(r_addr, 0, r_data, 1);
		//printf("\r\n%u", distanceR);

		if (distanceR < 50 && temp ==1)
		{
			desired_D = (desired_D + 1800) % 3600;
			temp =0;
		}	
	}

}

unsigned int Read_Ranger(void)
{
	__xdata unsigned int read = 0;
	i2c_read_data(r_addr, 2, r_data, 2);
	read = (((unsigned int) r_data[0] <<8) | r_data[1]);
	return read;
}

void Steering_func(void)    ///FUNCTION TO HOLD ACTIONS FOR STEERING
{
	actual_D = ReadCompass();
	lcd_clear();
	lcd_print("%d", actual_D);
	offset = (unsigned int)((actual_D +3600- desired_D ) % 3600);
	Steering_Servo(offset);
}

unsigned int direction(void)        ///ADJUSTS THE VALUES OF DIRECTION SO THE DESIRED DIRECTION IS THE CAR'S 'NORTH'
{
	__xdata int value;
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

unsigned int ReadCompass(void)
{
	unsigned char Data[2];

	unsigned int Crange = 0;
	unsigned char addr = 0xC0;
	i2c_read_data(addr, 2,Data,2);
	Crange = ((unsigned int) Data[0] << 8 | Data[1]);
	return Crange;
}

/*
void Calibrate(void)
{


	Rudder_cal();
	RUDDER_PW= PW_CENTER_RUDDER;
	RDR_lo_to_hi = 0xFFFF - RUDDER_PW;
	PCA0CP0 = RDR_lo_to_hi;

	Angle_cal();
	ANGLE_PW = PW_CENTER_ANGLE;
	AGL_lo_to_hi = 0xFFFF - ANGLE_PW;
	PCA0CP1 = AGL_lo_to_hi;

	Thrust_cal();
	RTHRUST_PW = PW_NUET_THRUST;
	LTHRUST_PW = PW_NUET_THRUST;
	RTRST_lo_to_hi = 0xFFFF - RTHRUST_PW;
	LTRST_lo_to_hi = 0xFFFF - LTHRUST_PW;
}*/

/*
void Rudder_cal(void)
{	
	__xdata char st;
	__xdata int value =0;
	__xdata int times =0;
	count =0;
	lcd_clear();
	lcd_print("Rudder Calibration");
	while (count < 50);
	lcd_clear();
	while (1)
	{

		count =0;
		while (count < 1);
		lcd_clear();
		lcd_print("go left: press 1\n go right: press 2\nPress * for next screen");
		start();
		lcd_clear();
		lcd_print("\n confirm: press 3\n press * to begin");
		start();
		st =0;
		while (1)
		{
			printf("\r\n %u",RUDDER_PW);
			RDR_lo_to_hi = 0xFFFF - RUDDER_PW;
			PCA0CP0 = RDR_lo_to_hi;

			if (times == 0 )
			{
				if (value ==0)
				{
					lcd_clear();
					 lcd_print("Now calibrating Min_PW\n");
					 if (st ==0 ) RUDDER_PW = PW_LEFT_RUDDER;
					 st =1;
				}
				value = kpd_input(1);
				if (value == 1)
				{
					RUDDER_PW -= 20;
				}
				else if (value==2)
				{
					RUDDER_PW += 20;
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
					lcd_clear();
					 lcd_print("Now calibrating Cen_PW");
					 RUDDER_PW = PW_CENTER_RUDDER;
				}
				value = kpd_input(1);
				if (value == 1)
				{
					RUDDER_PW -= 20;
				}
				else if (value==2)
				{
					RUDDER_PW += 20;
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
					lcd_clear();
					lcd_print("Now calibrating Max_PW");
					RUDDER_PW = PW_RIGHT_RUDDER;
				}
				value = kpd_input(1);
				if (value == 1)
				{
					RUDDER_PW -= 20;
				}
				else if (value==2)
				{
					RUDDER_PW += 20;
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
	char st;
	__xdata int value =0;
	__xdata int times =0;
	count =0;
	lcd_clear();
	lcd_print("Angle Calibration");
	while (count < 50);
	lcd_clear();
	while (1)
	{
		count = 0;
		while (count < 1);
		lcd_clear();
		lcd_print("go left: press 1\n go right: press 2\nPress * for next screen");
		start();
		lcd_clear();
		lcd_print("\n confirm: press 3\n press * to begin");
		start();
		st =0;
		while (1)
		{
			printf("\r\n %u",ANGLE_PW);
			AGL_lo_to_hi = 0xFFFF - ANGLE_PW;
			PCA0CP1 = AGL_lo_to_hi;

			if (times == 0 )
			{
				if (value ==0)
				{
					 lcd_clear();
					 lcd_print("Now calibrating Min_PW UP ANGLE");
					 if (st == 0) ANGLE_PW = PW_UP_ANGLE;
					 st =1;
				}
				value = kpd_input(1);
				if (value == 1)
				{
					ANGLE_PW -= 30;
				}
				else if (value==2)
				{
					ANGLE_PW += 30;
				}
				else if (value == 3)
				{
					times++;
					value =0;
					st=0;
					PW_UP_ANGLE = ANGLE_PW;
				}
			}
			else if (times ==1)
			{
				if (value ==0)
				{
					 lcd_clear();
					 lcd_print("Now calibrating Cen_PW");
					 if (st == 0) ANGLE_PW = PW_CENTER_ANGLE;
					 st=1;
				}
				value = kpd_input(1);
				if (value == 1)
				{
					ANGLE_PW -= 30;
				}
				else if (value==2)
				{
					ANGLE_PW += 30;
				}
				else if (value == 3)
				{
					times++;
					value=0;
					st=0;
					PW_CENTER_ANGLE = ANGLE_PW;
				}
			}
			else
			{
				if (value==0)
				{
					 lcd_clear();
					 lcd_print("Now calibrating Max_PW DOWN ANGLE");
					 if (st == 0) ANGLE_PW = PW_DOWN_ANGLE;
					 st=1;
				}
				value = kpd_input(1);
				if (value == 1)
				{
					ANGLE_PW -= 30;
				}
				else if (value==2)
				{
					ANGLE_PW += 30;
				}
				else if (value == 3)
				{
					PW_DOWN_ANGLE = ANGLE_PW;
					return;
				}
			}
		}
	}
}

void Thrust_cal(void)
{
	__xdata char st;
	__xdata int value =0;
	__xdata int times =0;
	count =0;
	lcd_clear();
	lcd_print("Thrust Calibration");
	while (count < 50);
	lcd_clear();
	while (1)
	{

		count = 0;
		while (count < 1);
		lcd_clear();
		lcd_print("go left: press 1\n go right: press 2\nPress * for next screen");
		start();
		lcd_clear();
		lcd_print("\n confirm: press 3\n press * to begin");
		start();
		st =0;
		times=0;
		while (1)
		{
			printf("\r\n %u",RTHRUST_PW);
			RTRST_lo_to_hi = 0xFFFF - RTHRUST_PW;
			LTRST_lo_to_hi = 0xFFFF - LTHRUST_PW;
			PCA0CP2 = RTRST_lo_to_hi;
			PCA0CP3 = LTRST_lo_to_hi;



			if (times == 0 )
			{
				if (value ==0)
				{
					 lcd_clear();
					 lcd_print("Now calibrating Min_PW");
					 if (st ==0)
					 {
						RTHRUST_PW = PW_MIN_THRUST;
						LTHRUST_PW = PW_MIN_THRUST;
					 } 
					 st =1;
				}
				value = kpd_input(1);
				if (value == 1)
				{
					RTHRUST_PW -= 30;
					LTHRUST_PW += 30;
				}
				else if (value==2)
				{
					RTHRUST_PW += 30;
					LTHRUST_PW -= 30;
				}
				else if (value == 3)
				{
					times++;
					value =0;
					st=0;
					PW_MIN_THRUST = RTHRUST_PW;

				}
			}
			else if (times ==1)
			{
				if (value ==0)
				{
					 lcd_clear();
					 lcd_print("Now calibrating Min_PW");
					 if (st ==0)
					 {
						RTHRUST_PW = PW_NUET_THRUST;
						LTHRUST_PW = PW_NUET_THRUST;
					 } 
					 st =1;
				}
				value = kpd_input(1);
				if (value == 1)
				{
					RTHRUST_PW -= 30;
					LTHRUST_PW += 30;
				}
				else if (value==2)
				{
					RTHRUST_PW += 30;
					LTHRUST_PW -= 30;
				}
				else if (value == 3)
				{
					times++;
					value =0;
					st=0;
					PW_NUET_THRUST = RTHRUST_PW;
				}
			}
			else if(times == 2)
			{
				if (value==0)
				{
					 lcd_clear();
					 lcd_print("Now calibrating Max_PW");
					 if (st == 0)
					 {
						 RTHRUST_PW = PW_MAX_THRUST;
						 LTHRUST_PW = PW_MAX_THRUST;
					 }

				}
				value = kpd_input(1);
				if (value == 1)
				{
					RTHRUST_PW -= 30;
				}
				else if (value==2)
				{
					RTHRUST_PW += 30;
				}
				else if (value == 3)
				{
					PW_MAX_THRUST = RTHRUST_PW;
					LTHRUST_PW =PW_NUET_THRUST;
					RTHRUST_PW =PW_NUET_THRUST;
				}
			}
			else return;
		}	
	}
}*/


void Steering_Servo(unsigned int direction)
{
	

	

	if (direction > 3500 || direction < 100)
	{
		error =0;
	}
	else if (direction > 1800)
	{
		error = (3600 - (int) direction);
	}
	else
	{
		error = -1* direction;
	}

	RUDDER_PW  = PW_CENTER_RUDDER + (int) (( kp* (int) error) - (int) kd * ((int)old_error -(int) error));

	RTHRUST_PW = PW_NUET_THRUST   + (int) -1* (( kp* (int) error) - (int) kd * ((int)old_error -(int) error));

	LTHRUST_PW = PW_NUET_THRUST   + (int) (( kp* (int) error) - (int) kd * ((int)old_error -(int) error));
 	
	old_error=error;
	//if (count % 25 == 0) printf("\r\n%d\t%u\t%u\t%u\t%d", error,RUDDER_PW,RTHRUST_PW,LTHRUST_PW,(int) (((int) kp* (int) error) - (int) kd * ((int)old_error -(int) error)));

	if (RUDDER_PW >= PW_RIGHT_RUDDER)
	{
		RUDDER_PW = PW_RIGHT_RUDDER;
	}
	else if(RUDDER_PW <= PW_LEFT_RUDDER)
	{
		RUDDER_PW = PW_LEFT_RUDDER;
	}

	if (RTHRUST_PW >= PW_MAX_THRUST)
	{
		RTHRUST_PW = PW_MAX_THRUST;
	}
	else if (RTHRUST_PW <=  PW_MIN_THRUST)
	{
		RTHRUST_PW = PW_MIN_THRUST;
	}
	if (LTHRUST_PW >= PW_MAX_THRUST)
	{
		LTHRUST_PW = PW_MAX_THRUST;
	}
	else if(LTHRUST_PW <= PW_MIN_THRUST)
	{
		LTHRUST_PW = PW_MIN_THRUST;
	}
	
	RDR_lo_to_hi = 0xFFFF - RUDDER_PW ;
	RTRST_lo_to_hi = 0xFFFF - RTHRUST_PW;
	LTRST_lo_to_hi = 0xFFFF - LTHRUST_PW;

    PCA0CP0 = RDR_lo_to_hi;
    PCA0CP2 = RTRST_lo_to_hi;
    PCA0CP3 = LTRST_lo_to_hi;
}


void start(void)            ///WAITS UNTIL '*' IS ENTERED
{
	while (read_keypad() != '*') wait();
}



void wait(void)
{
	__xdata int old_count = count+1;
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
    PCA0CPM3 = 0XC2;
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
