#include<iostream>
#include"rectangle.hpp";
#include"constants.hpp"

int main() {
	Rectangle rectangle1;
	std::cout << "Rectangle 1" << rectangle1.ploshad() << std::endl;

	Rectangle rectangle2(5.3, 9.0);
	std::cout << "Rectangle 2" << rectangle2.ploshad() << std::endl;
}
