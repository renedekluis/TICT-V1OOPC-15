#include "hwlib.hpp"

void burn(hwlib::hc595 & chip, hwlib::target::pin_out * leds[], int row[]  );
void plus(int* row);
void minus(int* row);



int main(void){
	
	WDT->WDT_MR = WDT_MR_WDDIS;
	namespace target = hwlib::target;
	
	auto led0 	= target::pin_out(target::pins::d11);
	auto led1 	= target::pin_out(target::pins::d10);
	auto led2 	= target::pin_out(target::pins::d9);
	auto led3 	= target::pin_out(target::pins::d8);
	auto vcc 	= target::pin_out(target::pins::d23);
	vcc.set(1);
	
	target::pin_out* leds[] = { &led0, &led1, &led2, &led3 };
	
	auto data	= target::pin_out(target::pins::d1);
	auto select	= target::pin_out(target::pins::d2);
	auto clock	= target::pin_out(target::pins::d3);
	auto reset	= target::pin_out(target::pins::d4);
	
	auto add 	= target::pin_in(target::pins::d22);
	auto remove = target::pin_in(target::pins::d24);
	
	auto spi  = hwlib::spi_bus_bit_banged_sclk_mosi_miso( clock, data, hwlib::pin_in_dummy );
	auto hc595 = hwlib::hc595(spi, select);
	
	//StartUp
	hwlib::wait_ms(100);
	 
	int row[] = {0,0,0,0,0,0,0,0};

	while(1){
		if (add.get() == false){
			plus(row);
			while(!add.get());
			reset.set(0);
			reset.set(1);
		}
		else if (remove.get() == false){
			minus(row);
			while(!remove.get());
			reset.set(0);
			reset.set(1);
		}
		
		burn(hc595, leds, row);
	}
	return 0;
}



void burn(hwlib::hc595 & chip, hwlib::target::pin_out * leds[], int row[] )
{
	chip.p0.set(row[0]);
	chip.p1.set(row[1]); 
	chip.p2.set(row[2]); 
	chip.p3.set(row[3]);

	for(int i = 0; i < 4; i++)
		leds[i]->set(row[i+4]);
}

void plus(int* row)
{
	for (int i = 0; i <= 8; i++){
		if(row[i] == 0){
			row[i] = 1;
			break;
		}
	}
}


void minus(int* row)
{
	for(int i = 7; i >= 0; i--)
	{
		if(row[i]==1)
		{
			row[i] = 0;
			break;
		}
	}
}