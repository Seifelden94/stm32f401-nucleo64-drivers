/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

#include <stdint.h>
#include "DIO.h"
#include "MEMORY.h"
#include "CLOCK.h"
#include "TIMERS.h"
// #include "stm32f4xx_hal.h"

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif


 int main(void)
  {   //int x;


   clock_initialization() ;

   dio_intialise();
   GPIO_pullup_down(GPIOA,PIN0,  PULLUP);
   timer2_initi();
   timer4_initi();


    while(1)

     {
       //x=GPIO_read_bit(GPIOA,PIN0);



       GPIO_toggle_atomic( GPIOA, PIN5  );

      delaytime2_msec(100);



     }
   }
