#include<stdio.h>
struct admin
{
	int id;
	char name[20];
	double salary,allowance;
};
void display(admin*);
int main()
{
	admin a1;
	printf("enter admin id:\n");
	scanf("%d",&a1.id);
	printf("\nenter name of the admin:\n");
	scanf("%s",a1.name);
	printf("\nenter salary of admin:\n");
	scanf("%lf",&a1.salary);
	printf("\nallowance for admin:\n");
	scanf("%lf",&a1.allowance);
	display(&a1);
	return 0;
}
void display(admin *a1)
{
	printf("\nadmin id: %d\tadmin name: %s\tsalary: %lf\tallowance: %lf\n",a1->id,a1->name,a1->salary,a1->allowance);
}
