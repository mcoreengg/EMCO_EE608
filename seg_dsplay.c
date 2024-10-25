#include <xc.h>
#include "mcc_generated_files/system/pins.h"

#define OFF         10
uint8_t n, k, digitval[9] = {0};			// global variables

// n - number of digits totally 8 here.

//    RD7 RD6 RD5 RD4 RD3 RD2 RD1 RD0
//    dp  g   f   e   d   c   b   a
//  0: 0  0   1   1   1   1   1   1   0x3F
//  1: 0  0   0   0   0   1   1   0   0x06
//  2: 0  1   0   1   1   1   0   1   0x5B
//  3: 0  1   0   0   1   1   1   1   0x4F
//  4: 0  1   1   0   0   1   1   0   0x66
//  5: 0  1   1   0   1   1   0   1   0x6D
//  6: 0  1   1   1   1   1   0   1   0x7D
//  7: 0  0   0   0   0   1   1   1   0x07
//  8: 0  1   1   1   1   1   1   1   0x7F
//  9: 0  1   0   0   1   1   1   1   0x4F
// BL: 0  0   0   0   0   0   0   0   0x00

const uint8_t segments[11] = {
  0b00111111,   // 0
  0b00000110,   // 1
  0b01011011,   // 2
  0b01001111,   // 3
  0b01100110,   // 4
  0b01101101,   // 5
  0b01111101,   // 6
  0b00000111,   // 7
  0b01111111,   // 8
  0b01001111,   // 9
  0b00000000    // OFF
};



void display(void) {			// displays n-th digit
  uint8_t dig;
  dig = digitval[n];
  
  // Clears Digits and Segment LEDs
  LATD = 0; // Clear All Segment Data AA - HH
  LATBbits.LATB7 = LATAbits.LATA7 = LATAbits.LATA6 = 0;  // Clear Digits or Select Digit 1
 
  // Select Digits from 1 - 6 
  // RB7 RA7 RA6
  if(n<=7){
    DSP4_SetLow(); 
    if((n & 0x04)>>2)DSP3_SetHigh();
    if((n & 0x02)>>1)DSP2_SetHigh();
    if((n & 0x01))DSP1_SetHigh();   
  }
  if(n==8){
    DSP4_SetHigh();  
  }
  LATD = segments[dig];
  n++;
  if (n > 8) n=0;
}

void display_init(void){
    
  DSP4_SetLow(); // Enable Mux/Demux always - One Time
  //Init 6 Digits Array for 6 Digit seven segment
  // Switch all the segments off initially
  digitval[0] = OFF;
  digitval[1] = OFF;
  digitval[2] = OFF;
  digitval[3] = OFF;
  digitval[4] = OFF;
  digitval[5] = OFF;
  digitval[6] = OFF;
  digitval[7] = OFF;
  digitval[8] = OFF;
  n = 0;    // Digit Increment for mux switching
  k = 7;    // To clear Prefix zeros if does not needed .
            // Also to start from beginning of digit (rollover))
}

void format_data_to_display(uint8_t bcdval, uint32_t counterval)
{
    // Data 59 
    digitval[1] = bcdval/10;    // 5 here - Digit 1
    digitval[0] = bcdval%10;    // 9 here - Digit 2
    
    digitval[8] = (uint8_t)(counterval/100000);       
    digitval[7] = (uint8_t)((counterval%100000)/10000);    
    digitval[6] = (uint8_t)((counterval%10000)/1000);    
    digitval[5] = (uint8_t)((counterval%1000)/100);   
    digitval[4] = (uint8_t)((counterval%100)/10);  
    digitval[3] = (uint8_t)((counterval)%10);       
    
    digitval[2] = OFF;   // This display Not used in schematic always off

}