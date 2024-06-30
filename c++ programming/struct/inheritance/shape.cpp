using namespace std;
#include<iostream>
struct Shape
{
	double area;
	Shape()
	{
		cout<<"\nShape default constructor called\n";
		this->area=0;
	}
	Shape(double a)
	{
		cout<<"\nShape parameterised constructor called\n";
		this->area=a;
	}
	void setArea(double a)
	{
		this->area=a;
	}
	double getArea()
	{
		return this->area;
	}
	void drawn()
	{
		cout<<"\nArea of shape is: "<<this->area<<"\n";
	}
};
struct Circle:public Shape
{
	double radius;
	Circle():Shape()
	{
		cout<<"\nCircle default constructor called\n";
		this->area=0;
	}
	Circle(double r,double a):Shape(a)
	{
		cout<<"\nCircle Parameterised constructor called\n";
		this->radius=r;
	}
	void setRadius(double r)
	{
		this->radius=r;
	}
	double getRadius()
	{
		return this->radius;
	}
	void drawn()
	{
		cout<<"\nRadius of circle is: "<<this->radius<<"\n";
		Shape::drawn();
	}
};
struct Rectangle:public Shape
{
	double length,breadth;
	Rectangle():Shape()
	{
		cout<<"\nRectangle default constructor called\n";
		this->length=0;
		this->breadth=0;
	}
	Rectangle(double l,double b,double a):Shape(a)
	{
		cout<<"\nRectangle parameterized constructor called\n";
		this->length=l;
		this->breadth=b;
	}
	void setLength(double l)
	{
		this->length;
	}
	void setBreadth(double b)
	{
		this->breadth;
	}
	double getLength()
	{
		return this->length;
	}
	double getBreadth()
	{
		return this->breadth;
	}
	void drawn()
	{
		cout<<"\nLength of Rectangle is: "<<this->length<<"\nLength of Rectangle is: "<<this->breadth<<"\n";
		Shape::drawn();
	}
};
struct Triangle:public Shape
{
	double height,base;
	Triangle():Shape()
	{
		cout<<"\nTriangle default constructor called\n";
		this->base=0;
		this->height=0;
	}
	Triangle(double b,double h,double a):Shape(a)
	{
		cout<<"\nTriangle parameterised constructor called\n";
		this->base=b;
		this->height=h;
	}
	void setBase(double b)
	{
		this->base=b;
	}
	void setHeight(double h)
	{
		this->height=h;
	}
	double getBase()
	{
		return this->base;
	}
	double getHeight()
	{
		return this->height;
	}
	void drawn()
	{
		cout<<"\nBase of Triangle is: "<<this->base<<"\nHeight of Triangle is: "<<this->height<<"\n";
		Shape::drawn();
	}
};
int main()
{
	double radius,length,breadth,base,height;
	Circle c1;
	cout<<"\nEnter radius of circle: ";
	cin>>radius;
	c1.setRadius(radius);
	c1.setArea(2*3.14*radius);
	Circle c2(5,2*3.14*5);
	c2.drawn();
	Triangle t1;
	cout<<"\nEnter base and height of triangle: ";
	cin>>base>>height;
	t1.setBase(base);
	t1.setHeight(height);
	t1.setArea(0.5*base*height);
	Triangle t2(3,5,0.5*3*5);
	t2.drawn();
	Rectangle r1;
	cout<<"\nEnter length and breadth of rectangle: ";
	cin>>length>>breadth;
	r1.setLength(length);
	r1.setBreadth(breadth);
	r1.setArea(length*breadth);
	Rectangle r2(5,3,5*3);
	r2.drawn();
	return 0;
}
