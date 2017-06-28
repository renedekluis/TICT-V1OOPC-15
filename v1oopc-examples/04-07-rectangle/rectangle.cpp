// example:
// definition of the functions of a rectangle object

#include "rectangle.hpp"

rectangle::rectangle( int start_x, int start_y, int end_x, int end_y ):
   left(   start_x, start_y, start_x,   end_y + 1 ),
   right(  end_x,   start_y, end_x,     end_y + 1 ),
   top(    start_x, start_y, end_x + 1, start_y ),
   bottom( start_x, end_y,   end_x + 1, end_y )
{}

void rectangle::print(){
   left.print();
   right.print();
   top.print();
   bottom.print();
}

