using namespace std;
#include<iostream>
struct Shape	//Base class
{
	double area;
	Shape()		//Default constructor
	{
		cout<<"\nShape default constructor called\n";
		this->area=0;
	}
	Shape(double a)		//Parameterised constructor
	{
		cout<<"\nShape parameterised constructor called\n";
		this->area=a;
	}
	void setArea(double a)	//seeter(mutator)
	{
		this->area=a;
	}
	double getArea()	//getter(accessor)
	{
		return this->area;
	}
	virtual void drawn()	
	{
		cout<<"\nArea of shape is: "<<this->area<<"\n";
	}
	virtual void calArea()
	{
		cout<<"\nArea is: "<<area<<"\n";
	}
};//Shape class ends here
struct Circle:public Shape		//derived class
{
	double radius;
	Circle()	//default constructor of circle where default constructor of shape class called implicitly
	{
		cout<<"\nCircle default constructor called\n";
		this->area=0;
	}
	Circle(double r)	//parameterised constructor of circle where default constructor of shape class called implicitly
	{
		cout<<"\nCircle Parameterised constructor called\n";
		this->radius=r;
	}
	void setRadius(double r)	//extra setter(mutator) required for circle
	{
		this->radius=r;
	}
	double getRadius()		//extra getter(accessor) required for circle
	{
		return this->radius;
	}
	void drawn()
	{
		cout<<"\nRadius of circle is: "<<this->radius<<"\n";
		Shape::drawn();		//call to drawn function of shape class
	}
	void calArea()		//different implementation (function to calculate area of circle)
	{
		cout<<"\nArea of Circle is: "<<3.14*radius*radius<<"\n";
	}
};
struct Rectangle:public Shape	//derived class
{
	double length,breadth;
	Rectangle()		//default constructor of Rectangle class where default constructor of Shape class called implicitly
	{
		cout<<"\nRectangle default constructor called\n";
		this->length=0;
		this->breadth=0;
	}
	Rectangle(double l,double b)	//parameterised constructor of Rectangle class where default constructor of Shape class called implicitly
	{
		cout<<"\nRectangle parameterized constructor called\n";
		this->length=l;
		this->breadth=b;
	}
	void setLength(double l)	//extra setter required for rectangle class
	{
		this->length;
	}
	void setBreadth(double b)	//extra setter required for rectangle class
	{
		this->breadth;
	}
	double getLength()		//extra getter required for rectangle class
	{
		return this->length;
	}
	double getBreadth()		//extra getter required for rectangle class
	{
		return this->breadth;
	}
	void drawn()
	{
		cout<<"\nLength of Rectangle is: "<<this->length<<"\nLength of Rectangle is: "<<this->breadth<<"\n";
		Shape::drawn();		//call given to drawn function of Shape class
	}
	void calArea()		//different implementation (function to calculate area of rectangle)
	{
		cout<<"\nArea of Rectangle is: "<<length*breadth<<"\n";
	}
};
struct Triangle:public Shape	//derived class
{
	double height,base;
	Triangle()		//default constructor of Triangle class where default constructor of Shape class called implicitly
	{
		cout<<"\nTriangle default constructor called\n";
		this->base=0;
		this->height=0;
	}
	Triangle(double b,double h)		//parameterised constructor of Triangle class where default constructor of Shape class called implicitly
	{
		cout<<"\nTriangle parameterised constructor called\n";
		this->base=b;
		this->height=h;
	}
	void setBase(double b)		//extra setter required for Triangle class
	{
		this->base=b;
	}
	void setHeight(double h)	//extra setter required for Triangle class
	{
		this->height=h;
	}
	double getBase()	//extra getter required for Triangle class
	{
		return this->base;
	}
	double getHeight()		//extra getter required for Triangle class
	{
		return this->height;
	}
	void drawn()
	{
		cout<<"\nBase of Triangle is: "<<this->base<<"\nHeight of Triangle is: "<<this->height<<"\n";
		Shape::drawn();		//call given to drawn function of Shape class
	}
	void calArea()		//different implementation (function to calculate arean of triangle)
	{
		cout<<"\nArea of Triangle is: "<<0.5*base*height<<"\n";
	}
};
int main()
{
	double radius,length,breadth,base,height;
	Shape s1;
	Shape s2(36);
	Shape *s;
	Circle c1;
	cout<<"\nEnter radius of circle: ";
	cin>>radius;
	c1.setRadius(radius);
	s=&c1;
	s->drawn();
	s->calArea();
	Circle c2(5);
	s=&c2;
	s->drawn();
	s->calArea();
	Triangle t1;
	cout<<"\nEnter base and height of triangle: ";
	cin>>base>>height;
	t1.setBase(base);
	t1.setHeight(height);
	s=&t1;
	s->drawn();
	s->calArea();
	Triangle t2(3,5);
	s->drawn();
	s->calArea();
	Rectangle r1;
	cout<<"\nEnter length and breadth of rectangle: ";
	cin>>length>>breadth;
	r1.setLength(length);
	r1.setBreadth(breadth);
	s=&r1;
	s->drawn();
	s->calArea();
	Rectangle r2(5,3);
	s=&r2;
	s->drawn();
	s->calArea();
	return 0;
}
