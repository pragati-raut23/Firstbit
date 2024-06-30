using namespace std;
#include<iostream>
struct Distance
{
	int feet,inch;
	Distance()
	{
		cout<<"\n\ndefault constructor called\n";
		this->feet=-1;
		this->inch=-1;
	}
	Distance(int f,int i)
	{
		cout<<"\n\nparameterised constructor called\n";
		this->feet=f;
		this->inch=i;
	}
	void setFeet(int f)	//setter(mutator)
	{
		this->feet=f;
	}
	void setInch(int i)		//setter(mutator)
	{
		this->inch=i;
	}
	int getFeet()	//getter(accessor)
	{
		return this->feet;
	}
	int getInch()	//getter(accessor)
	{
		return this->inch;
	}
	void display()
	{
		cout<<"\ndistance is: "<<this->feet<<"feet and "<<this->inch<<"inches\n";
	}
	Distance operator++(int p)
	{
		Distance temp;
		temp.feet=this->feet++;
		temp.inch=this->inch++;
		return temp;
	}
	Distance operator++()
	{
		Distance temp;
		temp.feet=++this->feet;
		temp.inch=++this->inch;
		return temp;
	}
	Distance operator--(int p)
	{
		Distance temp;
		temp.feet=this->feet--;
		temp.inch=this->inch--;
		return temp;
	}
	Distance operator--()
	{
		Distance temp;
		temp.feet=--this->feet;
		temp.inch=--this->inch;
		return temp;
	}
};
int main()
{
	Distance d1,d2,d3;
	int feet,inch;
	d1.display();	
	cout<<"\nenter distance in feet:\n";
	cin>>feet;
	cout<<"\nenter distance in inch:\n";
	cin>>inch;
	d1.setFeet(feet);	
	d1.setInch(inch);
	cout<<"\nDistance is:";
	d1.display();
	d2=d1++;
	cout<<"\nDistance after post incrementation:";
	d2.display();
	cout<<"\nDistance is:";
	d1.display();
	cout<<"\nDistance after pre incrementation:";
	d2=++d1;
	d2.display();
	cout<<"\nDistance is:";
	d1.display();
	cout<<"\nDistance after post decrementation:";
	d3=d1--;
	d3.display();
	cout<<"\nDistance is:";
	d1.display();
	d3=--d1;
	cout<<"\nDistance after pre increamentation:";
	d3.display();
	return 0;
}
