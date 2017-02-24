#include <iostream>
using namespace std;
#include "Sphere.h"
int main() {
	Sphere test;
	Sphere test2 = 2;
	cout << test2<<endl	;
	
	cout << test2.getRadius() << endl;
	cout << test2.getCircumference() << endl;
	cout << test2.getDiameter() << endl;
	cout << test2.getArea() << endl;
	cout << test2.getVolume() << endl;

	getchar();
}