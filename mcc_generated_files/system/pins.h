/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.1.1
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

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RA0 aliases
#define IP1_ADC_TRIS                 TRISAbits.TRISA0
#define IP1_ADC_LAT                  LATAbits.LATA0
#define IP1_ADC_PORT                 PORTAbits.RA0
#define IP1_ADC_WPU                  WPUAbits.
#define IP1_ADC_OD                   ODCONAbits.
#define IP1_ADC_ANS                  ANSELAbits.ANSEL0
#define IP1_ADC_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define IP1_ADC_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define IP1_ADC_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define IP1_ADC_GetValue()           PORTAbits.RA0
#define IP1_ADC_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define IP1_ADC_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define IP1_ADC_SetPullup()          do { WPUAbits. = 1; } while(0)
#define IP1_ADC_ResetPullup()        do { WPUAbits. = 0; } while(0)
#define IP1_ADC_SetPushPull()        do { ODCONAbits. = 0; } while(0)
#define IP1_ADC_SetOpenDrain()       do { ODCONAbits. = 1; } while(0)
#define IP1_ADC_SetAnalogMode()      do { ANSELAbits.ANSEL0 = 1; } while(0)
#define IP1_ADC_SetDigitalMode()     do { ANSELAbits.ANSEL0 = 0; } while(0)

// get/set RA1 aliases
#define RL1_TRIS                 TRISAbits.TRISA1
#define RL1_LAT                  LATAbits.LATA1
#define RL1_PORT                 PORTAbits.RA1
#define RL1_WPU                  WPUAbits.
#define RL1_OD                   ODCONAbits.
#define RL1_ANS                  ANSELAbits.ANSEL1
#define RL1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define RL1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define RL1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define RL1_GetValue()           PORTAbits.RA1
#define RL1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define RL1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define RL1_SetPullup()          do { WPUAbits. = 1; } while(0)
#define RL1_ResetPullup()        do { WPUAbits. = 0; } while(0)
#define RL1_SetPushPull()        do { ODCONAbits. = 0; } while(0)
#define RL1_SetOpenDrain()       do { ODCONAbits. = 1; } while(0)
#define RL1_SetAnalogMode()      do { ANSELAbits.ANSEL1 = 1; } while(0)
#define RL1_SetDigitalMode()     do { ANSELAbits.ANSEL1 = 0; } while(0)

// get/set RA2 aliases
#define RL2_TRIS                 TRISAbits.TRISA2
#define RL2_LAT                  LATAbits.LATA2
#define RL2_PORT                 PORTAbits.RA2
#define RL2_WPU                  WPUAbits.
#define RL2_OD                   ODCONAbits.
#define RL2_ANS                  ANSELAbits.ANSEL2
#define RL2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define RL2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define RL2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define RL2_GetValue()           PORTAbits.RA2
#define RL2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define RL2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define RL2_SetPullup()          do { WPUAbits. = 1; } while(0)
#define RL2_ResetPullup()        do { WPUAbits. = 0; } while(0)
#define RL2_SetPushPull()        do { ODCONAbits. = 0; } while(0)
#define RL2_SetOpenDrain()       do { ODCONAbits. = 1; } while(0)
#define RL2_SetAnalogMode()      do { ANSELAbits.ANSEL2 = 1; } while(0)
#define RL2_SetDigitalMode()     do { ANSELAbits.ANSEL2 = 0; } while(0)

// get/set RA3 aliases
#define RL3_TRIS                 TRISAbits.TRISA3
#define RL3_LAT                  LATAbits.LATA3
#define RL3_PORT                 PORTAbits.RA3
#define RL3_WPU                  WPUAbits.
#define RL3_OD                   ODCONAbits.
#define RL3_ANS                  ANSELAbits.ANSEL3
#define RL3_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define RL3_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define RL3_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define RL3_GetValue()           PORTAbits.RA3
#define RL3_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define RL3_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define RL3_SetPullup()          do { WPUAbits. = 1; } while(0)
#define RL3_ResetPullup()        do { WPUAbits. = 0; } while(0)
#define RL3_SetPushPull()        do { ODCONAbits. = 0; } while(0)
#define RL3_SetOpenDrain()       do { ODCONAbits. = 1; } while(0)
#define RL3_SetAnalogMode()      do { ANSELAbits.ANSEL3 = 1; } while(0)
#define RL3_SetDigitalMode()     do { ANSELAbits.ANSEL3 = 0; } while(0)

