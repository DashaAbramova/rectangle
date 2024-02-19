#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "constants.hpp"

class Rectangle {
public:
	Rectangle() {
		x = 2.5;
		y = 7.1;
	} // default

	Rectangle(double newX, double newY);

	double ploshad();

private:
	double x = 5;
	double y = 7;
};

#endif