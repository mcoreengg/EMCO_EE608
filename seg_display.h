/* 
 * File:   seg_display.h
 * Author: Rajesh
 *
 * Created on 25 October, 2024, 12:44 PM
 */

#ifndef SEG_DISPLAY_H
#define	SEG_DISPLAY_H

#ifdef	__cplusplus
extern "C" {
#endif



void display_init(void);
void format_data_to_display(uint8_t bcdval, uint32_t counterval);
void display(void);

#ifdef	__cplusplus
}
#endif

#endif	/* SEG_DISPLAY_H */

