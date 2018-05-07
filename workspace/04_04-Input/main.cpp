#include "hwlib.hpp"

int main(int argc, char **argv){
	// kill the watchdog
	WDT->WDT_MR = WDT_MR_WDDIS;
	
	namespace target = hwlib::target;
	
	auto led0 	= target::pin_out(target::pins::d7);
	auto led1 	= target::pin_out(target::pins::d6);
	auto led2 	= target::pin_out(target::pins::d5);
	auto led3 	= target::pin_out(target::pins::d4);
	
	target::pin_out* leds[] = { &led0, &led1, &led2, &led3 };
	
	auto add 	= target::pin_in(target::pins::d24); //Button
	auto remove = target::pin_in(target::pins::d22); //Button
	
	
	
	bool add_pressed 	= false;
	bool remove_pressed	= false;
	int activeLeds		= 0;
	hwlib::cout << activeLeds << "\n";
	while(1){
		if(add.get() == false){
			//while(!add.get());
			if(add_pressed != true){
				if(activeLeds < 4){ activeLeds++; }
			}
			add_pressed = true;
		}
		else if(remove.get() == false){
			//while(!remove.get());
			if(remove_pressed != true){
				activeLeds--;
				if(activeLeds < 0){ activeLeds = 0; }
			}
			remove_pressed = true;
		}
		else{
			add_pressed 	= false;
			remove_pressed 	= false;
		}
		
		
		for(int i = 0; i < 4; i++){
			i+1 <= activeLeds ? leds[i]->set(1) : leds[i]->set(0);
		}

		hwlib::cout << activeLeds << "\n";
		hwlib::wait_ms(50);
	}
}
