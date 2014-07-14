
#include <stdio.h>
#include "gpio.h"


int main(){

	printf("value returned:%d\n",gpio_initialize(P8,5,OUT,0));	
	printf("value of the pin:%d\n",gpio_read(P8,5));
	if(gpio_is_input(P8,5) == 1)
		printf("pin is i/p\n");
	else if(gpio_is_input(P8,5) == 0)
		printf("pin is o/p\n");
	else if(gpio_is_input(P8,5) == -1)
		printf("pin read error\n");

	sleep(5);
	gpio_toggle(P8,5);
	printf("value of the pin:%d\n",gpio_read(P8,5));
	return 0;
}
