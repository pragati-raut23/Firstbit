#include<stdio.h>
struct hr_manager
{
	int id;
	char name[20];
	double salary,commission;
};
void display(hr_manager*);
int main()
{
	hr_manager h1;
	printf("enter hr managers id:\n");
	scanf("%d",&h1.id);
	printf("\nenter name of hr manager:\n");
	scanf("%s",h1.name);
	printf("\enter salary of hr manager:\n");
	scanf("%ld",&h1.salary);
	printf("\nenter commission for hr manager:\n");
	scanf("%lf",&h1.commission);
	display(&h1);
	return 0;
}
void display(hr_manager *h1)
{
	printf("\nHR Managers id: %d\tHR Managers Name: %s\tSalary: %lf\tCommission: %lf\n",h1->id,h1->name,h1->salary,h1->commission);
}
