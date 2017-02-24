#include <iostream>
using namespace std;
#include "Sphere.h"

Sphere::Sphere()
	: Radius(1)
{
}


Sphere::Sphere(double initRadius)
{
	if (initRadius > 0) {
		Radius = initRadius;
	}
	else {
		cout << "Invalid" << endl;
	}
}
void Sphere::display(ostream & out) const
{
	out << Radius;
}
void Sphere::read(istream & in)
{
	double rad;
	in >> rad;

	if (rad > 0) {
		Radius = rad;
	}
	else {
		cout << "Invalid" << endl;
	}
	
}


ostream & operator<<(ostream & out, const Sphere & s) {
	s.display(out);
	return out;
}
//ostream & operator >> (ostream & out, const Sphere & s) 