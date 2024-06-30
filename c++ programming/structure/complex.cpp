#include<stdio.h>
struct complex
{
	int real,imag;
};
void display(complex*);
int main()
{
	complex c1;
	printf("enter real part of complex number:\n");
	scanf("%d",&c1.real);
	printf("\nenter imaginary part of complex number:\n");
	scanf("%d",&c1.imag);
	display(&c1);
	return 0;
}
void display(complex *c1)
{
	printf("complex number: %d+%di",c1->real,c1->imag);
}
