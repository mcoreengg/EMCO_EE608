/**
  * TMR1 Generated Driver File
  *
  * @file tmr1.c
  *
  * @ingroup tmr1
  *
  * @brief This file contains the API implementation for the TMR1 driver.
  *
  * @version TMR1 Driver Version 2.0.0
  *
  * @version Package Version 2.0.0
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

/**
   Section: Included Files
*/

#include <xc.h>
#include "../tmr1.h"

/**
 * @misradeviation{@advisory,8.7}
 * The TMRx_CounterSet function is declared in a header file that can be included in any translation unit that needs to use it. 
 */

/**
 * Section: Global Variables Definitions
*/
static volatile uint16_t timer1ReloadVal;
static void (*TMR1_InterruptHandler)(void);
static void (*TMR1_OverflowCallback)(void);
static void TMR1_DefaultOverflowCallback(void);
static void (*TMR1_GateCallback)(void);
static void TMR1_DefaultGateCallback(void);

void TMR1_Initialize(void)
{
    T1CONbits.TMR1ON = 0;
    TMR1H = 0x9E;                       // Timer clock 250000 Hz; Period 100 ms; Count 40,536
    TMR1L = 0x58;

    // Load the TMR1 value to PeriodCount variable
    timer1ReloadVal=((uint16_t)TMR1H << 8) | TMR1L;

    T1GCON = (0 << _T1GCON_T1GSS_POSN)   // T1GSS T1G_pin
        | (0 << _T1GCON_T1GGO_POSN)   // T1GGO done
        | (0 << _T1GCON_T1GSPM_POSN)   // T1GSPM disabled
        | (0 << _T1GCON_T1GTM_POSN)   // T1GTM disabled
        | (0 << _T1GCON_T1GPOL_POSN)   // T1GPOL low
        | (0 << _T1GCON_TMR1GE_POSN);  // TMR1GE disabled

    //Set default callback for TMR1 overflow interrupt
    TMR1_OverflowCallbackRegister(TMR1_DefaultOverflowCallback);

    //Set default callback for TMR1 overflow interrupt
    TMR1_GateCallbackRegister(TMR1_DefaultGateCallback);

    // Clearing TMRI IF flag before enabling the interrupt.
     PIR1bits.TMR1IF = 0;
    // Enabling TMRI interrupt.
     PIE1bits.TMR1IE = 1;
    
    T1CON = (1 << _T1CON_TMR1ON_POSN)   // TMR1ON enabled
        | (1 << _T1CON_nT1SYNC_POSN)   // nT1SYNC do_not_synchronize
        | (3 << _T1CON_T1CKPS_POSN)   // T1CKPS 1:8
        | (0 << _T1CON_TMR1CS_POSN)   // TMR1CS FOSC/4
        | (1 << _T1CON_RD16_POSN)   // RD16 enabled
        | (0 << _T1CON_SOSCEN_POSN);  // SOSCEN disabled
}

void TMR1_Deinitialize(void)
{
    T1CONbits.TMR1ON = 0;
    	   
    PIE1bits.TMR1IE = 0;
    PIR1bits.TMR1IF = 0;
    PIE1bits.TMR1GIE = 0;
    PIR1bits.TMR1GIF = 0;	
    
    T1CON = 0x0;
    T1GCON = 0x0;
    TMR1H = 0x0;
    TMR1L = 0x0;
}


void TMR1_Start(void)
{
    // Start the Timer by writing to TMRxON bit
    T1CONbits.TMR1ON = 1;
}

void TMR1_Stop(void)
{
    // Stop the Timer by writing to TMRxON bit
    T1CONbits.TMR1ON = 0;
}

uint16_t TMR1_CounterGet(void)
{
    uint16_t counterValue;
    uint8_t counterHighByte;
    uint8_t counterLowByte;
    
	
    counterLowByte = TMR1L;
    counterHighByte = TMR1H;
    
    counterValue = ((uint16_t)counterHighByte << 8) | counterLowByte;

    return counterValue;
}

void TMR1_CounterSet(uint16_t timerVal)
{
    if (1U == T1CONbits.nT1SYNC)
    {
        // Stop the Timer by writing to TMRxON bit
        T1CONbits.TMR1ON = 0;

        // Write to the Timer1 register
        TMR1H = (uint8_t)(timerVal >> 8);
        TMR1L = (uint8_t)timerVal;

        // Start the Timer after writing to the register
        T1CONbits.TMR1ON = 1;
    }
    else
    {
        // Write to the Timer1 register
        TMR1H = (uint8_t)(timerVal >> 8);
        TMR1L = (uint8_t)timerVal;
    }
}

void TMR1_Reload(void)
{
    /* cppcheck-suppress misra-c2012-8.7 */
    TMR1_CounterSet(timer1ReloadVal);
}

uint16_t TMR1_MaxCountGet(void)
{
    return TMR1_MAX_COUNT;
}

void TMR1_PeriodSet(uint16_t periodCount)
{
    timer1ReloadVal = (uint16_t) (TMR1_MAX_COUNT - periodCount);
}

uint16_t TMR1_PeriodGet(void)
{
    return (TMR1_MAX_COUNT - timer1ReloadVal);
}

void TMR1_SinglePulseAcquisitionStart(void)
{
    T1GCONbits.T1GGO = 1;
}

uint8_t TMR1_GateStateGet(void)
{
    return (T1GCONbits.T1GVAL);
}

void TMR1_OverflowCallbackRegister(void (* CallbackHandler)(void))
{
    TMR1_OverflowCallback = CallbackHandler;
}

static void TMR1_DefaultOverflowCallback(void)
{
    //Add your interrupt code here or
    //Use TMR1_OverflowCallbackRegister function to use Custom ISR
}

bool TMR1_OverflowStatusGet(void)
{
    return(PIR1bits.TMR1IF);
}

void TMR1_OverflowStatusClear(void)
{
    PIR1bits.TMR1IF = 0;
}


void TMR1_TMRInterruptEnable(void)
{
    PIE1bits.TMR1IE = 1;
}

void TMR1_TMRInterruptDisable(void)
{
    PIE1bits.TMR1IE = 0;
}

void TMR1_OverflowISR(void)
{

    // Clear the TMR1 interrupt flag
    PIR1bits.TMR1IF = 0;
    /* cppcheck-suppress misra-c2012-8.7 */
    TMR1_CounterSet(timer1ReloadVal);

    if(NULL != TMR1_OverflowCallback)
    {
        TMR1_OverflowCallback();
    }
}


void TMR1_GateCallbackRegister(void (* CallbackHandler)(void))
{
    TMR1_GateCallback = CallbackHandler;
}

static void TMR1_DefaultGateCallback(void)
{
    // Add your interrupt code here or
    // Use TMR1_GateCallbackRegister function to use Custom ISR
}

/**
  End of File
*/