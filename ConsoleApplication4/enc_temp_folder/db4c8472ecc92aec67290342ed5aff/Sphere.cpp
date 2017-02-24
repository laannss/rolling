#include <iostream>
using namespace std;
#include "Sphere.h"
# define PI	3.14

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

//
double Sphere::getRadius()
{
	return Radius;
}

double Sphere::getDiameter()
{
	return Radius*2;
}
double Sphere::getCircumference()
{
	return 2*PI*Radius;
}
double Sphere::getArea()
{
	return PI*Radius*Radius;
}
double Sphere::getVolume()
{
	return PI*Radius*Radius*Radius* 4 / 3;
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

