#include<iostream>

const double PI{3.14159265358};

class Circle {
public:
	Circle(){
		a = 5;
		b = 7;
	}
	Circle(double newA, double newB) {
		A = newA;
		B = newB;
	}


	double ploshad() {
	return a * b;
	}

private:
	double a = 5;
	double b = 7;
};

int main() {
	Rectangle rectangle1;
	std::cout << rectangle1.ploshad();
}