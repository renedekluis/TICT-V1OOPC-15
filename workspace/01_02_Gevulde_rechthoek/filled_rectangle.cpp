// example:
// definition of the functions of a line class 
// you are not expected to understand how line::print works

#include "filled_rectangle.hpp"

// avoid these because <algorithm> imports iostream stuff
template <class T> void swap( T& a, T& b ){
  T c(a); a=b; b=c;
}

void filled_rectangle::print(){
    
   
   int x0 = start_x;
   int y0 = start_y;
   int x1 = end_x;
   int y1 = end_y;
   
   
   for(int i = x0; i < x1; i++)
   {
       for(int j = y0; j < y1; j++)
       {
           w.draw(i, j);
       }
   }
   
   
   
  
}
