#include <iostream>
using namespace std;
#include "Sphere.h"
#define PI	3.14

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
		cerr << "*** Invalid input for Sphere object, created with default value of 1 ***\n";
		Radius = 1;
	}
}
void Sphere::setRadius(double newRad){
	if (newRad > 0) {
		Radius = newRad;
	}
	else {
		cerr << "*** Invalid input for Sphere object ***\n";
	}

	double Sphere::getRadius()
	{
		return Radius;
	}

double Sphere::getDiameter()
{
	return Radius*2;
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