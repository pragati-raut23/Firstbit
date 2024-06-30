#include<stdio.h>
struct distance
{
	int feet,inch;
	void setfeet(int f)
	{
		this->feet=f;
	}
	void setinch(int i)
	{
		this->inch=i;
	}
	void display()
{
	printf("\ndistance is: %d feet and %d inches\n",this->feet,this->inch);
}
};
int main()
{
	distance d1;
	int feet,inch;
	printf("enter distance in feet:\n");
	scanf("%d",&feet);
	printf("\nenter distance in inch:\n");
	scanf("%d",&inch);
	d1.setfeet(feet);
	d1.setinch(inch);
	d1.display();
	return 0;
}
