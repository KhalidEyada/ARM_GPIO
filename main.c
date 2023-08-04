#include "STD_TYPES.h"
#include "GPIO_interface.h"


int main(void){
	DIO_voidEnablePortClock(GPIOA_PORT);
	DIO_voidSetPinMode(GPIOA_PORT,PIN5,MODE_OUTPUT);
	DIO_voidSetOutType(GPIOA_PORT,PIN5,OUTPUT_TYPE_PUSH_PULL);
	DIO_voidSetOutSpeed(GPIOA_PORT,PIN5,OUTPUT_MEDUIM_SPEED);
	DIO_voidSetPull(GPIOA_PORT,PIN5,PULL_UP);
	DIO_voidWriteDataOdr(GPIOA_PORT,PIN5,HIGH);
}
