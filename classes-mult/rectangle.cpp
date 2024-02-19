#include"rectangle.hpp"

Rectangle::Rectangle(double newX, double newY) {
	x = newX;
	y = newY;
}
double Rectangle::ploshad() {
	return x * y;
}