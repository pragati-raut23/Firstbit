using namespace std;
#include<iostream>
class Complex
{
	int real,imag;
	public:
	Complex()
	{
	//	printf("\n\ndefault constructor called\n");
		this->real=0;
		this->imag=0;
	}
	Complex(int r,int i)
	{
	//	printf("\n\nparameterised constructor called\n");
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
		cout<<"\ncomplex number: "<<this->real<<" + "<<this->imag<<" i\n";
	}
};
int main()
{
	Complex c1(2,5);
	c1.display();	//member function
	Complex c2 = c1;
	c2.display();
	c1.setReal(10);
	c1.setImg(5);
	c1.display();
	c2.display();
//	int real,imag;
//	cout<<"\nenter real part of complex number:\n";
//	cin>>real;
//	cout<<"\nenter imaginary part of complex number:\n";
//	cin>>imag;
//	c1.setReal(real);	//member function
//	c1.setImg(imag);	//member function
//	cout<<"\nafter setting values\n";
//	c1.display();		//member function
//	cout<<"\ngetter\n";
//	cout<<"\ncomplex number: "<<c1.getReal()<<"+"<<c1.getImag()<<"i"<<"\n";
//	Complex c3;
//	c3.display();
//	c3.setReal(15);	//member function
//	c3.setImg(3);	//member function
//	cout<<"\nafter setting values\n";
//	c3.display();		//member function
//	cout<<"\ngetter\n";
//	cout<<"\ncomplex number: "<<c3.getReal()<<"+"<<c3.getImag()<<"i"<"\n";
//	Complex c2(10,2);	//member function
//	c2.display();	//member function
//	cout<<"\ngetter\n";
//	cout<<"\ncomplex number: "<<c2.getReal()<<"+"<<c2.getImag()<<"i\n";
	return 0;
}
