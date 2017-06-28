#include "wall.hpp"


wall::wall( window & w, const vector & start, const vector & end, bool fill_rectangle, int update_interval):
		rectangle (w, start, end ),
		fill_rectangle(fill_rectangle),
		update_interval(update_interval),
		toggle_interval(0)
{}

void wall::update(){
	toggle_interval += 1;
	if (toggle_interval == update_interval){
		if(fill_rectangle){
			fill_rectangle = false;
		}
		else{
			fill_rectangle = true;
		}
		toggle_interval = 0;
	}
}

void wall::draw(){
	if (fill_rectangle){ 
		draw_filled();
	}
	else{
		rectangle::draw();
	}
}
