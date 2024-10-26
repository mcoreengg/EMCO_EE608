#include "mcc_generated_files/system/system.h"
#include "mcc_generated_files/timer/delay.h"
#include "meas_bcd.h"
#include "seg_display.h"

#define ANALOG_MODE_BCD 0
#define DIGITAL_MODE_BCD 1

uint8_t BCD_INP[8]={0};   

#if ANALOG_MODE_BCD
uint16_t adcval;
#else
uint16_t bcdres;
#endif

void read_bcddata_val(uint16_t * bcdres){
    #if ANALOG_MODE_BCD
    * bcdres = adcval;
    #else
    * bcdres = IP1_BCD_GetValue();
    #endif
}


void meas_bcd_inp(void)
{
   
    uint8_t i;
    uint8_t localbcdval;
    
        for(i=0;i<=7;i++){
            channel_switch(1);
            DELAY_milliseconds(100);
            #if ANALOG_MODE_BCD
            adcval =  IP1_ADC_GetConversion(0,0);
            if(adcval>800)
                BCD_INP[i] = 1;
            else{
                BCD_INP[i] = 0;
            }
            #else
            BCD_INP[1] = IP1_BCD_GetValue();
            #endif
           //convert_bcd_ext_inp_to_bcdval(&localbcdval);
            //format_data_to_display(localbcdval, i);
            
        }
}

void channel_switch(uint8_t ch)
{
    // CBA
    BCD_S1_SetLow(); 
    BCD_S2_SetLow(); 
    BCD_S3_SetLow(); 
    
    if(ch&0x01)
    BCD_S1_SetHigh();   
        
    if((ch&0x02)>>1)
    BCD_S2_SetHigh();   
    
    if((ch&0x04)>>2)
    BCD_S3_SetHigh();  
    
   // BCD_INP[0] = BCD_S1_GetValue();
   // BCD_INP[1] = BCD_S2_GetValue();
   // BCD_INP[2] = BCD_S3_GetValue();
    
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
