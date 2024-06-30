#include<stdio.h>
struct sales_man
{
	int id,target;
	char name[20];
	double salary,intensive;
};
void display(sales_man*);
int main()
{
	sales_man m1;
	printf("enter sale managers id:\n");
	scanf("%d",&m1.id);
	printf("\nenter the name of sales manager:\n");
	scanf("%s",m1.name);
	printf("\nenter salary of sales manager:\n");
	scanf("%lf",&m1.salary);
	printf("\nenter target of sales manager:\n");
	scanf("%d",&m1.target);
	printf("\nenter intensive for target completion:\n");
	scanf("%lf",&m1.intensive);
	display(&m1);
	return 0;	
}
void display(sales_man *m1)
{
	printf("\nsale managers id: %d\tsale managers name: %s\tsalary: %lf\ttarget: %d\tintensive: %lf\n",m1->id,m1->name,m1->salary,m1->target,m1->intensive);
}
