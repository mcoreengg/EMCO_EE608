
/**
 * TMR1 Generated Driver API Header File
 *
 * @file tmr1.h
 *
 * @defgroup tmr1 TMR1
 *
 * @brief This file contains the API prototypes and other data types for the TMR1 driver.
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

#ifndef TMR1_H
#define TMR1_H

#include <stdbool.h>
#include <stdint.h>
#include "tmr1_deprecated.h"

/**
 * @misradeviation{@advisory,2.5}
 * MCC Melody drivers provide macros that can be added to an application. 
 * It depends on the application whether a macro is used or not. 
 */

/**
 * @ingroup tmr1
 * @brief Defines the TMR1 maximum count value
 */
#define TMR1_MAX_COUNT (65535U)

/**
 * @ingroup tmr1
 * @brief Defines the TMR1 prescaled frequency in hertz.
 */
 /* cppcheck-suppress misra-c2012-2.5 */
#define TMR1_CLOCK_FREQ (250000UL)

/**
 * @ingroup tmr1
 * @brief Defines the Custom Name for the \ref TMR1_Initialize API
 */
 /* cppcheck-suppress misra-c2012-2.5 */
#define Timer1_Initialize TMR1_Initialize

/**
 * @ingroup tmr1
 * @brief Defines the Custom Name for the \ref TMR1_Deinitialize API
 */
 /* cppcheck-suppress misra-c2012-2.5 */
#define Timer1_Deinitialize TMR1_Deinitialize

/**
 * @ingroup tmr1
 * @brief Defines the Custom Name for the \ref TMR1_Start API
 */
 /* cppcheck-suppress misra-c2012-2.5 */
#define Timer1_Start TMR1_Start

/**
 * @ingroup tmr1
 * @brief Defines the Custom Name for the \ref TMR1_Stop API
 */
 /* cppcheck-suppress misra-c2012-2.5 */
#define Timer1_Stop TMR1_Stop

/**
 * @ingroup tmr1
 * @brief Defines the Custom Name for the \ref TMR1_CounterGet API
 */
 /* cppcheck-suppress misra-c2012-2.5 */
#define Timer1_CounterGet TMR1_CounterGet

/**
 * @ingroup tmr1
 * @brief Defines the Custom Name for the \ref TMR1_CounterSet API
 */
 /* cppcheck-suppress misra-c2012-2.5 */
#define Timer1_CounterSet TMR1_CounterSet

/**
 * @ingroup tmr1
 * @brief Defines the Custom Name for the \ref TMR1_PeriodSet API
 */
 /* cppcheck-suppress misra-c2012-2.5 */
#define Timer1_PeriodSet TMR1_PeriodSet

/**
 * @ingroup tmr1
 * @brief Defines the Custom Name for the \ref TMR1_PeriodGet API
 */
 /* cppcheck-suppress misra-c2012-2.5 */
#define Timer1_PeriodGet TMR1_PeriodGet

/**
 * @ingroup tmr1
 * @brief Defines the Custom Name for the \ref TMR1_Reload API
 */
 /* cppcheck-suppress misra-c2012-2.5 */
#define Timer1_Reload TMR1_Reload

/**
 * @ingroup tmr1
 * @brief Defines the Custom Name for the \ref TMR1_MaxCountGet API
 */
 /* cppcheck-suppress misra-c2012-2.5 */
#define Timer1_MaxCountGet TMR1_MaxCountGet

/**
 * @ingroup tmr1
 * @brief Defines the Custom Name for the \ref TMR1_OverflowCallbackRegister API
 */
 /* cppcheck-suppress misra-c2012-2.5 */
#define Timer1_OverflowCallbackRegister TMR1_OverflowCallbackRegister

/**
 * @ingroup tmr1
 * @brief Defines the Custom Name for the \ref TMR1_OverflowISR API
 */
 /* cppcheck-suppress misra-c2012-2.5 */
#define Timer1_OverflowISR TMR1_OverflowISR

/**
 * @ingroup tmr1
 * @brief Defines the Custom Name for the \ref TMR1_OverflowCallbackRegister API
 */
 /* cppcheck-suppress misra-c2012-2.5 */
#define Timer1_OverflowCallbackRegister TMR1_OverflowCallbackRegister


/**
 * @ingroup timerdriver
 * @brief Defines the Custom Name for the \ref TMR1_OverflowISR API.
 */
/* cppcheck-suppress misra-c2012-2.5 */
#define Timer1_OverflowISR TMR1_OverflowISR

/**
 * @ingroup tmr1
 * @brief Defines the Custom Name for the \ref TMR1_OverflowStatusGet API
 */
 /* cppcheck-suppress misra-c2012-2.5 */
 #define Timer1_OverflowStatusGet TMR1_OverflowStatusGet

 /**
 * @ingroup tmr1
 * @brief Defines the Custom Name for the \ref TMR1_OverflowStatusClear API
 */
 /* cppcheck-suppress misra-c2012-2.5 */
#define Timer1_OverflowStatusClear TMR1_OverflowStatusClear

 /**
 * @ingroup tmr1
 * @brief Defines the Custom Name for the \ref TMR1_TMRInterruptEnable API
 */
 /* cppcheck-suppress misra-c2012-2.5 */
#define Timer1_TMRInterruptEnable TMR1_TMRInterruptEnable

/**
 * @ingroup tmr1
 * @brief Defines the Custom Name for the \ref TMR1_TMRInterruptDisable API
 */
 /* cppcheck-suppress misra-c2012-2.5 */
#define Timer1_TMRInterruptDisable TMR1_TMRInterruptDisable

