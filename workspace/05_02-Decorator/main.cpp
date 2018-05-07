#include "hwlib.hpp"


namespace target = hwlib::target;
int get(target::pin_in & button_one, target::pin_in & button_two);


int main(void){
	WDT->WDT_MR = WDT_MR_WDDIS;
	
	auto led = target::pin_out(target::pins::d8);
	
	auto button1 = target::pin_in(target::pins::d22);
	auto button2 = target::pin_in(target::pins::d24);
	
	hwlib::wait_ms(100);
	while(1){
		led.set(get(button1,button2));
	}
	return 0;
}


int get(target::pin_in & button_one, target::pin_in & button_two){
	if(!button_one.get() && !button_two.get()){
		return 1;
	}
	return 0;
}
