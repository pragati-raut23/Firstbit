using namespace std;
#include<iostream>
class Shape	//Base class
{
	double area;
	public:
	Shape();
	Shape(double );
	void setArea(double );
	double getArea();
	virtual void drawn();
	virtual void calArea();
};
