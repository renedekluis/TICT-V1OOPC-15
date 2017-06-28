#include "victim.hpp"


victim::victim(window & w, const vector & start, const vector & end):
	rectangle(w, start, end),
	hit(false),
	alive(true),
	start(start),
	end(end)
{}

void victim::draw(){
	if(alive){
		rectangle rec(w, start, end);
		rec.draw();
	}
}


void victim::update(){
	if(hit){
		if( ( (end.x-start.x) + start.x ) > start.x){
			end		-= vector(2,0);
			start 	+= vector(1,0);
		}
		if( ( (end.y-start.y) + start.y ) > start.y){
			end		-= vector(0, 2); 
			start 	+= vector(0, 1);
		}
		if(( (end.x-start.x) + start.x ) <= start.x || ( (end.y-start.y) + start.y ) <= start.y ){
			alive = false;
		}
	}
}

void victim::interact(drawable & other){
	if(this != & other){
		if(overlaps(other)){
			std::cout << "2nd\n";
			hit = true;
		}
	}
}

