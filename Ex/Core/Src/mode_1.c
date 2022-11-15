/*
 * mode_1.c
 *
 *  Created on: 4 Nov 2022
 *      Author: duvan
 */
#include "mode_1.h"

void mode_1(){

	if(isButtonPressed(0)==1){
		if(mod==1){
		status1 = AUTO_RED;
		setTimer1(500);
		setTimer3(100);
		display7SEG_1(5);

		status2 = AUTO_GREEN;
		setTimer2(300);
		setTimer4(100);
		display7SEG_2(3);}
		if(mod==2){

			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 1);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 1);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 1);
			HAL_GPIO_WritePin(EN4_GPIO_Port, EN4_Pin, 1);
			HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, 1);
						HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, 1);
						HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, 1);
		}
	}



	fsm_automatic1_run();
	fsm_automatic2_run();
}

