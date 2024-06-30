using namespace std;
#include<iostream>
struct Complex
{
	int real,imag;
	Complex()
	{
		//cout<<"\nDefault constructor called\n";
		this->real=0;
		this->imag=0;
	}
	Complex(int real,int imag)
	{
		//cout<<"\nParameterised constructor called\n";
		this->real=real;
		this->imag=imag;
	}
	void setReal(int real)
	{
		this->real=real;
	}
	void setImag(int imag)
	{
		this->imag=imag;
	}
	int getReal()
	{
		return this->real;
	}
	int getImag()
	{
		return this->imag;
	}
	void display()
	{
		cout<<"\ncomplex number: "<<this->real<<"+"<<this->imag<<"i"<<"\n";
	}
	Complex add(Complex c2)
	{
		Complex temp;
		temp.real=c2.real+this->real;
		temp.imag=c2.imag+this->imag;
		return temp;
	}
	Complex add(int t)
	{
		Complex temp;
		temp.real= this->real + t;
		temp.imag= this->imag + t;
		return temp;
	}
	Complex sub(Complex c2)
	{
		Complex temp;
		temp.real=c2.real-this->real;
		temp.imag=c2.imag-this->imag;
		return temp;
	}
	Complex sub(int t)
	{
		Complex temp;
		temp.real=this->real-t;
		temp.imag=this->imag-t;
		return temp;
	}
	Complex mult(Complex c2)
	{
		Complex temp;
		temp.real=c2.real*this->real;
		temp.imag=c2.imag*this->imag;
		return temp;
	}
	Complex mult(int t)
	{
		Complex temp;
		temp.real=this->real*t;
		temp.imag=this->imag*t;
		return temp;
	}
	Complex div(Complex c2)
	{
		Complex temp;
		temp.real=c2.real/this->real;
		temp.imag=c2.imag/this->imag;
		return temp;
	}
	Complex div(int t)
	{
		Complex temp;
		temp.real=this->real/t;
		temp.imag=this->imag/t;
		return temp;
	}
};
Complex add(Complex,int);
Complex sub(Complex,int);
Complex mult(Complex,int);
Complex div(Complex,int);
int main()
{
	Complex c1,c2,c3,c4,c5;
	int real,imag;
	cout<<"\nEnter real part of complex number:\n";
	cin>>real;
	cout<<"\nEnter imaginary part of complex number:\n";
	cin>>imag;
	c1.setReal(real);
	c1.setImag(imag);
	
	cout<<"\nComplex no : "<<c1.getReal()<<" + "<<c1.getImag()<<" i\n";
	c1.display();
	cout<<"\nEnter real part of complex number:\n";
	cin>>real;
	cout<<"\nEnter imaginary part of complex number:\n";
	cin>>imag;
	c2.setReal(real);
	c2.setImag(imag);
	c2.display();
	c3=c1.add(c2);
	cout<<"\nAddition of 2 complex number using member function:\n";
	c3.display();
	c4=c1.add(10);
	cout<<"\nAdd 10 to real and imaginary part of complex number using meber function:\n";
	c4.display();
	c5=add(c1,5);
	cout<<"\nAdd 5 to real and imaginary part of complex number using non member function:\n";
	c5.display();
	c3=c1.sub(c2);
	cout<<"\nSubstraction of 2 complex number using member function:\n";
	c3.display();
	c4=c1.sub(10);
	cout<<"\nSubtract 10 from real and imaginary part of complex number using meber function:\n";
	c4.display();
	
	c5=sub(c1,5);
	
	cout<<"\nSubtract 5 from real and imaginary part of complex number using non member function:\n";
	c5.display();
	c3=c1.mult(c2);
	cout<<"\nMultiplication of 2 complex number using member function:\n";
	c3.display();
	c4=c1.mult(10);
	cout<<"\nMultiply by 10 to real and imaginary part of complex number using meber function:\n";
	c4.display();
	c5=mult(c1,5);
	cout<<"\nMultiply by 5 to real and imaginary part of complex number using non member function:\n";
	c5.display();
	c3=c1.div(c2);
	cout<<"\nDivision of 2 complex number using member function:\n";
	c3.display();
	c4=c1.div(10);
	cout<<"\nDivide by 10 to real and imaginary part of complex number using meber function:\n";
	c4.display();
	c5=div(c1,5);
	cout<<"\nDivide by 5 to real and imaginary part of complex number using non member function:\n";
	c5.display();
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
