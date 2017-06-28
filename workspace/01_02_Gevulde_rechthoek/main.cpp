// example: 
// using a line that requires its window

#include <iostream>

#include "window.hpp"
#include "filled_rectangle.hpp"

int main(int argc, char **argv){
   window w( 128, 64, 2 );
   filled_rectangle block( w, 5, 5, 50, 40 );
   filled_rectangle block2(w, 60, 5, 105, 40);
   block.print();
   block2.print();
   return 0;
}


