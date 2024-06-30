#include "shape.h"
class Circle:public Shape		//derived class
{
	double radius;
	public:
	Circle();
	Circle(double );
	void setRadius(double);
	double getRadius();
	void drawn();
	void calArea();
};
