#include<iostream>
using namespace std;
class Distance
{
	int feet,inch;
	public:
	Distance()
	{
	//	cout<<"\nDefault constructor called\n";
		this->feet=0;
		this->inch=0;
	}
	Distance(int f,int i)
	{
	//	cout<<"\nParameterised constructor called\n";
		this->feet=f;
		this->inch=i;
	}
	void setFeet(int f)
	{
		this->feet=f;
	}
	void setInch(int i)
	{
		this->inch=i;
	}
	int getFeet()
	{
		return this->feet;
	}
	int getInch()
	{
		return this->inch;
	}
	void display()
	{
		cout<<"\nDistance:\t"<<this->feet<<" feet "<<this->inch<<" inches\n";
	}
	Distance operator+(Distance d2)
	{
		Distance temp;
		temp.feet=this->feet+d2.feet;
		temp.inch=this->inch+d2.inch;
		return temp;
	}
	Distance operator+(int t)
	{
		Distance temp;
		temp.feet=this->feet+t;
		temp.inch=this->inch+t;
		return temp;
	}
	Distance operator-(Distance d2)
	{
		Distance temp;
		temp.feet=this->feet-d2.feet;
		temp.inch=this->inch-d2.inch;
		return temp;
	}
	Distance operator-(int t)
	{
		Distance temp;
		temp.feet=this->feet-t;
		temp.inch=this->inch-t;
		return temp;
	}
	Distance operator*(Distance d2)
	{
		Distance temp;
		temp.feet=this->feet*d2.feet;
		temp.inch=this->inch*d2.inch;
		return temp;
	}
	Distance operator*(int t)
	{
		Distance temp;
		temp.feet=this->feet*t;
		temp.inch=this->inch*t;
		return temp;
	}
	Distance operator/(Distance d2)
	{
		Distance temp;
		temp.feet=this->feet/d2.feet;
		temp.inch=this->inch/d2.inch;
		return temp;
	}
	Distance operator/(int t)
	{
		Distance temp;
		temp.feet=this->feet/t;
		temp.inch=this->inch/t;
		return temp;
	}
	int operator>(Distance d2)
	{
		if(this->feet>d2.feet)
		return 1;
		else 
		return 0;
	}
	int operator>(int t)
	{
		if(this->feet>t)
		return 1;
		else 
		return 0;
	}
	int operator<(Distance d2)
	{
		if(this->feet<d2.feet)
			return 1;
		else 
			return 0;
	}
	int operator<(int t)
	{
		if(this->feet<t)
			return 1;
		else 
			return 0;
	}
	int operator!=(Distance d2)
	{
		if(this->feet!=d2.feet)
		return 1;
		else 
		return 0;
	}
	int operator!=(int t)
	{
		if(this->feet!=t)
		return 1;
		else 
		return 0;
	}
	int operator==(Distance d2)
	{
		if(this->feet==d2.feet)
		return 1;
		else 
		return 0;
	}
	int operator==(int t)
	{
		if(this->feet==t)
		return 1;
		else 
		return 0;
	}
};
Distance operator+(int,Distance);
Distance operator-(int,Distance);
Distance operator*(int,Distance);
Distance operator/(int,Distance);
int operator>(int,Distance);
int operator<(int,Distance);
int operator!=(int,Distance);
int operator==(int,Distance);
int main()
{
	int feet,inch;
	Distance d1,d3,d4,d5;
	cout<<"\nEnter distance in feet and inches\n";
	cin>>feet>>inch;
	d1.setFeet(feet);
	d1.setInch(inch);
	d1.display();
	Distance d2(5,2);
	d2.display();
	d3=d1+d2;
	cout<<"\nAddition of 2 distance using member function:\n";
	d3.display();
	d4=d1+10;
	cout<<"\nAdd 10 to feet and inches of distance using meber function:\n";
	d4.display();
	d5=5+d1;
	cout<<"\nAdd 5 to feet and inches of distance using non meber function:\n";
	d5.display();
	d3=d1-d2;
	cout<<"\nSubstraction of 2 distance using member function:\n";
	d3.display();
	d4=d1-10;
	cout<<"\nSubtract 10 from feet and inches of distance using meber function:\n";
	d4.display();
	d5=10-d1;
	cout<<"\nSubtract feet and inches of distance from 10 using non meber function:\n";
	d5.display();
	d3=d1*d2;
	cout<<"\nMultiplication of 2 distance using member function:\n";
	d3.display();
	d4=d1*10;
	cout<<"\nMultiply by 10 to feet and inches of distance using meber function:\n";
	d4.display();
	d5=5*d1;
	cout<<"\nMultiply by 5 to feet and inches of distance using non meber function:\n";
	d5.display();
	d3=d1/d2;
	cout<<"\nDivision of 2 distance using member function:\n";
	d3.display();
	d4=d1/10;
	cout<<"\nDivide by 10 to feet and inches of distance using meber function:\n";
	d4.display();
	d5=15/d1;
	cout<<"\nDivide by feet and inches of distance to 15 using non meber function:\n";
	d5.display();
	if(d1>d2)
	{
		cout<<"\n";
		d1.display();
		cout<<" is greater than ";
		d2.display();
		cout<<"\n";
	}
	else
	{
	
		cout<<"\n";
		d1.display();
		cout<<" is less than ";
		d2.display();
		cout<<"\n";
	}
	if(d1>10)
	{
		cout<<"\n";
		d1.display();
		cout<<" is greater than 10\n";
	}
	else
	{
		cout<<"\n";
		d1.display();
		cout<<" is less than 10\n";
	}
	if(10>d1)
	{
		cout<<"\n10 is greater than ";
		d1.display();
		cout<<"\n";
	}
	else
	{
		cout<<"\n10 is less than ";
		d1.display();
		cout<<"\n";
	}
	if(d1<d2)
	{
		cout<<"\n";
		d1.display();
		cout<<" is less than ";
		d2.display();
		cout<<"\n";
	}
	else
	{
		cout<<"\n";
		d1.display();
		cout<<" is greater than ";
		d2.display();
		cout<<"\n";
	}
	if(d1<10)
	{
		cout<<"\n";
		d1.display();
		cout<<" is less than 10\n";
	}
	else
	{
		cout<<"\n";
		d1.display();
		cout<<" is greater than 10\n";
	}
	if(10<d1)
	{
		cout<<"\n10 is less than ";
		d1.display();
		cout<<"\n";
	}
	else
	{
		cout<<"\n10 is greater than ";
		d1.display();
		cout<<"\n";
	}
	if(d1!=d2)
	{
		cout<<"\n";
		d1.display();
		cout<<" is not equal to ";
		d2.display();
		cout<<"\n";
	}
	else
	{
		cout<<"\n";
		d1.display();
		cout<<" is equal to ";
		d2.display();
		cout<<"\n";
	}
	if(d1!=10)
	{
		cout<<"\n";
		d1.display();
		cout<<" is not equal to 10\n";
	}
	else
	{
		cout<<"\n";
		d1.display();
		cout<<" is equal to 10\n";
	}
	if(10!=d1)
	{
		cout<<"\n10 is not equal to ";
		d1.display();
		cout<<"\n";
	}
	else
	{
		cout<<"\n10 is equal to ";
		d1.display();
		cout<<"\n";
	}
	if(d1==d2)
	{
		cout<<"\n";
		d1.display();
		cout<<" is equal to ";
		d2.display();
		cout<<"\n";
	}
	else
	{
		cout<<"\n";
		d1.display();
		cout<<" is not equal to ";
		d2.display();
		cout<<"\n";
	}
	if(d1==10)
	{
		cout<<"\n";
		d1.display();
		cout<<" is equal to 10\n";
	}
	else
	{
		cout<<"\n";
		d1.display();
		cout<<" is not equal to 10\n";
	}
	if(10==d1)
	{
		cout<<"\n10 is equal to ";
		d1.display();
		cout<<"\n";
	}
	else
	{
		cout<<"\n10 is not equal to ";
		d1.display();
		cout<<"\n";
	}
}
Distance operator+(int t,Distance d1)
{
	Distance temp;
	temp.setFeet(t+d1.getFeet());
	temp.setInch(t+d1.getInch());
	return temp;
}
Distance operator-(int t,Distance d1)
{
	Distance temp;
	temp.setFeet(t-d1.getFeet());
	temp.setInch(t-d1.getInch());
	return temp;
}
Distance operator*(int t,Distance d1)
{
	Distance temp;
	temp.setFeet(d1.getFeet()*t);
	temp.setInch(d1.getInch()*t);
	return temp;
}
Distance operator/(int t,Distance d1)
{
	Distance temp;
	temp.setFeet(t/d1.getFeet());
	temp.setInch(t/d1.getInch());
	return temp;
}
int operator>(int t,Distance d1)
{
	if(t>d1.getFeet())
	return 1;
	else 
	return 0;
}
int operator<(int t,Distance d1)
{
	if(t<d1.getFeet())
	return 1;
	else 
	return 0;
}
int operator!=(int t,Distance d1)
{
	if(t!=d1.getFeet())
	return 1;
	else 
	return 0;
}
int operator==(int t,Distance d1)
{
	if(t==d1.getFeet())
	return 1;
	else 
	return 0;
}
