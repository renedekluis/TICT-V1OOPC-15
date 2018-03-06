#include "hwlib.hpp"
#include <vector>


void blink( hwlib::pin_in_out & led );



int main( void ){	
   // kill the watchdog
   WDT->WDT_MR = WDT_MR_WDDIS;
   
   auto led1 = hwlib::target::pin_in_out( 1, 27 );
   auto led2 = hwlib::target::pin_in_out( 1, 27 );
   auto led3 = hwlib::target::pin_in_out( 1, 27 );
   auto led4 = hwlib::target::pin_in_out( 1, 27 );
   
   led1.set(1);
   led2.set(1);
   led3.set(0);
   led4.set(0);
   

}

void pattern(std::vector<hwlib::pin_in_out*> leds, int pattern)
{
	
}

void blink( hwlib::pin_in_out & led ){
   led.direction_set_output();
   while(1){
      led.set( 1 );
      hwlib::wait_ms( 200 );
      led.set( 0 );
      hwlib::wait_ms( 200 );      
   }
}