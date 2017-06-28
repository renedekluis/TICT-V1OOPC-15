#include <iostream>
#include <string>

int main(int argc, char **argv){
   std::string s = "hallo";
   if(( s == "hallo" ) && ( "hallo" == s )){
      std::cout << "yes\n";
   }
   s[ 1 ] = 'e';
   std::string w = s + " world";
   std::cout << w + '\n';

   // not checked
   s[ 11 ] = 'x';

   // checked => debug assertion failure
   s.at( 11 ) = 'x';

   
  std::cout << s << '\n';
   
}



