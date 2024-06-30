using namespace std;
#include<iostream>
class Complex
{
	int real,imag;
	public:
	Complex();
	Complex(int ,int);
	void setReal(int);
	void setImag(int);
	int getReal();
	int getImag();
	void display();
	Complex add(Complex);
	Complex add(int);
	Complex sub(Complex );
	Complex sub(int );
	Complex mult(Complex);
	Complex mult(int);
	Complex div(Complex);
	Complex div(int );
};
Complex add(Complex,int);
Complex sub(Complex,int);
Complex mult(Complex,int);
Complex div(Complex,int);
