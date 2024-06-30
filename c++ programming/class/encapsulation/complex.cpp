#include<stdio.h>
class complex
{
	int real,imag;
	public:
	void setreal(int r)
	{
		this->real=r;
	}
	void setimg(int i)
	{
		this->imag=i;
	}
	void display()
	{
		printf("complex number: %d+%di",this->real,this->imag);
	}
};
int main()
{
	complex c1;
	int real,imag;
	printf("enter real part of complex number:\n");
	scanf("%d",&real);
	printf("\nenter imaginary part of complex number:\n");
	scanf("%d",&imag);
	c1.setreal(real);
	c1.setimg(imag);
	c1.display();
	return 0;
}
