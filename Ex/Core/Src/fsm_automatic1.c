#include "fsm_automatic.h"
int num = 4;

void fsm_automatic1_run(){
	switch(status1){
		case INIT:
			HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, 1);
			HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, 1);
			HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, 1);
			break;
		case AUTO_RED:
			HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, 0);
			HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, 1);
			HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, 1);
			if(timer1_flag==1){
				status1=AUTO_GREEN;
				setTimer1(300);
			}
			if(timer3_flag==1){
				display7SEG_1(num--);
				if(num==0){num=3;}
				setTimer3(100);
			}
			break;
		case AUTO_GREEN:
			HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, 1);
			HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, 0);
			HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, 1);
			if(timer1_flag==1){
				status1=AUTO_YELLOW;
				setTimer1(200);
			}
			if(timer3_flag==1){
				display7SEG_1(num--);
				if(num==0){num=2;}
				setTimer3(100);
			}
			break;
		case AUTO_YELLOW:
			HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, 1);
			HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, 1);
			HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, 0);
			if(timer1_flag==1){
				status1=AUTO_RED;
				setTimer1(500);
			}
			if(timer3_flag==1){
				display7SEG_1(num--);
				if(num==0){num=5;}
				setTimer3(100);
			}
			break;
		default:
			break;
	}
	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 0);
	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 0);

}