// get/set RA5 aliases
#define RL4_TRIS                 TRISAbits.TRISA5
#define RL4_LAT                  LATAbits.LATA5
#define RL4_PORT                 PORTAbits.RA5
#define RL4_WPU                  WPUAbits.
#define RL4_OD                   ODCONAbits.
#define RL4_ANS                  ANSELAbits.ANSEL4
#define RL4_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define RL4_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define RL4_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define RL4_GetValue()           PORTAbits.RA5
#define RL4_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define RL4_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define RL4_SetPullup()          do { WPUAbits. = 1; } while(0)
#define RL4_ResetPullup()        do { WPUAbits. = 0; } while(0)
#define RL4_SetPushPull()        do { ODCONAbits. = 0; } while(0)
#define RL4_SetOpenDrain()       do { ODCONAbits. = 1; } while(0)
#define RL4_SetAnalogMode()      do { ANSELAbits.ANSEL4 = 1; } while(0)
#define RL4_SetDigitalMode()     do { ANSELAbits.ANSEL4 = 0; } while(0)

// get/set RA6 aliases
#define DSP1_TRIS                 TRISAbits.TRISA6
#define DSP1_LAT                  LATAbits.LATA6
#define DSP1_PORT                 PORTAbits.RA6
#define DSP1_WPU                  WPUAbits.
#define DSP1_OD                   ODCONAbits.
#define DSP1_ANS                  ANSELAbits.
#define DSP1_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define DSP1_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define DSP1_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define DSP1_GetValue()           PORTAbits.RA6
#define DSP1_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define DSP1_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define DSP1_SetPullup()          do { WPUAbits. = 1; } while(0)
#define DSP1_ResetPullup()        do { WPUAbits. = 0; } while(0)
#define DSP1_SetPushPull()        do { ODCONAbits. = 0; } while(0)
#define DSP1_SetOpenDrain()       do { ODCONAbits. = 1; } while(0)
#define DSP1_SetAnalogMode()      do { ANSELAbits. = 1; } while(0)
#define DSP1_SetDigitalMode()     do { ANSELAbits. = 0; } while(0)

// get/set RA7 aliases
#define DSP2_TRIS                 TRISAbits.TRISA7
#define DSP2_LAT                  LATAbits.LATA7
#define DSP2_PORT                 PORTAbits.RA7
#define DSP2_WPU                  WPUAbits.
#define DSP2_OD                   ODCONAbits.
#define DSP2_ANS                  ANSELAbits.
#define DSP2_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define DSP2_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define DSP2_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define DSP2_GetValue()           PORTAbits.RA7
#define DSP2_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define DSP2_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define DSP2_SetPullup()          do { WPUAbits. = 1; } while(0)
#define DSP2_ResetPullup()        do { WPUAbits. = 0; } while(0)
#define DSP2_SetPushPull()        do { ODCONAbits. = 0; } while(0)
#define DSP2_SetOpenDrain()       do { ODCONAbits. = 1; } while(0)
#define DSP2_SetAnalogMode()      do { ANSELAbits. = 1; } while(0)
#define DSP2_SetDigitalMode()     do { ANSELAbits. = 0; } while(0)

// get/set RB0 aliases
#define K1_TRIS                 TRISBbits.TRISB0
#define K1_LAT                  LATBbits.LATB0
#define K1_PORT                 PORTBbits.RB0
#define K1_WPU                  WPUBbits.WPUB0
#define K1_OD                   ODCONBbits.
#define K1_ANS                  ANSELBbits.ANSEL10
#define K1_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define K1_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define K1_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define K1_GetValue()           PORTBbits.RB0
#define K1_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define K1_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define K1_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define K1_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define K1_SetPushPull()        do { ODCONBbits. = 0; } while(0)
#define K1_SetOpenDrain()       do { ODCONBbits. = 1; } while(0)
#define K1_SetAnalogMode()      do { ANSELBbits.ANSEL10 = 1; } while(0)
#define K1_SetDigitalMode()     do { ANSELBbits.ANSEL10 = 0; } while(0)

// get/set RB1 aliases
#define K2_TRIS                 TRISBbits.TRISB1
#define K2_LAT                  LATBbits.LATB1
#define K2_PORT                 PORTBbits.RB1
#define K2_WPU                  WPUBbits.WPUB1
#define K2_OD                   ODCONBbits.
#define K2_ANS                  ANSELBbits.ANSEL8
#define K2_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define K2_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define K2_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define K2_GetValue()           PORTBbits.RB1
#define K2_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define K2_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define K2_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define K2_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define K2_SetPushPull()        do { ODCONBbits. = 0; } while(0)
#define K2_SetOpenDrain()       do { ODCONBbits. = 1; } while(0)
#define K2_SetAnalogMode()      do { ANSELBbits.ANSEL8 = 1; } while(0)
#define K2_SetDigitalMode()     do { ANSELBbits.ANSEL8 = 0; } while(0)

