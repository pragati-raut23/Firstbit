#include<stdio.h>
struct calculator
{
	int add(int a,int b)
	{
		//printf("\naddition is: %d",a+b);
		return a+b;
	}
	float add(float a,float b)
	{
//		printf("\naddition is: %.2f",a+b);
		return a+b;
	}
	float add(int a,float b)
	{
//		printf("\naddition is: %.2f",a+b);
		return a+b;
	}
	float add(float a,int b)
	{
//		printf("\naddition is: %.2f",a+b);
		return a+b;
	}
	void sub(int a,int b)
	{
		printf("\nsubstraction is: %d",a-b);
	}
	void sub(float a,float b)
	{
		printf("\nsubstraction is: %.2f",a-b);
	}
	void sub(int a,float b)
	{
		printf("\nsubstraction is: %.2f",a-b);
	}
	void sub(float a,int b)
	{
		printf("\nsubstraction is: %.2f",a-b);
	}
	void mult(int a,int b)
	{
		printf("\nmultiplication is: %d",a*b);
	}
	void mult(float a,float b)
	{
		printf("\nmultiplication is: %.2f",a*b);
	}
	void mult(int a,float b)
	{
		printf("\nmultiplication is: %.2f",a*b);
	}
	void mult(float a,int b)
	{
		printf("\nmultiplication is: %.2f",a*b);
	}
	void div(int a,int b)
	{
		printf("\ndivision is: %.2f",a/b);
	}
	void div(float a,float b)
	{
		printf("\ndivision is: %.2f",a/b);
	}
	void div(int a,float b)
	{
		printf("\ndivision is: %.2f",a/b);
	}
	void div(float a,int b)
	{
		printf("\ndivision is: %.2f",a/b);
	}
};
int main()
{
	calculator c1;
	int a=10,b=20,c;
	float x=20.5,y=30.5,d;
	c=c1.add(a,b);
	printf("\nAddition is: %d",c);
	d=c1.add(x,y);
	printf("\nAddition is: %.2f",d);
	d=c1.add(a,x);
	printf("\nAddition is: %.2f",d);
	d=c1.add(y,b);
	printf("\nAddition is: %.2f",d);
	c1.sub(a,b);
	c1.sub(x,y);
	c1.sub(a,x);
	c1.sub(y,b);
	c1.mult(a,b);
	c1.mult(x,y);
	c1.mult(a,x);
	c1.mult(y,b);
	c1.div(a,b);
	c1.div(x,y);
	c1.div(a,x);
	c1.div(y,b);
	return 0;
}
