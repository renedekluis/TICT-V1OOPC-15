#include "hwlib.hpp"

class pin_out_4: public hwlib::pin_out {
private:
   hwlib::pin_out * group[ 4 ];     
   
public:

   pin_out_4( 
      hwlib::pin_out & pin0, hwlib::pin_out & pin1 = hwlib::pin_out_dummy,  
      hwlib::pin_out & pin2 = hwlib::pin_out_dummy, hwlib::pin_out & pin3 = hwlib::pin_out_dummy 
   ):
      group( &pin0, &pin1, &pin2, &pin3 )
   {}
   
	void set( bool x ,hwlib::buffering buf = hwlib::buffering::unbuffered) 
	{
		for( auto pin  : group )
		{
			pin->set( x );
		}
	}
};

class pin_out_invert{
private:
	pin_out_4 & left;
	pin_out_4 & right;
public:
	pin_out_invert(hwlib::pin_out & pin0, hwlib::pin_out & pin1, hwlib::pin_out & pin2, hwlib::pin_out & pin3, hwlib::pin_out & pin4, hwlib::pin_out & pin5, hwlib::pin_out & pin6, hwlib::pin_out & pin7):
		left(pin0, pin1, pin2, pin3),
		right(pin4, pin5, pin6, pin7)
	{}
	
	void kitt()
	{
		left.set(1);
		hwlib::wait_ms(200);
		left.set(0);
		right.set(1);
		hwlib::wait_ms(200);
		right.set(0);
	}
};
int main(int argc, char **argv)
{
	// kill the watchdog
	WDT->WDT_MR = WDT_MR_WDDIS;
	namespace target = hwlib::target;
	
	
	auto led0 =  target::pin_out(  target::pins::d30 );
	auto led1 =  target::pin_out(  target::pins::d31 );
	auto led2 =  target::pin_out(  target::pins::d32 );
	auto led3 =  target::pin_out(  target::pins::d33 );
	auto led4 =  target::pin_out(  target::pins::d34 );
	auto led5 =  target::pin_out(  target::pins::d35 );
	auto led6 =  target::pin_out(  target::pins::d36 );
	auto led7 =  target::pin_out(  target::pins::d37 );
	
	auto leds = pin_out_invert( led0, led1, led2, led3, led4, led5, led6, led7);
	while(1)
	{
		leds.kitt();
	}
}
