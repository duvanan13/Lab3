/*
 * mode_2.c
 *
 *  Created on: 14 Nov 2022
 *      Author: duvan
 */
#include "mode_2.h"

void mode_2(){
	if(isButtonPressed(0)==1){
		status1 = INIT;
		status2 = INIT;
//		HAL_GPIO_TogglePin(LED_RED1_GPIO_Port, LED_RED1_Pin);
//		HAL_GPIO_TogglePin(LED_RED2_GPIO_Port, LED_RED2_Pin);
	}
	fsm_automatic1_run();
	fsm_automatic2_run();

}
