#include "hwlib.hpp"

class pin_out_invert : public hwlib::pin_out {
private:
   hwlib::pin_out & slave;
   
public:
   pin_out_invert( hwlib::pin_out & slave ): 
      slave( slave ){}
   
   void set( bool x ) override {
      slave.set( ! x );
   }  
};

class pin_out_all : public hwlib::pin_out {
private:
   hwlib::pin_out * list[ 4 ];     
   
public:

   pin_out_all( 
      hwlib::pin_out & p0, 
      hwlib::pin_out & p1 = hwlib::pin_out_dummy,  
      hwlib::pin_out & p2 = hwlib::pin_out_dummy, 
      hwlib::pin_out & p3 = hwlib::pin_out_dummy 
   ):
      list{ &p0, &p1, &p2, &p3 }
   {}
   
   void set( bool v ){
      for( auto p  : list ){
          p->set( v );
      }
   }
};

void kitt2(  hwlib::spi_bus_bit_banged_sclk_mosi_miso & spi, hwlib::target::pin_out & select, pin_out_all & leds, int wait = 1000){
	byte on = 0xFF;
	byte off = 0x00;
	byte* send = {0x00};
	for(;;){
		send = (byte*)&on;
		spi.write_and_read(select, 1 , send, 0x00);
		leds.set(1);
		hwlib::wait_ms(wait);
		send = (byte*)&off;
		spi.write_and_read(select, 1 , send, 0x00);
		leds.set(0);
		hwlib::wait_ms(wait);
	}
}


int main(int argc, char **argv){
	// kill the watchdog
	WDT->WDT_MR = WDT_MR_WDDIS;
	
	namespace target = hwlib::target;
	
	auto led0_pin		= target::pin_out(target::pins::d17);
	auto led1_pin		= target::pin_out(target::pins::d16);
	auto led2_pin		= target::pin_out(target::pins::d15);
	auto led3_pin		= target::pin_out(target::pins::d14);
	
	auto led0 		= pin_out_invert(led0_pin);
	auto led1 		= pin_out_invert(led1_pin);
	auto led2		= pin_out_invert(led2_pin);
	auto led3 		= pin_out_invert(led3_pin);
	
	auto leds = pin_out_all( led0, led1, led2, led3 );
	
	auto data	= target::pin_out(target::pins::d1);
	auto select	= target::pin_out(target::pins::d2);
	auto clock	= target::pin_out(target::pins::d3);
	
	auto spi  = hwlib::spi_bus_bit_banged_sclk_mosi_miso( 
					clock, 
					data, 
					hwlib::pin_in_dummy 
				);
				
	hwlib::wait_ms(100);
	
	while(1){
		kitt2(spi, select, leds, 500);
	}
	
}



/*
 * De volgende code is zonder de hc595 register.
 * Uit de opdracht kon ik niet duidelijk opmaken of deze opgelost moest worden met 8 losse pins 
 * of half om halve zoals ik de leds in de vorige opgave gemaakt had.
 * Daarom heb ik deze opdracht voor beide opgelost.


#include "hwlib.hpp"

class pin_out_all : public hwlib::pin_out {
protected:
   hwlib::pin_out * list[ 4 ];     
   
public:

   pin_out_all( 
      hwlib::pin_out & p0, 
      hwlib::pin_out & p1 = hwlib::pin_out_dummy,  
      hwlib::pin_out & p2 = hwlib::pin_out_dummy, 
      hwlib::pin_out & p3 = hwlib::pin_out_dummy 
   ):
      list{ &p0, &p1, &p2, &p3 }
   {}
   
   void set( bool v ){
      for( auto p : list ){
          p->set( v );
      }
   }
};

class pin_out_invert: public pin_out_all {
private:
    pin_out_all & lijst;
public:
  pin_out_invert(pin_out_all & lijst):
        pin_out_all(lijst),
        lijst(lijst)
  {}
    
   void set( bool v ) override{
      for( auto p : list ){
          p->set( !v );
      }
   }
};

int main( void ) {
	
	auto led0 = hwlib::target::pin_out(hwlib::target::pins::d17);
	auto led1 = hwlib::target::pin_out(hwlib::target::pins::d16);
	auto led2 = hwlib::target::pin_out(hwlib::target::pins::d15);
	auto led3 = hwlib::target::pin_out(hwlib::target::pins::d14);
	auto led4 = hwlib::target::pin_out(hwlib::target::pins::d6);
	auto led5 = hwlib::target::pin_out(hwlib::target::pins::d7);
	auto led6 = hwlib::target::pin_out(hwlib::target::pins::d8);
	auto led7 = hwlib::target::pin_out(hwlib::target::pins::d9);
	
	auto leds1 = pin_out_all(led0, led1, led2, led3);
	auto leds2 = pin_out_all(led4, led5, led6, led7);
	
	auto inverted_leds = pin_out_invert(leds2);
	auto leds_port = hwlib::port_out_from_pins(leds1, inverted_leds);
	 
	while (1){
		hwlib::kitt( leds_port );
	}
}
*/