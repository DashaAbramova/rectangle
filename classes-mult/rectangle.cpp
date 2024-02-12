#include"rectangle.hpp"

Rectangle::Rectangle(double newA, double newB) {
	A= newA;
	B = newB;
}

double Rectangle::ploshad() {
	return a * b;
}