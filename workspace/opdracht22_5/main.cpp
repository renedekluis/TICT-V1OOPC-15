#include "hwlib.hpp"


namespace target = hwlib::target;
int get(target::pin_in & button_one, target::pin_in & button_two);


int main(void){
	WDT->WDT_MR = WDT_MR_WDDIS;
	
	auto led = target::pin_out(target::pins::d17);
	
	auto button1 = target::pin_in(target::pins::d12);
	auto button2 = target::pin_in(target::pins::d11);
	
	int result_value;
	hwlib::wait_ms(100);
	while(1){
		result_value = get(button1,button2);
		result_value == 0 ? led.set(0) : led.set(1);
	}
	return 0;
}


int get(target::pin_in & button_one, target::pin_in & button_two){
	if(button_one.get() == false && button_two.get() == false){
		return 1;
	}
	return 0;
}
