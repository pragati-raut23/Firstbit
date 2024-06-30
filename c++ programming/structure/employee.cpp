#include<stdio.h>
struct employee
{
	int emp_id;
	char name[20];
	float salary;
};
void display(employee*);
int main()
{
	employee e1[2]= {{1,"emp1",100},{2,"emp2",200}};
//	printf("enter employee id: \n");
//	scanf("%d",&e1.emp_id);
//	printf("enter employee name: \n");
//	scanf("%s",&e1.name);
//	printf("enter employee salary: \n");
//	scanf("%f",&e1.salary);
	//display(&e1);
	display(&e1[1]);
	return 0;
}
void display(employee *e1)
{
	printf("employee id: %d\t name: %s\t  salary: %.2f",e1->emp_id,e1->name,e1->salary);
}
