#include "mcc_generated_files/system/system.h"
#include "mcc_generated_files/timer/delay.h"
#include "meas_bcd.h"


uint8_t BCD_INP[8]={0};   
uint16_t adcval;
 
void read_adc_val(uint16_t * adcres){
   * adcres = adcval; 
}

void meas_bcd_inp(void)
{
   
    uint8_t i;
    
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

void convert_bcd_ext_inp_to_bcdval(uint8_t * bcdval)
{
    * bcdval =  ((BCD_INP[0]) & 0x01)|
                ((BCD_INP[1]<<1) & 0x02)|
				((BCD_INP[2]<<2) & 0x04)|
		        ((BCD_INP[3]<<3) & 0x08)|
		        ((BCD_INP[4]<<4) & 0x10)|
		        ((BCD_INP[5]<<5) & 0x20)|
		        ((BCD_INP[6]<<6) & 0x40)|
			    ((BCD_INP[7]<<7) & 0x80);
}
