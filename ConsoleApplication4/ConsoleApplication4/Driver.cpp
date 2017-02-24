#include <iostream>
using namespace std;
#include "Sphere.h"
int main() {

	Sphere unitSphere;
	Sphere mySphere(-65.1);
	cout << unitSphere << endl;

	mySphere.setRadius(-64.5);
	cout << mySphere.getRadius() << endl;

	mySphere.setDiameter(-65.5);
	cout << mySphere.getDiameter() << endl;

	mySphere.setCircumference(-66.5);
	cout << mySphere.getCircumference() << endl;

	mySphere.setArea(-76.5);
	cout << mySphere.getArea() << endl;

	mySphere.setVolume(-621);
	cout << mySphere.getVolume() << endl;

	getchar();
}