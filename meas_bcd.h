/* 
 * File:   meas_bcd.h
 * Author: Rajesh
 *
 * Created on October 25, 2024, 6:01 PM
 */

#ifndef MEAS_BCD_H
#define	MEAS_BCD_H

void read_adc_val(uint16_t * adcres);
void meas_bcd_inp(void);
void channel_switch(uint8_t ch);
void convert_bcd_ext_inp_to_bcdval(uint8_t * bcdval);

#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif

#endif	/* MEAS_BCD_H */

