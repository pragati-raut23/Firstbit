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
};
int main()
{
	Distance d1;
	int feet,inch;
	d1.display();	//member function
	cout<<"\nenter distance in feet:\n";
	cin>>feet;
	cout<<"\nenter distance in inch:\n";
	cin>>inch;
	d1.setFeet(feet);	//member function
	d1.setInch(inch);	//member function
	cout<<"\nafter setting values\n";
	d1.display();	//member function
	cout<<"\ngetter\nfeet: "<<d1.getFeet()<<"\ninch: "<<d1.getInch()<<"\n";
	Distance d3;
	d3.display();
	d3.setFeet(6);	//member function
	d3.setInch(2);	//member function
	cout<<"\nafter setting values\n";
	d3.display();	//member function
	cout<<"\ngetter\nfeet: "<<d3.getFeet()<<"\ninch: "<<d3.getInch()<<"\n";
	Distance d2(5,2);	//member function
	d2.display();	//member function
	cout<<"\ngetter\nfeet: "<<d2.getFeet()<<"\ninch: "<<d2.getInch()<<"\n";
	return 0;
}
