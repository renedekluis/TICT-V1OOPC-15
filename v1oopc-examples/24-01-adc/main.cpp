#include "hwlib.hpp"
#include "mirror.hpp"

int main( void ){	
    
   // kill the watchdog
   WDT->WDT_MR = WDT_MR_WDDIS;
   
   namespace target = hwlib::target;   
   auto adc0 = target::pin_adc( target::ad_pins::a0 );
   auto adc2 = target::pin_adc( target::ad_pins::a2 );

   for(;;){      
      hwlib::cout 
         << "adc = " 
         << hwlib::setw( 8 ) << adc0.get()
         << hwlib::setw( 8 ) << adc2.get()
         << "\n";
      hwlib::wait_ms( 500 );
   }
     
}
