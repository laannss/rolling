#include <iostream>
using namespace std;
#include "Sphere.h"
int main() {
	Sphere test;
	Sphere test2 = -2;
	Sphere test3 = 2.1;
	cout << test << endl;
	test.setRadius(420);
	cout << test << endl;
	cout << test2 << endl;
	cout << test3 << endl;
	cout << test2 <<endl;
	
	cout << test2.getRadius() << endl;
	cout << test2.getCircumference() << endl;
	cout << test2.getDiameter() << endl;
	cout << test2.getArea() << endl;
	cout << test2.getVolume() << endl;

	getchar();
}