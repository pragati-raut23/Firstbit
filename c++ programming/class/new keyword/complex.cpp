using namespace std;
#include<iostream>
int n;
class Complex
{
	int real,imag;
	public:
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
		cout<<"\ncomplex number: %d+%di\n",this->real,this->imag;
	}
};
int search(Complex*,Complex);
int main()
{
	Complex *c;
	Complex cm;
	int real,imag;
	int i,ans;
	c=new Complex[n];
	for(i=0;i<n;i++)
	{
		c[i].display();
		cout<<"\nenter real part of complex number:\n";
		cin>>real;
		cout<<"\nenter imaginary part of complex number:\n";
		cin>>imag;
		c[i].setReal(real);	
		c[i].setImg(imag);	
		c[i].display();	
	}
	cout<<"\nEnter complex number to search(real and imaginary part): ";
	cin>>real>>imag;
	cm.setReal(real);
	cm.setImg(imag);
	ans=search(c,cm);
	if(ans!=-1)
	{
		cout<<"\nComplex number found at "<<ans<<" location\n";
		c[ans].display();
	}
	Complex *c1;
	c1=new Complex(30,23);
	c1->display();
	return 0;
}
int search(Complex* c,Complex cm)
{
	int i,count=0;
	for(i=0;i<n;i++)
	{
		if(c[i].getReal()==cm.getReal()&&c[i].getImag()==cm.getImag())
		{
			count++;
			break;
		}
	}
	if(count!=0)
	return i;
	else 
	return -1;
}
