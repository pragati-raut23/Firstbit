#include<stdio.h>
#include<string.h>
struct employee
{
	int emp_id;
	char name[20];
	double salary;
	void setid(int i)
	{
		this->emp_id=i;
	}
	void setname(const char* n)
	{
		strcpy(this->name,n);
	}
	void setsalary(double s)
	{
		this->salary=s;
	}
	void display()
	{
		printf("\nemployees detail: \nid: %d \nname: %s  \nsalary: %.2lf",this->emp_id,this->name,this->salary);
	}
};
int main()
{
	employee e1;
	int emp_id;
	char name[20];
	double salary;
	printf("enter employee id: \n");
	scanf("%d",&emp_id);
	printf("enter employee name: \n");
	scanf("%s",&name);
	printf("enter employee salary: \n");
	scanf("%lf",&salary);
	e1.setid(emp_id);
	e1.setname(name);
	e1.setsalary(salary);
	e1.display();
	return 0;
}

