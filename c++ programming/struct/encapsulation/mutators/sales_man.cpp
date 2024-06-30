#include<stdio.h>
#include<string.h>
struct sales_man
{
	int id,target;
	char name[20];
	double salary,intensive;
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
	void settarget(int t)
	{
		this->target=t;
	}
	void setintense(double in)
	{
		this->intensive=in;
	}
	void display()
	{
		printf("\nsales managers details:\nid: %d\nname: %s\nsalary: %.2lf\ntarget: %d\nintensive: %.2lf\n",this->id,this->name,this->salary,this->target,this->intensive);
	}
};
int main()
{
	sales_man m1;
	int id,target;
	char name[20];
	double salary,intensive;
	printf("enter sale managers id:\n");
	scanf("%d",&id);
	printf("\nenter the name of sales manager:\n");
	scanf("%s",name);
	printf("\nenter salary of sales manager:\n");
	scanf("%lf",&salary);
	printf("\nenter target of sales manager:\n");
	scanf("%d",&target);
	printf("\nenter intensive for target completion:\n");
	scanf("%lf",&intensive);
	m1.setid(id);
	m1.setname(name);
	m1.setsalary(salary);
	m1.settarget(target);
	m1.setintense(intensive);
	m1.display();
	return 0;	
}

