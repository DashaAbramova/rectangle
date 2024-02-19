#include<iostream>

const double PI(3.14159265358);

class Rectangle {
public:
	Rectangle() {
		x = 2.5;
		y = 7.1;
	} // default

	Rectangle(double newX, double newY) {
		x = newX;
		y = newY;
	}

	double ploshad() {
		return x * y;
	}
	
private:
	double x = 5;
	double y = 7 ;
};

int main() {
	Rectangle rectangle1;
	std::cout << "Rectangle 1" << rectangle1.ploshad() << std::endl;

	Rectangle rectangle2(5.3, 9.0);
	std::cout << "Rectangle 2" << rectangle2.ploshad() << std::endl;
}
