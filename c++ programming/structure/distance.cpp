#include<stdio.h>
struct distance
{
	int feet,inch;
};
void display(distance*);
int main()
{
	distance d1;
	printf("enter distance in feet:\n");
	scanf("%d",&d1.feet);
	printf("\nenter distance in inch:\n");
	scanf("%d",&d1.inch);
	display(&d1);
	return 0;
}
void display(distance *d1)
{
	printf("\ndistance is: %d feet and %d inches\n",d1->feet,d1->inch);
}
