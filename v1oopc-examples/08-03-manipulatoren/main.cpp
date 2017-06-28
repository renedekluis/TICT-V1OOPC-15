#include <iostream>
#include <iomanip>


int main(int argc, char **argv){
   int n = 100;
   
   std::cout << "100 (decimal)       : " << n << "\n";    
   std::cout << "100 (hexdecimal)    : " << std::hex << n << "\n";    
   std::cout << "100 (octal)         : " << std::oct << n << "\n";    
   std::cout << "100 (still octal)   : " << n << "\n";    
   std::cout << "100 (setbase(10))   : " << std::setbase( 10 ) << n << "\n";    
   std::cout << "\n";  
    
   bool f = false, t = true;    
   std::cout << "bool, default       : " 
      << f << " " << t << "\n";
   std::cout << "after boolalpha     : " 
      << std::boolalpha 
      << f << " " << t << "\n";
      
   std::cout << "100, (dec,hex,oct)  : " 
      << std::dec << n << " " 
      << std::hex << n << " "
      << std::oct << n << "\n";
   std::cout << "after showbase      : " 
      << std::showbase 
      << std::dec << n << " " 
      << std::hex << n << " "
      << std::oct << n << "\n";
   std::cout << "after uppercase     : " 
      << std::uppercase
      << std::dec << n << " " 
      << std::hex << n << " "
      << std::oct << n << "\n";
   std::cout << "boolalpha+uppercase : " 
      << std::uppercase
      << f << " " << t << "\n";    
   std::cout << "\n";

   std::string s = "hello";
   std::cout << "default               : " 
      << "[" << s << "]\n";
   std::cout << "setw(20)              : " 
      << "[" << std::setw(20) << s << "]\n";
   std::cout << "setw(20)+right        : " 
      << std::left << "[" << std::setw(20) << s << "]\n";
   std::cout << "setw(20)+setfill('-') : " 
      << std::setfill('-') << "[" << std::setw(20) << s << "]\n";
   std::cout << "setw(20)              : " 
      << "[" << std::setw(20) << s << "]\n";
}



