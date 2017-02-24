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
	double getRadius();
	double getDiameter();
	double getCircumference();
	double getArea();
	double getVolume();

	/* Mutators */
	void setRadius();

	/* I/O */
	void display(ostream & out) const;

private:
	double Radius;
};
