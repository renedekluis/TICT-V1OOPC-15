#ifndef VICTIM_HPP
#define VICTIM_HPP

#include "wall.hpp"
#include <iostream>



class victim : public rectangle{
private:
		bool hit;
		bool alive;
		vector start;
		vector end;
		
	public:
		victim(window & w, const vector & start, const vector & end);
		void draw() override;
		void update() override;
		void interact(drawable & other) override;
};

#endif //VICTIM_HPP