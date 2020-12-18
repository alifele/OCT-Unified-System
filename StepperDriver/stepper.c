#include "stepper.h"



void stepper_init(stepper_typedef * keypad_struct){
	
	
	HAL_GPIO_WritePin(keypad_struct->MS1, keypad_struct->MS1_pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(keypad_struct->MS2, keypad_struct->MS2_pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(keypad_struct->RST, keypad_struct->RST_pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(keypad_struct->SLP, keypad_struct->SLP_pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(keypad_struct->ENB, keypad_struct->ENB_pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(keypad_struct->PFD, keypad_struct->PFD_pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(keypad_struct->DIR, keypad_struct->DIR_pin, GPIO_PIN_RESET);
}