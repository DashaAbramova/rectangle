#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
public:
	Rectangle() = default;
	Rectangle(double newA, double newB);
	double ploshad();

private:
	double a = 5;
	double b = 7;
};

#endif