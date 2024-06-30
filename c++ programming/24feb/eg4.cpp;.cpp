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
};
void myfun(Complex&);
int main()
{
	Complex c1(30,23);
	c1.display();
	myfun(c1);
	c1.display();
}
void myfun(Complex& b)
{
	b.setReal(11);
	b.setImg(12);
}
