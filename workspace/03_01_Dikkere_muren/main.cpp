#include "window.hpp"
#include "line.hpp"
#include "ball.hpp"
#include "wall.hpp"

#define filled true
#define not_filled false

int main(){
   window w( vector( 128, 64 ), 2 );
   wall top		( w, vector(   0,  0 ), vector( 127,  4 ), filled, 2);
   wall right	( w, vector( 123,  0 ), vector( 127, 63 ), filled, 2);
   wall bottom	( w, vector(   0, 59 ), vector( 127, 63 ), filled, 2);
   wall left	( w, vector(   0,  0 ), vector(   4, 63 ), filled, 2);
   ball b( w, vector( 50, 20 ), 9, vector( 5, 2 ) );
   drawable * objects[] = { &b, &top, &left, &right, &bottom};

   for(;;){
      w.clear();
      for( auto & p : objects ){
         p->draw();
      }
      for( auto & p : objects ){
          p->update();
      }
	  wait_ms(100);
      for( auto & p : objects ){
         for( auto & other : objects ){
            p->interact( *other );
         } 
      }
   }
}

