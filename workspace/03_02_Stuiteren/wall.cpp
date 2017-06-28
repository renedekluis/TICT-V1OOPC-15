#include "wall.hpp"


wall::wall(window & w, const vector & location, const vector & end, int update_interval, const vector & bounce):
    drawable(w, location, end, bounce),
    fill_rectangle(0),
    update_interval(update_interval),
    toggle_interval(0),
    rec(w, location, end)
{}

void wall::update(){
	toggle_interval += 1;
	if (toggle_interval == update_interval){
		fill_rectangle = !fill_rectangle;
		toggle_interval = 0;
	}
}

void wall::draw(){
	if (fill_rectangle){ 
		rec.draw_filled();
	}
	else{
		rec.draw();
	}
}
