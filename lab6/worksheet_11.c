/*
    Names: Patrick Mitchell, Chrstine Marini, Michael J. Gardner II, Robert Guiles
    Section: 03
    Date: 5/5/15
    File name: Worksheet 11
    Program description:
*/

#include <c8051_SDCC.h>
#include <stdio.h>
#include <i2c.h>
#define PCA_START     28672

/* Functions */

void Port_Init(void);
void PCA_Init(void);
void XBR0_Init(void);
void SMB_Init(void);

void Algorithms(void);
void read_compass(void);
void Steering_func(void);


/* Global Variables */

unsigned int desired = 1350;           // set this value
unsigned int actual = 0;            // set this value
unsigned int count = 0;
unsigned char Data[2];
unsigned int kp = 12;                // set this value
unsigned int kd = 0;                // set this value
int pw_neut = 2765;                    // set this value
int previous_error = 0;             // set this value
int error = 0;                      // set this value
int temp_motorpw_2byte = 0;
long temp_motorpw_alg1 = 0;
long temp_motorpw_alg2 = 0;
long temp_motorpw_alg3 = 0;
long temp_motorpw_alg4 = 0;
long temp_motorpw_alg5 = 0;
long temp_motorpw_alg6 = 0;

void main()
{
    Sys_Init();
    putchar(' ');
    Port_Init();
    PCA_Init();
    XBR0_Init();
    SMB_Init();

    while(1)
    {
        if ((count +1) % 2 == 0)
            Steering_func();
    }

}

void Steering_func(void)
{
    read_compass();
    Algorithms();
}

void read_compass(void)
{
    unsigned char addr = 0xC0;
    unsigned int range = 0;
    i2c_read_data(addr, 2, Data, 2);
    actual = ((unsigned int) Data[0] << 8 | Data[1]);
    return;

}

void Algorithms(void)
{
    error = desired-actual;
//  two byte calculation
    temp_motorpw_2byte = pw_neut+kp*error+kd*(error-previous_error);
    printf("The two byte calculation of motorpw is %d \r\n",temp_motorpw_2byte);
//  equation form 1, long ints
    temp_motorpw_alg1 = pw_neut+kp*error+kd*(error-previous_error);
    printf("Algorithm 1, four byte calculation of motorpw is %ld \r\n",temp_motorpw_alg1);
//  equation form 2, long ints
    temp_motorpw_alg2 = pw_neut+(long)kp*error+kd*(error-previous_error);
    printf("Algorithm 2, four byte calculation of motorpw is %ld \r\n",temp_motorpw_alg2);
//  equation form 3, long ints
    temp_motorpw_alg3 = (long)( pw_neut + kp * (error) + kd * (error - previous_error));
    printf("Algorithm 3, four byte calculation of motorpw is %ld \r\n",temp_motorpw_alg3);
//  equation form 4, long ints
    temp_motorpw_alg4 = pw_neut+kp*(int)(error)+kd*(int)(error-previous_error);
    printf("Algorithm 4, four byte calculation of motorpw is %ld \r\n",temp_motorpw_alg4);
//  equation form 5, long) ints
    temp_motorpw_alg5 = (long)pw_neut+(long)(kp*(error))+(long)(kd*(error-previous_error));
    printf("Algorithm 5, four byte calculation of motorpw is %ld \r\n",temp_motorpw_alg5);
//  equation form 6, long ints
    temp_motorpw_alg6 = (long)pw_neut+(long)kp*(long)error+(long)kd*(long)(error-previous_error);
    printf("Algorithm 6, four byte calculation of motorpw is %ld \r\n",temp_motorpw_alg6);
}

void Port_Init(void)
{
    P0MDOUT &= ~0x32;

    P1MDIN  &= ~0x20;

    P1MDOUT |= 0x0F;
    P1MDOUT &= 0x20;

    P1       = 0x20;


}

void PCA_Init(void)
{
    PCA0MD   = 0x81;
    PCA0CPM0 = 0xC2;    //CCM0 in 16-bit compare mode FOR STEERING
    PCA0CPM1 = 0xC2;
    PCA0CPM2 = 0xC2;    //CCM2 in 16-bit compare mode FOR MOTOR
    PCA0CPM3 = 0XC2;
    PCA0CN   = 0x40;    //Enable PCA counter
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