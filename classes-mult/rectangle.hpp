#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
public:
	Rectangle() = default;
	Rectangle(int newA, int newB);
	int ploshad();

private:
	int a = 5;
	int b = 7;
};

#endif