// get/set RB2 aliases
#define K3_TRIS                 TRISBbits.TRISB2
#define K3_LAT                  LATBbits.LATB2
#define K3_PORT                 PORTBbits.RB2
#define K3_WPU                  WPUBbits.WPUB2
#define K3_OD                   ODCONBbits.
#define K3_ANS                  ANSELBbits.
#define K3_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define K3_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define K3_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define K3_GetValue()           PORTBbits.RB2
#define K3_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define K3_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define K3_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define K3_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define K3_SetPushPull()        do { ODCONBbits. = 0; } while(0)
#define K3_SetOpenDrain()       do { ODCONBbits. = 1; } while(0)
#define K3_SetAnalogMode()      do { ANSELBbits. = 1; } while(0)
#define K3_SetDigitalMode()     do { ANSELBbits. = 0; } while(0)

// get/set RB3 aliases
#define K4_TRIS                 TRISBbits.TRISB3
#define K4_LAT                  LATBbits.LATB3
#define K4_PORT                 PORTBbits.RB3
#define K4_WPU                  WPUBbits.WPUB3
#define K4_OD                   ODCONBbits.
#define K4_ANS                  ANSELBbits.
#define K4_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define K4_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define K4_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define K4_GetValue()           PORTBbits.RB3
#define K4_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define K4_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define K4_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define K4_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define K4_SetPushPull()        do { ODCONBbits. = 0; } while(0)
#define K4_SetOpenDrain()       do { ODCONBbits. = 1; } while(0)
#define K4_SetAnalogMode()      do { ANSELBbits. = 1; } while(0)
#define K4_SetDigitalMode()     do { ANSELBbits. = 0; } while(0)

// get/set RB4 aliases
#define K5_TRIS                 TRISBbits.TRISB4
#define K5_LAT                  LATBbits.LATB4
#define K5_PORT                 PORTBbits.RB4
#define K5_WPU                  WPUBbits.WPUB4
#define K5_OD                   ODCONBbits.
#define K5_ANS                  ANSELBbits.ANSEL9
#define K5_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define K5_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define K5_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define K5_GetValue()           PORTBbits.RB4
#define K5_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define K5_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define K5_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define K5_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define K5_SetPushPull()        do { ODCONBbits. = 0; } while(0)
#define K5_SetOpenDrain()       do { ODCONBbits. = 1; } while(0)
#define K5_SetAnalogMode()      do { ANSELBbits.ANSEL9 = 1; } while(0)
#define K5_SetDigitalMode()     do { ANSELBbits.ANSEL9 = 0; } while(0)

// get/set RB5 aliases
#define RL6_TRIS                 TRISBbits.TRISB5
#define RL6_LAT                  LATBbits.LATB5
#define RL6_PORT                 PORTBbits.RB5
#define RL6_WPU                  WPUBbits.WPUB5
#define RL6_OD                   ODCONBbits.
#define RL6_ANS                  ANSELBbits.
#define RL6_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define RL6_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define RL6_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define RL6_GetValue()           PORTBbits.RB5
#define RL6_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define RL6_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define RL6_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define RL6_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define RL6_SetPushPull()        do { ODCONBbits. = 0; } while(0)
#define RL6_SetOpenDrain()       do { ODCONBbits. = 1; } while(0)
#define RL6_SetAnalogMode()      do { ANSELBbits. = 1; } while(0)
#define RL6_SetDigitalMode()     do { ANSELBbits. = 0; } while(0)

// get/set RB6 aliases
#define RL5_TRIS                 TRISBbits.TRISB6
#define RL5_LAT                  LATBbits.LATB6
#define RL5_PORT                 PORTBbits.RB6
#define RL5_WPU                  WPUBbits.WPUB6
#define RL5_OD                   ODCONBbits.
#define RL5_ANS                  ANSELBbits.
#define RL5_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define RL5_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define RL5_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define RL5_GetValue()           PORTBbits.RB6
#define RL5_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define RL5_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define RL5_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define RL5_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define RL5_SetPushPull()        do { ODCONBbits. = 0; } while(0)
#define RL5_SetOpenDrain()       do { ODCONBbits. = 1; } while(0)
#define RL5_SetAnalogMode()      do { ANSELBbits. = 1; } while(0)
#define RL5_SetDigitalMode()     do { ANSELBbits. = 0; } while(0)