/**
 * @ingroup tmr1
 * @brief Defines the Custom Name for the \ref TMR1_GateStateGet API.
 */
/* cppcheck-suppress misra-c2012-2.5 */
#define Timer1_GateStateGet TMR1_GateStateGet
/**
 * @ingroup tmr1
 * @brief Defines the Custom Name for the \ref TMR1_SinglePulseAcquisitionStart API.
 */
/* cppcheck-suppress misra-c2012-2.5 */
#define Timer1_SinglePulseAcquisitionStart TMR1_SinglePulseAcquisitionStart
/**
 * @ingroup tmr1
 * @brief Defines the Custom Name for the \ref TMR1_GateCallbackRegister API.
 */
/* cppcheck-suppress misra-c2012-2.5 */
#define Timer1_GateCallbackRegister TMR1_GateCallbackRegister


/**
  Section: TMR1 APIs
*/

/**
 * @ingroup tmr1
 * @brief Initializes the TMR1 module. This routine must be called before any other timer routines.
 * @param None.
 * @return None.
 */
void TMR1_Initialize(void);

/**
 * @ingroup tmr1
 * @brief Deinitializes the TMR1 to Power On Reset (POR) values.
 * @param None.
 * @return None.
 */
void TMR1_Deinitialize(void);

/**
 * @ingroup tmr1
 * @brief Starts TMR1.
 * @pre Initilize TMR1 with TMR1_Initialize() before calling this API.
 * @param None.
 * @return None.
 */
void Timer1_Start(void);

/**
 * @ingroup tmr1
 * @brief Stops TMR1.
 * @pre Initilize TMR1 with TMR1_Initialize() before calling this API.
 * @param None.
 * @return None.
 */
void Timer1_Stop(void);

/**
 * @ingroup tmr1
 * @brief Reads the 16-bit value from the TMR1 register.
 * @pre Initilize TMR1 with TMR1_Initialize() before calling this API.
 * @param None.
 * @return 16-bit data from the TMR1 register
 */
uint16_t TMR1_CounterGet(void);

/**
 * @ingroup tmr1
 * @brief Writes the 16-bit value to the TMR1 register.
 * @pre Initilize TMR1 with TMR1_Initialize() before calling this API.
 * @param timerVal - 16-bit value to be written to the TMR1 register
 * @return None.
 */
void TMR1_CounterSet(uint16_t timerVal);

/**
 * @ingroup tmr1
 * @brief Loads the 16-bit value to the PR1 register.
 * @pre Initilize TMR1 with TMR1_Initialize() before calling this API.
 * @param periodVal - 16-bit value written to the PR1 register
 * @return None.
 */
void TMR1_PeriodSet(uint16_t periodVal);

/**
 * @ingroup tmr1
 * @brief Returns the TMR1 period count value.
 * @pre Initilize TMR1 with TMR1_Initialize() before calling this API.
 * @param None.
 * @return TMR1 period count value
 */
uint16_t TMR1_PeriodGet(void);

/**
 * @ingroup tmr1
 * @brief Loads the 16-bit value to the TMR1 register.
 * @pre Initilize TMR1 with TMR1_Initialize() before calling this API.
 * @param None.
 * @return None.
 */
void TMR1_Reload(void);

/**
 * @ingroup tmr1
 * @brief Returns the TMR1 maximum count value.
 * @param None.
 * @return TMR1 maximum count value
 */
uint16_t TMR1_MaxCountGet(void);

/**
 * @ingroup tmr1
 * @brief Starts the single-pulse acquisition in TMR1 Gate operation.
 * @pre This function must be used when the TMR1 Gate is enabled.
 * @param None.
 * @return None.
 */
void TMR1_SinglePulseAcquisitionStart(void);

/**
 * @ingroup tmr1
 * @brief Reads the TMR1 Gate value and returns it.
 * @pre This function must be used once the TMR1 Gate is enabled.
 * @param None.
 * @return uint8_t - Gate value status
 */
uint8_t TMR1_GateStateGet(void);

/**
 * @ingroup tmr1
 * @brief Enables TMR1 interrupt.
 * @param None.
 * @return None.
 */
void TMR1_TMRInterruptEnable(void);

/**
 * @ingroup tmr1
 * @brief Disables  TMR1 interrupt.
 * @param None.
 * @return None.
 */
void TMR1_TMRInterruptDisable(void);

/**
 * @ingroup tmr1
 * @brief Interrupt Service Routine (ISR) for TMR1 overflow interrupt.
 * @param None.
 * @return None.
 */
void TMR1_OverflowISR(void);

/**
 * @ingroup tmr1
 * @brief Setter function for the TMR1 overflow callback.
 * @param void (* CallbackHandler)(void) - Pointer to the custom callback
 * @return None.
 */
void TMR1_OverflowCallbackRegister(void (* CallbackHandler)(void));

/**
 * @ingroup tmr1
 * @brief Checks for the Timer Overflow flag when in Polling mode.
 * @param None.
 * @retval true  - Timer overflow has occured
 * @retval false - Timer overflow has not occured
 */
bool TMR1_OverflowStatusGet(void);

/**
 * @ingroup tmr1
 * @brief Clears the timer overflow flag in Non-Interrupt mode.
 * @param None.
 * @retval None.
 */
void TMR1_OverflowStatusClear(void);

/**
 * @ingroup tmr1
 * @brief Setter function for the Timer Gate callback.
 * @param void (* CallbackHandler)(void) - Pointer to the custom callback
 * @return None.
 */
 void TMR1_GateCallbackRegister(void (* CallbackHandler)(void));
 

#endif // TMR1_H

/**
 End of File
*/
