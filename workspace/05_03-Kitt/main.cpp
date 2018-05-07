#include "hwlib.hpp"

class pin_out_invert{
private:
	int left = 0x0F;
	int right = 0xF0;
	hwlib::hc595 chip;
	
public:
	pin_out_invert(hwlib::spi_bus_bit_banged_sclk_mosi_miso & spi_bus, hwlib::target::pin_out & shcp):
		chip(hwlib::hc595(spi_bus,shcp))
	{}
	
	
	void kitt()
	{
		chip.set(left);
		hwlib::wait_ms(1000);
		chip.set(right);
		hwlib::wait_ms(1000);
	}
	
};

int main( void ){	
	// kill the watchdog
	WDT->WDT_MR = WDT_MR_WDDIS;

	namespace target = hwlib::target;
	target::pin_out( target::pins::d23 ).set(1);

	auto ds       = target::pin_out( target::pins::d30 );
	auto shcp     = target::pin_out( target::pins::d31);
	auto stcp     = target::pin_out( target::pins::d32);
	auto reset 	 = target::pin_out(target::pins::d4);
	auto spi_bus  = hwlib::spi_bus_bit_banged_sclk_mosi_miso( stcp, ds, hwlib::pin_in_dummy );
	reset.set(1);
	auto leds = pin_out_invert(spi_bus, shcp );
	
	while(1)
	{
		leds.kitt();
	}
}
