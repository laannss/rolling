#include <iostream>
using namespace std;
#include "Sphere.h"
int main() {

	Sphere unitSphere;
	Sphere mySphere(5.1);
	cout << unitSphere << endl;
	mySphere.setRadius(4.5);
	cout << mySphere.getDiameter() << endl;
	


	getchar();
}