#ifndef WALL_HPP
#define WALL_HPP

#include "window.hpp"
#include "vector.hpp"
#include "rectangle.hpp"

class wall : public drawable{
private:
	
	bool fill_rectangle;
	int update_interval;
	int toggle_interval;
	
	rectangle rec;
	
public:
	wall(window & w, const vector & location, const vector & end, int update_interval, const vector & bounce);
	void update() override;
	void draw() override;
};

#endif // wall_HPP