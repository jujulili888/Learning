#include <iostream>
#include <vector>
#include <windows.h>
using namespace std;

class Circle {
private:
	float radius;
public:
	Circle(float r = 0) {
		radius = r;
	}

	float Retr() {
		return radius;
	}

	float Perimeter() {
		return 2 * 3.14 * radius;
	}

	float Area() {
		return 3.14 * radius * radius;
	}
	
	void Info() {
		cout << "radius: " << radius << endl;
		cout << "Perimeter: " << Perimeter() << endl;
		cout << "Area: " << Area() << endl;
	}
};

int main() {
	Circle c1(2);
	c1.Info();


	return 0;
}