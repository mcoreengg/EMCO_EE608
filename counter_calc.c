#include "mcc_generated_files/system/system.h"

uint32_t cum_counter = 345678;
uint32_t inc_counter = 0;
uint32_t dec_counter = 0;

uint8_t bcdval=12;
uint8_t prev_bcdval=12;


void counter_calc(void)
{
    int8_t bcdval_diff =0;
    
    if(bcdval!= prev_bcdval){
        bcdval_diff = (int8_t)(bcdval - prev_bcdval);        
        cum_counter += (uint32_t)abs(bcdval_diff);
        
        if(bcdval_diff>0){            
            inc_counter +=(uint32_t)abs(bcdval_diff);    
        }
        
        if(bcdval_diff<0){            
            dec_counter +=(uint32_t)abs(bcdval_diff);    
        }
        prev_bcdval = bcdval;
    }
   
}