// get/set RB7 aliases
#define DSP3_TRIS                 TRISBbits.TRISB7
#define DSP3_LAT                  LATBbits.LATB7
#define DSP3_PORT                 PORTBbits.RB7
#define DSP3_WPU                  WPUBbits.WPUB7
#define DSP3_OD                   ODCONBbits.
#define DSP3_ANS                  ANSELBbits.
#define DSP3_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define DSP3_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define DSP3_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define DSP3_GetValue()           PORTBbits.RB7
#define DSP3_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define DSP3_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define DSP3_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define DSP3_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define DSP3_SetPushPull()        do { ODCONBbits. = 0; } while(0)
#define DSP3_SetOpenDrain()       do { ODCONBbits. = 1; } while(0)
#define DSP3_SetAnalogMode()      do { ANSELBbits. = 1; } while(0)
#define DSP3_SetDigitalMode()     do { ANSELBbits. = 0; } while(0)

// get/set RC0 aliases
#define RL7_TRIS                 TRISCbits.TRISC0
#define RL7_LAT                  LATCbits.LATC0
#define RL7_PORT                 PORTCbits.RC0
#define RL7_WPU                  WPUCbits.
#define RL7_OD                   ODCONCbits.
#define RL7_ANS                  ANSELCbits.
#define RL7_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define RL7_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define RL7_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define RL7_GetValue()           PORTCbits.RC0
#define RL7_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define RL7_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define RL7_SetPullup()          do { WPUCbits. = 1; } while(0)
#define RL7_ResetPullup()        do { WPUCbits. = 0; } while(0)
#define RL7_SetPushPull()        do { ODCONCbits. = 0; } while(0)
#define RL7_SetOpenDrain()       do { ODCONCbits. = 1; } while(0)
#define RL7_SetAnalogMode()      do { ANSELCbits. = 1; } while(0)
#define RL7_SetDigitalMode()     do { ANSELCbits. = 0; } while(0)

// get/set RC1 aliases
#define RL8_TRIS                 TRISCbits.TRISC1
#define RL8_LAT                  LATCbits.LATC1
#define RL8_PORT                 PORTCbits.RC1
#define RL8_WPU                  WPUCbits.
#define RL8_OD                   ODCONCbits.
#define RL8_ANS                  ANSELCbits.
#define RL8_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define RL8_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define RL8_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define RL8_GetValue()           PORTCbits.RC1
#define RL8_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define RL8_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define RL8_SetPullup()          do { WPUCbits. = 1; } while(0)
#define RL8_ResetPullup()        do { WPUCbits. = 0; } while(0)
#define RL8_SetPushPull()        do { ODCONCbits. = 0; } while(0)
#define RL8_SetOpenDrain()       do { ODCONCbits. = 1; } while(0)
#define RL8_SetAnalogMode()      do { ANSELCbits. = 1; } while(0)
#define RL8_SetDigitalMode()     do { ANSELCbits. = 0; } while(0)

// get/set RC2 aliases
#define RL11_TRIS                 TRISCbits.TRISC2
#define RL11_LAT                  LATCbits.LATC2
#define RL11_PORT                 PORTCbits.RC2
#define RL11_WPU                  WPUCbits.
#define RL11_OD                   ODCONCbits.
#define RL11_ANS                  ANSELCbits.
#define RL11_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define RL11_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define RL11_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define RL11_GetValue()           PORTCbits.RC2
#define RL11_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define RL11_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define RL11_SetPullup()          do { WPUCbits. = 1; } while(0)
#define RL11_ResetPullup()        do { WPUCbits. = 0; } while(0)
#define RL11_SetPushPull()        do { ODCONCbits. = 0; } while(0)
#define RL11_SetOpenDrain()       do { ODCONCbits. = 1; } while(0)
#define RL11_SetAnalogMode()      do { ANSELCbits. = 1; } while(0)
#define RL11_SetDigitalMode()     do { ANSELCbits. = 0; } while(0)

