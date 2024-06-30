#include "complex.h"
	Complex :: Complex()
	{
		//cout<<"\nDefault constructor called\n";
		this->real=0;
		this->imag=0;
	}
	Complex :: Complex(int real,int imag)
	{
		//cout<<"\nParameterised constructor called\n";
		this->real=real;
		this->imag=imag;
	}
	void Complex :: setReal(int real)
	{
		this->real=real;
	}
	void Complex :: setImag(int imag)
	{
		this->imag=imag;
	}
	int Complex :: getReal()
	{
		return this->real;
	}
	int Complex :: getImag()
	{
		return this->imag;
	}
	void Complex :: display()
	{
		cout<<"\ncomplex number: "<<this->real<<"+"<<this->imag<<"i"<<"\n";
	}
	Complex Complex :: add(Complex c2)
	{
		Complex temp;
		temp.real=c2.real+this->real;
		temp.imag=c2.imag+this->imag;
		return temp;
	}
	Complex Complex :: add(int t)
	{
		Complex temp;
		temp.real=this->real+t;
		temp.imag=this->imag+t;
		return temp;
	}
	Complex Complex :: sub(Complex c2)
	{
		Complex temp;
		temp.real=c2.real-this->real;
		temp.imag=c2.imag-this->imag;
		return temp;
	}
	Complex Complex :: sub(int t)
	{
		Complex temp;
		temp.real=this->real-t;
		temp.imag=this->imag-t;
		return temp;
	}
	Complex Complex :: mult(Complex c2)
	{
		Complex temp;
		temp.real=c2.real*this->real;
		temp.imag=c2.imag*this->imag;
		return temp;
	}
	Complex Complex :: mult(int t)
	{
		Complex temp;
		temp.real=this->real*t;
		temp.imag=this->imag*t;
		return temp;
	}
	Complex Complex :: div(Complex c2)
	{
		Complex temp;
		temp.real=c2.real/this->real;
		temp.imag=c2.imag/this->imag;
		return temp;
	}
	Complex Complex :: div(int t)
	{
		Complex temp;
		temp.real=this->real/t;
		temp.imag=this->imag/t;
		return temp;
	}
	Complex add(Complex c1,int t)
{
	Complex temp;
	temp.setReal(c1.getReal()+t);
	temp.setImag(c1.getImag()+t);
	return temp;
}
Complex sub(Complex c1,int t)
{
	Complex temp;
	temp.setReal(c1.getReal()-t);
	temp.setImag(c1.getImag()-t);
	return temp;
}
Complex mult(Complex c1,int t)
{
	Complex temp;
	temp.setReal(c1.getReal()*t);
	temp.setImag(c1.getImag()*t);
	return temp;
}
Complex div(Complex c1,int t)
{
	Complex temp;
	temp.setReal(c1.getReal()/t);
	temp.setImag(c1.getImag()/t);
	return temp;
}
