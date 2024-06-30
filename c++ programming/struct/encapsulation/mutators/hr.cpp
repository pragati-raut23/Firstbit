#include<stdio.h>
#include<string.h>
struct hr_manager
{
	int id;
	char name[20];
	double salary,commission;
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
	void setcomm(double c)
	{
		this->commission=c;
	}
	void display()
	{
		printf("\nHR Managers detail: \nid: %d\nName: %s\nSalary: %.2lf\nCommission: %.2lf\n",this->id,this->name,this->salary,this->commission);
	}
};
int main()
{
	hr_manager h1;
	int id;
	char name[20];
	double salary,commission;
	printf("enter hr managers id:\n");
	scanf("%d",&id);
	printf("\nenter name of hr manager:\n");
	scanf("%s",name);
	printf("\nenter salary of hr manager:\n");
	scanf("%ld",&salary);
	printf("\nenter commission for hr manager:\n");
	scanf("%lf",&commission);
	h1.setid(id);
	h1.setname(name);
	h1.setsalary(salary);
	h1.setcomm(commission);
	h1.display();
	return 0;
}