// get/set RC3 aliases
#define RL9_TRIS                 TRISCbits.TRISC3
#define RL9_LAT                  LATCbits.LATC3
#define RL9_PORT                 PORTCbits.RC3
#define RL9_WPU                  WPUCbits.
#define RL9_OD                   ODCONCbits.
#define RL9_ANS                  ANSELCbits.
#define RL9_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define RL9_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define RL9_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define RL9_GetValue()           PORTCbits.RC3
#define RL9_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define RL9_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define RL9_SetPullup()          do { WPUCbits. = 1; } while(0)
#define RL9_ResetPullup()        do { WPUCbits. = 0; } while(0)
#define RL9_SetPushPull()        do { ODCONCbits. = 0; } while(0)
#define RL9_SetOpenDrain()       do { ODCONCbits. = 1; } while(0)
#define RL9_SetAnalogMode()      do { ANSELCbits. = 1; } while(0)
#define RL9_SetDigitalMode()     do { ANSELCbits. = 0; } while(0)

// get/set RC4 aliases
#define RL10_TRIS                 TRISCbits.TRISC4
#define RL10_LAT                  LATCbits.LATC4
#define RL10_PORT                 PORTCbits.RC4
#define RL10_WPU                  WPUCbits.
#define RL10_OD                   ODCONCbits.
#define RL10_ANS                  ANSELCbits.
#define RL10_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define RL10_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define RL10_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define RL10_GetValue()           PORTCbits.RC4
#define RL10_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define RL10_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define RL10_SetPullup()          do { WPUCbits. = 1; } while(0)
#define RL10_ResetPullup()        do { WPUCbits. = 0; } while(0)
#define RL10_SetPushPull()        do { ODCONCbits. = 0; } while(0)
#define RL10_SetOpenDrain()       do { ODCONCbits. = 1; } while(0)
#define RL10_SetAnalogMode()      do { ANSELCbits. = 1; } while(0)
#define RL10_SetDigitalMode()     do { ANSELCbits. = 0; } while(0)

// get/set RC5 aliases
#define DSP4_TRIS                 TRISCbits.TRISC5
#define DSP4_LAT                  LATCbits.LATC5
#define DSP4_PORT                 PORTCbits.RC5
#define DSP4_WPU                  WPUCbits.
#define DSP4_OD                   ODCONCbits.
#define DSP4_ANS                  ANSELCbits.
#define DSP4_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define DSP4_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define DSP4_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define DSP4_GetValue()           PORTCbits.RC5
#define DSP4_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define DSP4_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define DSP4_SetPullup()          do { WPUCbits. = 1; } while(0)
#define DSP4_ResetPullup()        do { WPUCbits. = 0; } while(0)
#define DSP4_SetPushPull()        do { ODCONCbits. = 0; } while(0)
#define DSP4_SetOpenDrain()       do { ODCONCbits. = 1; } while(0)
#define DSP4_SetAnalogMode()      do { ANSELCbits. = 1; } while(0)
#define DSP4_SetDigitalMode()     do { ANSELCbits. = 0; } while(0)

// get/set RC6 aliases
#define DEBUGTX_TRIS                 TRISCbits.TRISC6
#define DEBUGTX_LAT                  LATCbits.LATC6
#define DEBUGTX_PORT                 PORTCbits.RC6
#define DEBUGTX_WPU                  WPUCbits.
#define DEBUGTX_OD                   ODCONCbits.
#define DEBUGTX_ANS                  ANSELCbits.
#define DEBUGTX_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define DEBUGTX_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define DEBUGTX_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define DEBUGTX_GetValue()           PORTCbits.RC6
#define DEBUGTX_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define DEBUGTX_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define DEBUGTX_SetPullup()          do { WPUCbits. = 1; } while(0)
#define DEBUGTX_ResetPullup()        do { WPUCbits. = 0; } while(0)
#define DEBUGTX_SetPushPull()        do { ODCONCbits. = 0; } while(0)
#define DEBUGTX_SetOpenDrain()       do { ODCONCbits. = 1; } while(0)
#define DEBUGTX_SetAnalogMode()      do { ANSELCbits. = 1; } while(0)
#define DEBUGTX_SetDigitalMode()     do { ANSELCbits. = 0; } while(0)

