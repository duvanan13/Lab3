#include "fsm_automatic.h"
int num1 = 2;

void fsm_automatic2_run(){
	switch(status2){
		case INIT:
			HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, 1);
			HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, 1);
			HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, 1);

			break;
		case AUTO_RED:
			HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, 0);
			HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, 1);
			HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, 1);
			if(timer2_flag==1){
				status2=AUTO_GREEN;
				setTimer2(300);
			}
			if(timer4_flag==1){
				display7SEG_2(num1--);
				if(num1==0){num1=3;}
				setTimer4(100);
			}
			break;
		case AUTO_GREEN:
			HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, 1);
			HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, 0);
			HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, 1);
			if(timer2_flag==1){
				status2=AUTO_YELLOW;
				setTimer2(200);
			}
			if(timer4_flag==1){
				display7SEG_2(num1--);
				if(num1==0){num1=2;}
				setTimer4(100);
			}
			break;
		case AUTO_YELLOW:
			HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, 1);
			HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, 1);
			HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, 0);
			if(timer2_flag==1){
				status2=AUTO_RED;
				setTimer2(500);
			}
			if(timer4_flag==1){
				display7SEG_2(num1--);
				if(num1==0){num1=5;}
				setTimer4(100);
			}
			break;
		default:
			break;
		}
	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 0);
	HAL_GPIO_WritePin(EN4_GPIO_Port, EN4_Pin, 0);
}
