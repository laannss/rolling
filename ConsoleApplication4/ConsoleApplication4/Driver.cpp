#include <iostream>
using namespace std;
#include "Sphere.h"
int main() {

	Sphere s1 = 1;
	Sphere s2 = 2;
	Sphere s3 = 2;

	cout << (s1 > s2) << endl;
	cout << (s1 < s2) << endl;
	cout << (s1 == s2) << endl;
	cout << (s1 >= s2) << endl;
	cout << (s1 >= s2) << endl;
	cout << (s3 == s2) << endl;
	cout << (s3 >= s2) << endl;
	
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

	cout << "Press any key to exit";
	getchar();
	return 0;
}