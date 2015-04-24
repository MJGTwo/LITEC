
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

void Rudder_cal(void);
void Angle_cal(void);
void Thrust_cal(void);

void Change_D(void);
unsigned int Read_Ranger(void);
unsigned int ReadCompass(void);
void Steering_func(void);
void Steering_Servo(unsigned int direction);

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
unsigned int RDR_lo_to_hi;
unsigned int ANGLE_PW;
unsigned int AGL_lo_to_hi;
unsigned int THRUST_PW;
unsigned int TRST_lo_to_hi;

 		 int desired_D;
 		 int actual_D;
unsigned int offset;

unsigned char r_data[2];

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
	THRUST_PW = PW_NUET_THRUST;

	RDR_lo_to_hi = 0xFFFF - RUDDER_PW;
	TRST_lo_to_hi = 0xFFFF - THRUST_PW;
	AGL_lo_to_hi = 0xFFFF - ANGLE_PW;

	PCA0CP0 = RDR_lo_to_hi;
	PCA0CP1 = AGL_lo_to_hi;
	PCA0CP2 = TRST_lo_to_hi;




	Rudder_cal();
	while (1)
	{
		printf("\r\n%u ms",count*20);
		wait();
	}

}

void Change_D(void)
{
	unsigned int distance=100;
	if (count +1 % 4 == 0)
	{
		distance = Read_Ranger();
	}
	if (distance < 50)
	{
		desired_D = (desired_D + 1800) % 3600;
	}
}

unsigned int Read_Ranger(void)
{


	unsigned char r_addr = 0xE0;
	unsigned int read = 0;
	i2c_read_data(r_addr, 2, r_data, 2);
	read = (((unsigned int) r_data[0] <<8) | r_data[1]);
	return read;
}

void Steering_func(void)    ///FUNCTION TO HOLD ACTIONS FOR STEERING
{
	actual_D = ReadCompass();
	offset = (unsigned int)((actual_D +3600- desired_D ) % 3600);
	Steering_Servo(offset);

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

unsigned int ReadCompass(void)
{
	unsigned char Data[2];

	unsigned int Crange = 0;
	unsigned char addr = 0xC0;
	i2c_read_data(addr, 2,Data,2);
	Crange = ((unsigned int) Data[0] << 8 | Data[1]);
	return Crange;
}

void Rudder_cal(void)
{	
	int value =0;
	int times =0;
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
					 RUDDER_PW = PW_LEFT_RUDDER;
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
	int value =0;
	int times =0;
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

		while (1)
		{
			printf("\r\n %u",ANGLE_PW);
			AGL_lo_to_hi = 0xFFFF - ANGLE_PW;
			PCA0CP1 = AGL_lo_to_hi;
			if (times == 0 )
			{
				if (value ==0)
				{
					 lcd_print("Now calibrating Min_PW UP ANGLE");
					 ANGLE_PW = PW_UP_ANGLE;
				}
				value = kpd_input(1);
				if (value == 1)
				{
					ANGLE_PW -= 10;
				}
				else if (value==2)
				{
					ANGLE_PW += 10;
				}
				else if (value == 3)
				{
					times++;
					value =0;
					PW_UP_ANGLE = ANGLE_PW;
				}
			}
			else if (times ==1)
			{
				if (value ==0)
				{
					 lcd_print("Now calibrating Cen_PW");
					 ANGLE_PW = PW_CENTER_ANGLE;
				}
				value = kpd_input(1);
				if (value == 1)
				{
					ANGLE_PW -= 10;
				}
				else if (value==2)
				{
					ANGLE_PW += 10;
				}
				else if (value == 3)
				{
					times++;
					value=0;
					PW_CENTER_ANGLE = ANGLE_PW;
				}
			}
			else
			{
				if (value==0)
				{
					 lcd_print("Now calibrating Max_PW DOWN ANGLE");
					 ANGLE_PW = PW_DOWN_ANGLE;
				}
				value = kpd_input(1);
				if (value == 1)
				{
					ANGLE_PW -= 10;
				}
				else if (value==2)
				{
					ANGLE_PW += 10;
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
	int value =0;
	int times =0;
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
		
		while (1)
		{
			printf("\r\n %u",THRUST_PW);
			TRST_lo_to_hi = 0xFFFF - THRUST_PW;
			PCA0CP2 = TRST_lo_to_hi;
			if (times == 0 )
			{
				if (value ==0)
				{
					 lcd_print("Now calibrating Min_PW");
					 RUDDER_PW = PW_MIN_THRUST;
				}
				value = kpd_input(1);
				if (value == 1)
				{
					THRUST_PW -= 10;
				}
				else if (value==2)
				{
					THRUST_PW += 10;
				}
				else if (value == 3)
				{
					times++;
					value =0;
					PW_MIN_THRUST = THRUST_PW;
				}
			}
			else if (times ==1)
			{
				if (value ==0)
				{
					 lcd_print("Now calibrating Cen_PW");
					 RUDDER_PW = PW_NUET_THRUST;
				}
				value = kpd_input(1);
				if (value == 1)
				{
					THRUST_PW -= 10;
				}
				else if (value==2)
				{
					THRUST_PW += 10;
				}
				else if (value == 3)
				{
					times++;
					value=0;
					PW_NUET_THRUST = RUDDER_PW;
				}
			}
			else
			{
				if (value==0)
				{
					 lcd_print("Now calibrating Max_PW");
					 THRUST_PW = PW_MAX_THRUST;
				}
				value = kpd_input(1);
				if (value == 1)
				{
					THRUST_PW -= 10;
				}
				else if (value==2)
				{
					THRUST_PW += 10;
				}
				else if (value == 3)
				{
					PW_MAX_THRUST = THRUST_PW;
					return;
				}
			}
		}	
	}
}


void Steering_Servo(unsigned int direction)
{
    
    //wait for a key to be pressed
	if (direction < 1800)               /////IF FACING OPPOSITE DIRECTION, TURN LEFT
	{
		if (RUDDER_PW <= PW_CENTER_RUDDER - (float)(direction)/4.2)   ///MAKES RATIO TO SMOOTHLY TURN
		{
			RUDDER_PW = PW_CENTER_RUDDER - (float)(direction)/4.2;
		}
		else
		{
			RUDDER_PW -= 10;
		}
	}
	else if ( direction == 0 || direction ==3600)       ///GO STRAIGHT
	{
		RUDDER_PW=PW_CENTER_RUDDER;
	}
	else                            /////TURN RIGHT OTHERWISE
	{
		if (RUDDER_PW >= PW_CENTER_RUDDER + (float)(3600-direction)/1.9)
		{
			RUDDER_PW = PW_CENTER_RUDDER + (float)(3600-direction)/1.9;
		}
		else
		{
			RUDDER_PW += 10;
		}			
	}		


    //printf("\r\nRUDDER_PW: %u", RUDDER_PW);
    RDR_lo_to_h= 0xFFFF - RUDDER_PW;
    PCA0CP0 = RDR_lo_to_h;
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
