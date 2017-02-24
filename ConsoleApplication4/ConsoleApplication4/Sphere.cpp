#include <iostream>
using namespace std;
#include "Sphere.h"
#define PI 3.14

/* Default and explicit initiliziation*/
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
/*Accesors*/
double Sphere::getRadius() const {
	return Radius;
}

double Sphere::getDiameter() const{
	return (Radius * 2);
}

double Sphere::getCircumference() const{
	return (2 * PI * Radius);
}
double Sphere::getArea() const{
	return (4 * PI * Radius * Radius);
}
double Sphere::getVolume() const{
	return (PI * Radius * Radius * Radius * 4.0 / 3.0);
}
/* Mutators */
void Sphere::setRadius(double newRadius) {
	if (newRadius > 0) {
		Radius = newRadius;
	}
	else {
		cerr << "*** Invalid input for Sphere object ***\n";
	}
}
void Sphere::setDiameter(double newDiameter) {
	if (newDiameter > 0){
		Radius = newDiameter / 2.0;
	}
	else {
		cerr << "*** Invalid input for Sphere object ***\n";
	}

}
void Sphere::setCircumference(double newCircumference) {
	if (newCircumference > 0) {
		Radius = newCircumference / (2.0*PI);
	}
	else {
		cerr << "*** Invalid input for Sphere object ***\n";
	}


}
void Sphere::setArea(double newArea) {
	if (newArea > 0) {
		Radius = sqrt(newArea / (4.0*PI));
	}
	else {
		cerr << "*** Invalid input for Sphere object ***\n";
	}
}
void Sphere::setVolume(double newVolume) {
	if (newVolume > 0) {
		Radius = cbrt(newVolume*3.0 / (4.0*PI));
	}
	else {
		cerr << "*** Invalid input for Sphere object ***\n";
	}
}
/* I/O */
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

/* >> and << */

ostream & operator<<(ostream & out, const Sphere & s) {
	s.display(out);
	return out;
}

istream & operator >> (istream & in, Sphere & s) {
	s.write(in);
	return in;
}

/* Bool Operators */
bool operator<(const Sphere & s1, const Sphere & s2) {
	return s1.getRadius() < s2.getRadius();
}
bool operator>(const Sphere & s1, const Sphere & s2) {
	return s1.getRadius() > s2.getRadius();
}
bool operator==(const Sphere & s1, const Sphere & s2) {
	return s1.getRadius() == s2.getRadius();
}
bool operator<=(const Sphere & s1, const Sphere & s2) {
	return s1.getRadius() <= s2.getRadius();
}
bool operator>=(const Sphere & s1, const Sphere & s2) {
	return s1.getRadius() >= s2.getRadius();
}
bool operator!=(const Sphere & s1, const Sphere & s2) {
	return s1.getRadius() != s2.getRadius();
}