// get/set RC7 aliases
#define DEBUGRX_TRIS                 TRISCbits.TRISC7
#define DEBUGRX_LAT                  LATCbits.LATC7
#define DEBUGRX_PORT                 PORTCbits.RC7
#define DEBUGRX_WPU                  WPUCbits.
#define DEBUGRX_OD                   ODCONCbits.
#define DEBUGRX_ANS                  ANSELCbits.
#define DEBUGRX_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define DEBUGRX_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define DEBUGRX_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define DEBUGRX_GetValue()           PORTCbits.RC7
#define DEBUGRX_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define DEBUGRX_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define DEBUGRX_SetPullup()          do { WPUCbits. = 1; } while(0)
#define DEBUGRX_ResetPullup()        do { WPUCbits. = 0; } while(0)
#define DEBUGRX_SetPushPull()        do { ODCONCbits. = 0; } while(0)
#define DEBUGRX_SetOpenDrain()       do { ODCONCbits. = 1; } while(0)
#define DEBUGRX_SetAnalogMode()      do { ANSELCbits. = 1; } while(0)
#define DEBUGRX_SetDigitalMode()     do { ANSELCbits. = 0; } while(0)

// get/set RD0 aliases
#define AA_TRIS                 TRISDbits.TRISD0
#define AA_LAT                  LATDbits.LATD0
#define AA_PORT                 PORTDbits.RD0
#define AA_WPU                  WPUDbits.
#define AA_OD                   ODCONDbits.
#define AA_ANS                  ANSELDbits.ANSEL11
#define AA_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define AA_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define AA_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define AA_GetValue()           PORTDbits.RD0
#define AA_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define AA_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)
#define AA_SetPullup()          do { WPUDbits. = 1; } while(0)
#define AA_ResetPullup()        do { WPUDbits. = 0; } while(0)
#define AA_SetPushPull()        do { ODCONDbits. = 0; } while(0)
#define AA_SetOpenDrain()       do { ODCONDbits. = 1; } while(0)
#define AA_SetAnalogMode()      do { ANSELDbits.ANSEL11 = 1; } while(0)
#define AA_SetDigitalMode()     do { ANSELDbits.ANSEL11 = 0; } while(0)

// get/set RD1 aliases
#define BB_TRIS                 TRISDbits.TRISD1
#define BB_LAT                  LATDbits.LATD1
#define BB_PORT                 PORTDbits.RD1
#define BB_WPU                  WPUDbits.
#define BB_OD                   ODCONDbits.
#define BB_ANS                  ANSELDbits.ANSEL12
#define BB_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define BB_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define BB_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define BB_GetValue()           PORTDbits.RD1
#define BB_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define BB_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
#define BB_SetPullup()          do { WPUDbits. = 1; } while(0)
#define BB_ResetPullup()        do { WPUDbits. = 0; } while(0)
#define BB_SetPushPull()        do { ODCONDbits. = 0; } while(0)
#define BB_SetOpenDrain()       do { ODCONDbits. = 1; } while(0)
#define BB_SetAnalogMode()      do { ANSELDbits.ANSEL12 = 1; } while(0)
#define BB_SetDigitalMode()     do { ANSELDbits.ANSEL12 = 0; } while(0)

// get/set RD2 aliases
#define CC_TRIS                 TRISDbits.TRISD2
#define CC_LAT                  LATDbits.LATD2
#define CC_PORT                 PORTDbits.RD2
#define CC_WPU                  WPUDbits.
#define CC_OD                   ODCONDbits.
#define CC_ANS                  ANSELDbits.ANSEL13
#define CC_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define CC_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define CC_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define CC_GetValue()           PORTDbits.RD2
#define CC_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define CC_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define CC_SetPullup()          do { WPUDbits. = 1; } while(0)
#define CC_ResetPullup()        do { WPUDbits. = 0; } while(0)
#define CC_SetPushPull()        do { ODCONDbits. = 0; } while(0)
#define CC_SetOpenDrain()       do { ODCONDbits. = 1; } while(0)
#define CC_SetAnalogMode()      do { ANSELDbits.ANSEL13 = 1; } while(0)
#define CC_SetDigitalMode()     do { ANSELDbits.ANSEL13 = 0; } while(0)

// get/set RD3 aliases
#define DD_TRIS                 TRISDbits.TRISD3
#define DD_LAT                  LATDbits.LATD3
#define DD_PORT                 PORTDbits.RD3
#define DD_WPU                  WPUDbits.
#define DD_OD                   ODCONDbits.
#define DD_ANS                  ANSELDbits.ANSEL14
#define DD_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define DD_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define DD_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define DD_GetValue()           PORTDbits.RD3
#define DD_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define DD_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
#define DD_SetPullup()          do { WPUDbits. = 1; } while(0)
#define DD_ResetPullup()        do { WPUDbits. = 0; } while(0)
#define DD_SetPushPull()        do { ODCONDbits. = 0; } while(0)
#define DD_SetOpenDrain()       do { ODCONDbits. = 1; } while(0)
#define DD_SetAnalogMode()      do { ANSELDbits.ANSEL14 = 1; } while(0)
#define DD_SetDigitalMode()     do { ANSELDbits.ANSEL14 = 0; } while(0)

