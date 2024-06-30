#include<stdio.h>
#include<string.h>
struct admin
{
	int id;
	char name[20];
	double salary,allowance;
	void setid(int i)
	{
		this->id=i;
	}
	void setname(const char* n)
	{
		strcpy(this->name,n);
	}
	void setsalary(double s)
	{
		this->salary=s;
	}
	void setallow(double a)
	{
		this->allowance=a;
	}
	void display()
	{
		printf("\nadmins details:\nid: %d\nname: %s\nsalary: %.2lf\nallowance: %.2lf\n",this->id,this->name,this->salary,this->allowance);
	}
};
int main()
{
	admin a1;
	int id;
	char name[20];
	double salary,allowance;
	printf("enter admin id:\n");
	scanf("%d",&id);
	printf("\nenter name of the admin:\n");
	scanf("%s",name);
	printf("\nenter salary of admin:\n");
	scanf("%lf",&salary);
	printf("\nallowance for admin:\n");
	scanf("%lf",&allowance);
	a1.setid(id);
	a1.setname(name);
	a1.setsalary(salary);
	a1.setallow(allowance);
	a1.display();
	return 0;
}

