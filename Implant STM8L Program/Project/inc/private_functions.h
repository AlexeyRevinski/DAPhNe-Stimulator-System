/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%                                                                        %%%%
%%%%          BME 390: Phrenic Nerve Stimulation: Implant Program           %%%%
%%%%                          private_functions.h                           %%%%
%%%%                                                                        %%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%	
********************************************************************************
*	Author:		Alexey Revinski
*	Last Revised:	11/05/2016
*******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __STM8L15x_IT_H
#define __STM8L15x_IT_H

/* Includes ------------------------------------------------------------------*/
#include "stm8l15x.h"
#include "stm8l15x_adc.h"
#include "stm8l15x_clk.h"
#include "stm8l15x_exti.h"
#include "stm8l15x_gpio.h"
#include "stm8l15x_tim2.h"
#include "stm8l15x_it.h"
#include "stm8l15x_rtc.h"
#include "stm8l15x_pwr.h"

#define TIME_BASE       ((uint16_t) 6249)       // Time base for TIM2 (20Hz)
#define BPM             ((uint32_t) 3500)       // Breaths Per Minute (out of 100)
#define IE_RATIO        ((uint32_t) 450)        // Insp:Exp. (out of 1000)

/*******************************************************************************
*  FUNCTION PROTOTYPES
*******************************************************************************/

void    initialize(void);
void    start_Inspiration(void);
void    start_Expiration(void);
void    Switch_To_HSI(void);
void    Switch_To_LSE(void); 
void    GPIO_Config(void);
void    TIM2_Config(void);
void    PWM2_Config(void);
void    RTC_Config(void);
void    calculate_RTC(void);


#endif /* __STM8L15x_IT_H */

/*******************************************************************************
**********************************   END   *************************************
*******************************************************************************/