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
	

	cout << "Press any key to exit";
	getchar();
	return 0;
}