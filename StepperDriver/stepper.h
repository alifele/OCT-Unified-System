#include "stm32f1xx_hal.h"

typedef struct{
	GPIO_TypeDef * MS1;
	GPIO_TypeDef * MS2;
	GPIO_TypeDef * RST;
	GPIO_TypeDef * SLP;
	GPIO_TypeDef * ENB;
	GPIO_TypeDef * PFD;
	GPIO_TypeDef * DIR;
	GPIO_TypeDef * STEP;
	
	uint16_t MS1_pin;
	uint16_t MS2_pin;
	uint16_t RST_pin;
	uint16_t SLP_pin;
	uint16_t ENB_pin;
	uint16_t PFD_pin;
	uint16_t DIR_pin;
	uint16_t STEP_pin;
	
} stepper_typedef;


void stepper_init(stepper_typedef * keypad_struct);
