// example:
// C++ sum the elements of an array

#include <stdio.h>

int main(){
    
   #define ARRAY_SIZE 100
   int array[ ARRAY_SIZE ];

   for( int i = 1; i <= ARRAY_SIZE; ++i ){
      array[ i ] = 0;
   }

   return 0;
}   

