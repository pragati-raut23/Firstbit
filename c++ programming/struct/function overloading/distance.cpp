#include<iostream>
using namespace std;
struct Distance
{
	int feet,inch;
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
	Distance add(Distance d2)
	{
		Distance temp;
		temp.feet=this->feet+d2.feet;
		temp.inch=this->inch+d2.inch;
		return temp;
	}
	Distance add(int t)
	{
		Distance temp;
		temp.feet=this->feet+t;
		temp.inch=this->inch+t;
		return temp;
	}
	Distance sub(Distance d2)
	{
		Distance temp;
		temp.feet=this->feet-d2.feet;
		temp.inch=this->inch-d2.inch;
		return temp;
	}
	Distance sub(int t)
	{
		Distance temp;
		temp.feet=this->feet-t;
		temp.inch=this->inch-t;
		return temp;
	}
	Distance mult(Distance d2)
	{
		Distance temp;
		temp.feet=this->feet*d2.feet;
		temp.inch=this->inch*d2.inch;
		return temp;
	}
	Distance mult(int t)
	{
		Distance temp;
		temp.feet=this->feet*t;
		temp.inch=this->inch*t;
		return temp;
	}
	Distance div(Distance d2)
	{
		Distance temp;
		temp.feet=this->feet/d2.feet;
		temp.inch=this->inch/d2.inch;
		return temp;
	}
	Distance div(int t)
	{
		Distance temp;
		temp.feet=this->feet/t;
		temp.inch=this->inch/t;
		return temp;
	}
};
Distance add(Distance,int);
Distance sub(Distance,int);
Distance mult(Distance,int);
Distance div(Distance,int);
int main()
{
	int feet,inch;
	Distance d1,d2,d3,d4,d5;
	cout<<"\nEnter distance in feet and inches\n";
	cin>>feet>>inch;
	d1.setFeet(feet);
	d1.setInch(inch);
	d1.display();
	cout<<"\nEnter distance in feet and inches\n";
	cin>>feet>>inch;
	d2.setFeet(feet);
	d2.setInch(inch);
	d2.display();
	d3=d1.add(d2);
	cout<<"\nAddition of 2 distance using member function:\n";
	d3.display();
	d4=d1.add(10);
	cout<<"\nAdd 10 to feet and inches of distance using meber function:\n";
	d4.display();
	d5=add(d1,5);
	cout<<"\nAdd 5 to feet and inches of distance using non meber function:\n";
	d5.display();
	d3=d1.sub(d2);
	cout<<"\nSubstraction of 2 distance using member function:\n";
	d3.display();
	d4=d1.sub(10);
	cout<<"\nSubtract 10 from feet and inches of distance using meber function:\n";
	d4.display();
	d5=sub(d1,5);
	cout<<"\nSubtract 5 from feet and inches of distance using non meber function:\n";
	d5.display();
	d3=d1.mult(d2);
	cout<<"\nMultiplication of 2 distance using member function:\n";
	d3.display();
	d4=d1.mult(10);
	cout<<"\nMultiply by 10 to feet and inches of distance using meber function:\n";
	d4.display();
	d5=mult(d1,5);
	cout<<"\nMultiply by 5 to feet and inches of distance using non meber function:\n";
	d5.display();
	d3=d1.div(d2);
	cout<<"\nDivision of 2 distance using member function:\n";
	d3.display();
	d4=d1.div(10);
	cout<<"\nDivide by 10 to feet and inches of distance using meber function:\n";
	d4.display();
	d5=div(d1,5);
	cout<<"\nDivide by 5 to feet and inches of distance using non meber function:\n";
	d5.display();
}
Distance add(Distance d1,int t)
{
	Distance temp;
	temp.setFeet(d1.getFeet()+t);
	temp.setInch(d1.getInch()+t);
	return temp;
}
Distance sub(Distance d1,int t)
{
	Distance temp;
	temp.setFeet(d1.getFeet()-t);
	temp.setInch(d1.getInch()-t);
	return temp;
}
Distance mult(Distance d1,int t)
{
	Distance temp;
	temp.setFeet(d1.getFeet()*t);
	temp.setInch(d1.getInch()*t);
	return temp;
}
Distance div(Distance d1,int t)
{
	Distance temp;
	temp.setFeet(d1.getFeet()/t);
	temp.setInch(d1.getInch()/t);
	return temp;
}
