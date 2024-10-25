/**
 * ADC Generated Driver API Header File
 *
 * @file adc.h
 *  
 * @defgroup adc ADC
 *
 * @brief This file contains the API prototypes and data types for the ADC driver.
 *
 * @version ADC Driver Version 1.0.0
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

#ifndef ADC_H
#define ADC_H

#include <xc.h>
#include <stdint.h>
#include <stdbool.h>

/**
 @ingroup adc
 @typedef adc_result_t
 @brief Used for the result of the Analog-to-Digital (A/D) conversion.
 */
typedef uint16_t adc_result_t;

/**
 * @ingroup adc
 * @typedef adc_sync_double_result_t
 * @brief Used for the result for a Double ADC conversion value.
 */
typedef struct
{
    adc_result_t adcResult1;
    adc_result_t adcResult2;
} adc_sync_double_result_t;

/**
 * @ingroup adc
 * @enum adc_posChannel_t
 * @brief Contains the available ADC channels.
 */
typedef enum
{
    posChannel_CTMU =  0x1c,
    posChannel_Temp_diode =  0x1d,
    posChannel_Vdd_core =  0x1e,
    posChannel_1_024V_bandgap =  0x1f
} adc_posChannel_t;

/**
 * @ingroup adc
 * @enum adc_negChannel_t
 * @brief Contains the available negative ADC channels.
 */
typedef enum
{
    negChannel_AVss =  0x0
} adc_negChannel_t;

/**
  Section: ADC Module APIs
 */

/**
 * @ingroup adc
 * @brief Initializes the ADC module. This routine is called before any other ADC routine.
 * @param None.
 * @return None.
 */
void IP1_ADC_Initialize(void);

/**
 * @ingroup adc
 * @brief Sets the positive channel for the A/D conversion.
 * @param channel - Analog channel number on which the A/D conversion will be applied.
 *                  Refer to adc_posChannel_t  for the available channels.
 * @return None.
 */
void ADC_SetPositiveChannel(adc_posChannel_t channel);

/**
 * @ingroup adc
 * @brief Sets the negative channel for the A/D conversion.
 * @param channel - Analog channel number on which the A/D conversion will be applied.
 *                  Refer to adc_negChannel_t  for the available channels.
 * @return None.
 */
void ADC_SetNegativeChannel(adc_negChannel_t channel);

/**
 * @ingroup adc
 * @brief Starts A/D conversion.
 * @param None.
 * @return None.
 */
void IP1_ADC_StartConversion(void);
 
/**
 * @ingroup adc
 * @brief Checks if ongoing A/D conversion is complete.
 * @param None.
 * @retval True - A/D conversion is complete.
 * @retval False - A/D conversion is ongoing.
 */
bool IP1_ADC_IsConversionDone(void);
 
/**
 * @ingroup adc
 * @brief Retrieves the result of the latest A/D conversion.
 * @param None.
 * @return The result of A/D conversion. Refer to the adc_result_t.
 */
adc_result_t IP1_ADC_GetConversionResult(void);

/**
 * @ingroup adc
 * @brief Retrieves the result of a single A/D conversion on the selected channels.
 * @param posChannel - Postive analog channel number on which the A/D conversion will be applied.
 *                  Refer to adc_posChannel_t  for the available channels.
 * @param negChannel - Negative analog channel number on which the A/D conversion will be applied.
 *                  Refer to adc_negChannel_t  for the available channels.
* @return The result of the A/D conversion. Refer to the adc_result_t.
 */
adc_result_t IP1_ADC_GetConversion(adc_posChannel_t posChannel,adc_negChannel_t negChannel);
 
/**
 * @ingroup adc
 * @brief Adds the acquisition delay for the temperature sensor.
 * @pre This function is called when temperature sensor is used.
 * @param None.
 * @return None.
 */
void IP1_ADC_TemperatureAcquisitionDelay(void);

#endif	//ADC_H
