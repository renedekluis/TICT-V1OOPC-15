// example:
// clearing an array in C++ style
// waht is wrong?

#include <stdio.h>

const int array_size = 1000;

int main(){

   int array[ array_size ] = { 42, 43, 44 };
   
   for( int & x : array ){
      x = 0;
   }

   printf( "array[ 0 ] = %d", array[ 0 ] );
   return 0;
}   