// get/set RD4 aliases
#define EE_TRIS                 TRISDbits.TRISD4
#define EE_LAT                  LATDbits.LATD4
#define EE_PORT                 PORTDbits.RD4
#define EE_WPU                  WPUDbits.
#define EE_OD                   ODCONDbits.
#define EE_ANS                  ANSELDbits.
#define EE_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define EE_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define EE_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define EE_GetValue()           PORTDbits.RD4
#define EE_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define EE_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)
#define EE_SetPullup()          do { WPUDbits. = 1; } while(0)
#define EE_ResetPullup()        do { WPUDbits. = 0; } while(0)
#define EE_SetPushPull()        do { ODCONDbits. = 0; } while(0)
#define EE_SetOpenDrain()       do { ODCONDbits. = 1; } while(0)
#define EE_SetAnalogMode()      do { ANSELDbits. = 1; } while(0)
#define EE_SetDigitalMode()     do { ANSELDbits. = 0; } while(0)

// get/set RD5 aliases
#define FF_TRIS                 TRISDbits.TRISD5
#define FF_LAT                  LATDbits.LATD5
#define FF_PORT                 PORTDbits.RD5
#define FF_WPU                  WPUDbits.
#define FF_OD                   ODCONDbits.
#define FF_ANS                  ANSELDbits.
#define FF_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define FF_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define FF_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define FF_GetValue()           PORTDbits.RD5
#define FF_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define FF_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)
#define FF_SetPullup()          do { WPUDbits. = 1; } while(0)
#define FF_ResetPullup()        do { WPUDbits. = 0; } while(0)
#define FF_SetPushPull()        do { ODCONDbits. = 0; } while(0)
#define FF_SetOpenDrain()       do { ODCONDbits. = 1; } while(0)
#define FF_SetAnalogMode()      do { ANSELDbits. = 1; } while(0)
#define FF_SetDigitalMode()     do { ANSELDbits. = 0; } while(0)

// get/set RD6 aliases
#define GG_TRIS                 TRISDbits.TRISD6
#define GG_LAT                  LATDbits.LATD6
#define GG_PORT                 PORTDbits.RD6
#define GG_WPU                  WPUDbits.
#define GG_OD                   ODCONDbits.
#define GG_ANS                  ANSELDbits.
#define GG_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define GG_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define GG_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define GG_GetValue()           PORTDbits.RD6
#define GG_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define GG_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)
#define GG_SetPullup()          do { WPUDbits. = 1; } while(0)
#define GG_ResetPullup()        do { WPUDbits. = 0; } while(0)
#define GG_SetPushPull()        do { ODCONDbits. = 0; } while(0)
#define GG_SetOpenDrain()       do { ODCONDbits. = 1; } while(0)
#define GG_SetAnalogMode()      do { ANSELDbits. = 1; } while(0)
#define GG_SetDigitalMode()     do { ANSELDbits. = 0; } while(0)

// get/set RD7 aliases
#define HH_TRIS                 TRISDbits.TRISD7
#define HH_LAT                  LATDbits.LATD7
#define HH_PORT                 PORTDbits.RD7
#define HH_WPU                  WPUDbits.
#define HH_OD                   ODCONDbits.
#define HH_ANS                  ANSELDbits.
#define HH_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define HH_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define HH_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define HH_GetValue()           PORTDbits.RD7
#define HH_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define HH_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)
#define HH_SetPullup()          do { WPUDbits. = 1; } while(0)
#define HH_ResetPullup()        do { WPUDbits. = 0; } while(0)
#define HH_SetPushPull()        do { ODCONDbits. = 0; } while(0)
#define HH_SetOpenDrain()       do { ODCONDbits. = 1; } while(0)
#define HH_SetAnalogMode()      do { ANSELDbits. = 1; } while(0)
#define HH_SetDigitalMode()     do { ANSELDbits. = 0; } while(0)

