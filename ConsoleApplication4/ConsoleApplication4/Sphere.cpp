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
		cerr << "*** Invalid input for Sphere object ***\n";
	}
}
void Sphere::display(ostream & out) const
{
	out << Radius;
}
void Sphere::write(istream & in)
{
	double rad;
	in >> rad;

	if (rad > 0) {
		Radius = rad;
	}
	else {
		cerr << "*** Invalid input for Sphere object ***\n";
	}
	
}


ostream & operator<<(ostream & out, const Sphere & s) {
	s.display(out);
	return out;
}
istream & operator >> (istream & in, Sphere & s) {
	s.write(in);
	return in;
}