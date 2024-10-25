 /*
 * MAIN Generated Driver File
 * 
 * @file main.c
 * 
 * @defgroup main MAIN
 * 
 * @brief This is the generated driver implementation file for the MAIN driver.
 *
 * @version MAIN Driver Version 1.0.2
 *
 * @version Package Version: 3.1.2
*/

/*
© [2024] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/
#include "mcc_generated_files/system/system.h"
#include "mcc_generated_files/timer/delay.h"
#include "seg_display.h"
#include "counter_calc.h"


/*
    Main application
*/


uint16_t timer0_counter = 0;
uint16_t timer1_counter = 0;
extern uint8_t digitval[8];			// global variables

extern uint8_t bcdval;
extern uint8_t prev_bcdval;
extern uint32_t cum_counter;
extern uint32_t inc_counter;
extern uint32_t dec_counter;

void MyTimer0Callback(void);
void MyTimer1Callback(void);
void channel_switch(uint8_t ch);
void convert_bcd_ext_inp_to_bcdval();

uint8_t BCD_INP[8]={0};   

// 2ms Timer Countervalue :2,  500x2ms = 2s
void MyTimer0Callback(void){
    timer0_counter++;
    if(timer0_counter>500){
        timer0_counter=0;        
    }
    display();
}

// 100ms Timer Countervalue :50,  50x100ms = 5s
void MyTimer1Callback(void){
    timer1_counter++;
    if(timer1_counter>50){
        timer1_counter=0;
    }
}



int main(void)
{
    uint16_t adcval;
    uint8_t i;
 
    SYSTEM_Initialize();
    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts 
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global and Peripheral Interrupts 
    // Use the following macros to: 

    // Enable the Global High Interrupts 
    INTERRUPT_GlobalInterruptHighEnable(); 

    // Disable the Global High Interrupts 
    //INTERRUPT_GlobalInterruptHighDisable(); 

    // Enable the Global Low Interrupts 
    INTERRUPT_GlobalInterruptLowEnable(); 

    // Disable the Global Low Interrupts 
    //INTERRUPT_GlobalInterruptLowDisable(); 

    // Enable the Peripheral Interrupts 
    INTERRUPT_PeripheralInterruptEnable(); 

    // Disable the Peripheral Interrupts 
    //INTERRUPT_PeripheralInterruptDisable(); 
    TMR0_OverflowCallbackRegister(MyTimer0Callback);
    TMR1_OverflowCallbackRegister(MyTimer1Callback);

    TMR0_TMRInterruptEnable();
    TMR1_TMRInterruptEnable();
    TMR0_Start();
    TMR1_Start();
    display_init();
    while(1)
    {
        for(i=0;i<=7;i++){
            channel_switch(i);
            DELAY_milliseconds(5);
            adcval =  IP1_ADC_GetConversion(0,0);
            if(adcval>800)
                BCD_INP[i] = 1;
            else{
                BCD_INP[i] = 0;
            }
        }
        convert_bcd_ext_inp_to_bcdval();
                // To avoid overflow of process variables.
        if(cum_counter>999999)
            cum_counter=0;
        if(bcdval>=64)
            bcdval = 64;
        format_data_to_display(bcdval, adcval);
    }    
}

void channel_switch(uint8_t ch)
{
    // CBA
    if(ch&0x01)
    BCD_S1_SetHigh();   
    else
    BCD_S1_SetLow();   
        
    if((ch&0x02)>>1)
    BCD_S2_SetHigh();   
    else
    BCD_S2_SetLow();
    
    if((ch&0x04)>>2)
    BCD_S3_SetHigh();   
    else
    BCD_S3_SetLow();
    
}
void convert_bcd_ext_inp_to_bcdval(void)
{
    bcdval =  ((BCD_INP[0]) & 0x01)|
                ((BCD_INP[1]<<1) & 0x02)|
				((BCD_INP[2]<<2) & 0x04)|
		        ((BCD_INP[3]<<3) & 0x08)|
		        ((BCD_INP[4]<<4) & 0x10)|
		        ((BCD_INP[5]<<5) & 0x20)|
		        ((BCD_INP[6]<<6) & 0x40)|
			    ((BCD_INP[7]<<7) & 0x80);
}