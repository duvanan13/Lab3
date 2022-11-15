/*
 * button.c
 *
 *  Created on: 31 Oct 2022
 *      Author: duvan
 */
#include "button.h"

int button1_flag = 0;
int button2_flag = 0;
int button3_flag = 0;
int keyReg0[3];
int keyReg1[3];
int keyReg2[3];

int keyReg3[3];

int TimerForKeyPress = 200;

void subKeyProcess(int index){
	if(index==0) button1_flag=1;
	if(index==1) button2_flag=1;
	if(index==2) button3_flag=1;
}
int isButtonPressed(int index){
	if(index==0){
		if(button1_flag==1){
			button1_flag=0;
			mod++;
			if(mod==3) mod=1;
			return 1;
		}
	}
	if(index==1){
		if(button2_flag==1){
			button2_flag=0;
			return 1;
		}
	}
	if(index==2){
		if(button3_flag==1){
			button3_flag=0;
			return 1;
		}
	}
	return 0;
}

void getkeyInput(){
	for(int i=0;i<3;i++){
	keyReg0[i] = keyReg1[i];
	keyReg1[i] = keyReg2[i];
	if(i==0){
		keyReg2[i] = HAL_GPIO_ReadPin(Button1_GPIO_Port, Button1_Pin);
	}
	if(i==1){
		keyReg2[i] = HAL_GPIO_ReadPin(Button2_GPIO_Port, Button2_Pin);
	}
	if(i==2){
		keyReg2[i] = HAL_GPIO_ReadPin(Button3_GPIO_Port, Button3_Pin);
	}
	if((keyReg0[i]==keyReg1[i]) && (keyReg1[i]==keyReg2[i])){
		if(keyReg3[i] != keyReg2[i]){
			keyReg3[i] = keyReg2[i];
			if(keyReg2[i]==PRESSED_STATE){
				subKeyProcess(i);
				TimerForKeyPress = 200;
			}
		}
		else{
			TimerForKeyPress--;
			if(TimerForKeyPress==0){
				if(keyReg2[i]==PRESSED_STATE){
					subKeyProcess(i);
				}
				TimerForKeyPress = 200;
//				keyReg3=NORMAL_STATE;
			}
		}
	}}
}



