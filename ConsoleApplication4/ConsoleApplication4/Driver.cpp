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
	getchar();
}