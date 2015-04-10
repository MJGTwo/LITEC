#include <stdio.h>
#include <stdlib.h>
#include <c8051_SDCC.h> // Include files. This file is available online in LMS
#include <i2c.h>        // Get from LMS, THIS MUST BE INCLUDED AFTER stdio.h
#define PCA_START 28672 // 20ms

void wait(void);
void start(void);
unsigned int direction(void)
{
	char count;
	int value;
	count =0;
	while (count < 1);
	lcd_clear();
	lcd_print("Calibration:\nHello world!\n012_345_678:\nabc def ghij");
	start();
	lcd_clear();
	value = kpd_input(0);

	lcd_print("The desired direction is:\n %d", value);
	printf("\r\nThe desired direction is:\n %d", value);
    

}

void start(void)
{
	while (read_keypad() != '*') wait();
}

void wait(void)
{
	count=0;
	while (count < 1);
}