// get/set RE0 aliases
#define BCD_S1_TRIS                 TRISEbits.TRISE0
#define BCD_S1_LAT                  LATEbits.LATE0
#define BCD_S1_PORT                 PORTEbits.RE0
#define BCD_S1_WPU                  WPUEbits.
#define BCD_S1_OD                   ODCONEbits.
#define BCD_S1_ANS                  ANSELEbits.ANSEL5
#define BCD_S1_SetHigh()            do { LATEbits.LATE0 = 1; } while(0)
#define BCD_S1_SetLow()             do { LATEbits.LATE0 = 0; } while(0)
#define BCD_S1_Toggle()             do { LATEbits.LATE0 = ~LATEbits.LATE0; } while(0)
#define BCD_S1_GetValue()           PORTEbits.RE0
#define BCD_S1_SetDigitalInput()    do { TRISEbits.TRISE0 = 1; } while(0)
#define BCD_S1_SetDigitalOutput()   do { TRISEbits.TRISE0 = 0; } while(0)
#define BCD_S1_SetPullup()          do { WPUEbits. = 1; } while(0)
#define BCD_S1_ResetPullup()        do { WPUEbits. = 0; } while(0)
#define BCD_S1_SetPushPull()        do { ODCONEbits. = 0; } while(0)
#define BCD_S1_SetOpenDrain()       do { ODCONEbits. = 1; } while(0)
#define BCD_S1_SetAnalogMode()      do { ANSELEbits.ANSEL5 = 1; } while(0)
#define BCD_S1_SetDigitalMode()     do { ANSELEbits.ANSEL5 = 0; } while(0)

// get/set RE1 aliases
#define BCD_S2_TRIS                 TRISEbits.TRISE1
#define BCD_S2_LAT                  LATEbits.LATE1
#define BCD_S2_PORT                 PORTEbits.RE1
#define BCD_S2_WPU                  WPUEbits.
#define BCD_S2_OD                   ODCONEbits.
#define BCD_S2_ANS                  ANSELEbits.ANSEL6
#define BCD_S2_SetHigh()            do { LATEbits.LATE1 = 1; } while(0)
#define BCD_S2_SetLow()             do { LATEbits.LATE1 = 0; } while(0)
#define BCD_S2_Toggle()             do { LATEbits.LATE1 = ~LATEbits.LATE1; } while(0)
#define BCD_S2_GetValue()           PORTEbits.RE1
#define BCD_S2_SetDigitalInput()    do { TRISEbits.TRISE1 = 1; } while(0)
#define BCD_S2_SetDigitalOutput()   do { TRISEbits.TRISE1 = 0; } while(0)
#define BCD_S2_SetPullup()          do { WPUEbits. = 1; } while(0)
#define BCD_S2_ResetPullup()        do { WPUEbits. = 0; } while(0)
#define BCD_S2_SetPushPull()        do { ODCONEbits. = 0; } while(0)
#define BCD_S2_SetOpenDrain()       do { ODCONEbits. = 1; } while(0)
#define BCD_S2_SetAnalogMode()      do { ANSELEbits.ANSEL6 = 1; } while(0)
#define BCD_S2_SetDigitalMode()     do { ANSELEbits.ANSEL6 = 0; } while(0)

// get/set RE2 aliases
#define BCD_S3_TRIS                 TRISEbits.TRISE2
#define BCD_S3_LAT                  LATEbits.LATE2
#define BCD_S3_PORT                 PORTEbits.RE2
#define BCD_S3_WPU                  WPUEbits.
#define BCD_S3_OD                   ODCONEbits.
#define BCD_S3_ANS                  ANSELEbits.ANSEL7
#define BCD_S3_SetHigh()            do { LATEbits.LATE2 = 1; } while(0)
#define BCD_S3_SetLow()             do { LATEbits.LATE2 = 0; } while(0)
#define BCD_S3_Toggle()             do { LATEbits.LATE2 = ~LATEbits.LATE2; } while(0)
#define BCD_S3_GetValue()           PORTEbits.RE2
#define BCD_S3_SetDigitalInput()    do { TRISEbits.TRISE2 = 1; } while(0)
#define BCD_S3_SetDigitalOutput()   do { TRISEbits.TRISE2 = 0; } while(0)
#define BCD_S3_SetPullup()          do { WPUEbits. = 1; } while(0)
#define BCD_S3_ResetPullup()        do { WPUEbits. = 0; } while(0)
#define BCD_S3_SetPushPull()        do { ODCONEbits. = 0; } while(0)
#define BCD_S3_SetOpenDrain()       do { ODCONEbits. = 1; } while(0)
#define BCD_S3_SetAnalogMode()      do { ANSELEbits.ANSEL7 = 1; } while(0)
#define BCD_S3_SetDigitalMode()     do { ANSELEbits.ANSEL7 = 0; } while(0)

/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);


#endif // PINS_H
/**
 End of File
*/