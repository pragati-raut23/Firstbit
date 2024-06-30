using namespace std;
#include<iostream>
struct Complex
{
	int real,imag;
	Complex()
	{
	//	cout<<"\n\ndefault constructor called\n";
		this->real=0;
		this->imag=0;
	}
	Complex(int r,int i)
	{
	//	cout<<"\n\nparameterised constructor called\n";
		this->real=r;
		this->imag=i;
	}
	void setReal(int r)		//setters(mutator)
	{
		this->real=r;
	}
	void setImg(int i)	//setters(mutator)
	{
		this->imag=i;
	}
	int getReal()		//getters(accessor)
	{
		return this->real;
	}
	int getImag()	//getters(accessor)
	{
		return this->imag;
	}
	void display()	
	{
		cout<<"\ncomplex number: "<<this->real<<"+"<<this->imag<<"i"<<"\n";
	}
	Complex operator++(int a)
	{
		Complex temp;
		temp.real=this->real++;
		temp.imag=this->imag++;
		return temp;
	}
	Complex operator++()
	{
		Complex temp;
		temp.real=++this->real;
		temp.imag=++this->imag;
		return temp;
	}
		Complex operator--(int a)
	{
		Complex temp;
		temp.real=this->real--;
		temp.imag=this->imag--;
		return temp;
	}
	Complex operator--()
	{
		Complex temp;
		temp.real=--this->real;
		temp.imag=--this->imag;
		return temp;
	}
};
int main()
{
	Complex c1(30,23);
	Complex c2,c3;
	cout<<"\nNumber is: ";
	c1.display();
	cout<<"\nAfter post increamentation\n";
	c2=c1++;
	c2.display();
	cout<<"\nNumber is ";
	c1.display();
	cout<<"\nAfter pre increamentation\n";
	c2=++c1;
	c2.display();
	cout<<"\nNumber is ";
	c1.display();
	c3=c1--;
	cout<<"\nAfter post decreamentation\n";
	c3.display();
	cout<<"\nNumber is ";
	c3=--c1;
	cout<<"\nAfter pre decreamentation\n";
	c3.display();
}
