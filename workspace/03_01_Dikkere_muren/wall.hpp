#ifndef WALL_HPP
#define WALL_HPP

#include "window.hpp"
#include "vector.hpp"
#include "rectangle.hpp"

class wall : public rectangle{
private:
	bool fill_rectangle;
	int update_interval;
	int toggle_interval;
public:
	wall( window & w, const vector & start, const vector & end, bool fill_rectangle = true, int update_interval = 5);
	void update() override;
	void draw() override;
};

#endif // wall_HPP