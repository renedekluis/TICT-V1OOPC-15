
#include "hwlib.hpp"
#include "matrixKeypad.hh"

int main(){
	//Kill the watchdog
	WDT->WDT_MR = WDT_MR_WDDIS;
	
	//Keypad variables
	const int maxLen = 10;
	char password[maxLen];
	
//	auto keypad0 = pinmode(6, INPUTE);
//	auto keypad1 = pinmode(15, INPUTE);
//	auto keypad2 = pinmode(16, INPUTE);
//	auto keypad3 = pinmode(4, INPUTE);
//	
//	
//	auto keypad4 = pinmode(5, INPUTE);
//	auto keypad5 = pinmode(10, INPUTE);
//	auto keypad6 = pinmode(1, INPUTE);
	
	
	//Keypad rows
	auto keypad0 = hwlib::target::pin_in_out(hwlib::target::pins::d32);
	auto keypad1 = hwlib::target::pin_in_out(hwlib::target::pins::d22);
	auto keypad2 = hwlib::target::pin_in_out(hwlib::target::pins::d24);
	auto keypad3 = hwlib::target::pin_in_out(hwlib::target::pins::d28);
	
	//Keypad columns
	auto keypad4 = hwlib::target::pin_in_out(hwlib::target::pins::d30);
	auto keypad5 = hwlib::target::pin_in_out(hwlib::target::pins::d34);
	auto keypad6 = hwlib::target::pin_in_out(hwlib::target::pins::d26);
	
	//Remaining pins
	auto ledGreen = hwlib::target::pin_out(hwlib::target::pins::d3);
	auto ledRed = hwlib::target::pin_out(hwlib::target::pins::d4);
	auto buzzerPin = hwlib::target::pin_out(hwlib::target::pins::d6);
	
	//Keypad objects
	matrixKeypad keypad(keypad0, keypad1, keypad2, keypad3, keypad4, keypad5, keypad6, 3);
	
	hwlib::wait_ms(10);
	
	while(1){
		int len = keypad.getString( password ,maxLen);
		hwlib::cout 
		<< "Number of keys pressed: " << len << "\n";
		for(int i =  0; i < len ; i++){
			hwlib::cout
				<< password[i];
		}
		hwlib::cout << "\n======================\n\n";
		
		hwlib::wait_ms(100);
	}
	//return 0;
}
   
   
