#include <iostream>
using namespace std;

class Sphere
{
public:
	/* Default Constructor Radius = 1.0 */
	Sphere();
	/* Explicit value constructor */
	Sphere(double initRadius);

	/* Accessors */
	double Sphere::getRadius() const;
	double Sphere::getDiameter() const;
	double Sphere::getCircumference() const;
	double Sphere::getArea() const;
	double Sphere::getVolume() const;

	/* Mutators */
	void Sphere::setRadius(double newRad);
	void Sphere::setDiameter(double newDiameter);
	void Sphere::setCircumference(double newCirc);
	void Sphere::setArea(double newArea);
	void Sphere::setVolume(double newVolume);

	/* I/O */
	void Sphere::display(ostream & out) const;
	void Sphere::write(istream & in);

private:
	double Radius;
};
/* >> and << */
ostream & operator<<(ostream & out, const Sphere & s); 
istream & operator >> (istream & in, Sphere & s);