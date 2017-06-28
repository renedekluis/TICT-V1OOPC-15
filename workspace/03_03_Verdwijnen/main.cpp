#include "window.hpp"
#include "line.hpp"
#include "ball.hpp"
#include "wall.hpp"
#include "victim.hpp"

//Window variables
#define window_width 128
#define window_height 64
#define window_start_x 0
#define window_start_y 0
#define window_scale 2
#define refresh_time 100

//Rectangle variables
#define filled true
#define not_filled false

//Wall variables
#define interval_time 2
#define wall_thickness 4
#define end_wall_pos_x (window_width - wall_thickness)
#define end_wall_pos_y (window_height - wall_thickness)

//Ball variables
#define ball_start_pos_x 50
#define ball_start_pos_y 20
#define ball_radius 9
#define ball_speed_x 5
#define ball_speed_y 2

//Victim variables
#define vic_start_x 60
#define vic_start_y 20
#define vic_end_x 70
#define vic_end_y 30


int main(){
   window w		( vector( window_width, window_height ), window_scale);
   ball b		( w, vector( ball_start_pos_x, ball_start_pos_y ), ball_radius, vector( ball_speed_x, ball_speed_y ) );
   victim v		( w, vector(vic_start_x,vic_start_y), vector(vic_end_x, vic_end_y));
   wall top		( w, vector( window_start_x, window_start_y ), vector( window_width,  	wall_thickness ),	interval_time, vector(  1, -1)	);
   wall right	( w, vector( end_wall_pos_x, wall_thickness ), vector( window_width, 	end_wall_pos_y ),	interval_time, vector( -1,  1)	);
   wall bottom	( w, vector( window_start_x, end_wall_pos_y ), vector( window_width, 	window_height ), 	interval_time, vector(  1, -1)	);
   wall left	( w, vector( window_start_x, wall_thickness ), vector( wall_thickness,	end_wall_pos_y ),	interval_time, vector( -1,  1)	);
   
   
   
   drawable * objects[] = { &b, &top, &left, &right, &bottom, &v};

   for(;;){
      w.clear();
      for( auto & p : objects ){
         p->draw();
      }
	  wait_ms(refresh_time);
      for( auto & p : objects ){
          p->update();
      }
	  
      for( auto & p : objects ){
         for( auto & other : objects ){
            p->interact( *other );
         } 
      }
   }
}

