#include "hwlib.hpp"

int main(void){
	
	WDT->WDT_MR = WDT_MR_WDDIS;
	namespace target = hwlib::target;
	
	auto led0 	= target::pin_out(target::pins::d17);
	auto led1 	= target::pin_out(target::pins::d16);
	auto led2 	= target::pin_out(target::pins::d15);
	auto led3 	= target::pin_out(target::pins::d14);
	
	target::pin_out* leds[] = { &led0, &led1, &led2, &led3 };
	
	auto data	= target::pin_out(target::pins::d1);
	auto select	= target::pin_out(target::pins::d2);
	auto clock	= target::pin_out(target::pins::d3);
	auto reset	= target::pin_out(target::pins::d4);
	
	auto add 	= target::pin_in(target::pins::d12);
	auto remove = target::pin_in(target::pins::d11);
	
	auto spi  = hwlib::spi_bus_bit_banged_sclk_mosi_miso( 
					clock, 
					data, 
					hwlib::pin_in_dummy 
				);
				
	hwlib::wait_ms(100);
	byte* send;
	bool add_pressed = false;
	bool remove_pressed = false;
	int a = 0;
	byte b = 0x00;
	while(1){
		reset.set(0);
		reset.set(1);
		
		if(add.get() == false){
			if(add_pressed != true){
				a++;
				if(a > 4 ){ 
					a = 4; 
					b = (b * 2) + 1;
					if(b > 15){ b = 15;}
				}
			}
			add_pressed = true;
		}
		else if(remove.get() == false){
			if(remove_pressed != true){
				
				if(b > 0){ 
					b = (b - 1)/2;
				}
				else if(b <= 0){
					a--;
					b = 0;
					if(a < 0){
						a = 0;
					}
				}
			}
			remove_pressed = true;
		}
		else{
			add_pressed = false;
			remove_pressed = false;
		}
		
		
		for(int i = 0; i < 4; i++){
			i+1 <= a ? leds[i]->set(1) : leds[i]->set(0);
		}
		
		send = (byte*)&b;
		spi.write_and_read(select, 1 , send, 0x00);
		hwlib::wait_ms(50);
	}
	return 0;
}



