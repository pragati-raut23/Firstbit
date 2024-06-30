#include<stdio.h>
#include<string.h>
struct team
{
	int tid,no_emp;
	char tname[20],thead[20];
	team()
	{
		printf("\nDefault constructor called\n");
		this->tid=0;
		strcpy(this->tname,"not_given");
		strcpy(this->thead,"not_given");
		this->no_emp=0;
	}
	team(int i,char* n,char* h,int ne)
	{
		printf("\nParameterised constructor called\n");
		this->tid=i;
		strcpy(this->tname,n);
		strcpy(this->thead,h);
		this->no_emp=ne;
	}
	void setid(int i)
	{
		this->tid=i;
	}
	void setname(char* n)
	{
		strcpy(this->tname,n);
	}
	void sethead(char* h)
	{
		strcpy(this->thead,h);
	}
	void setemp(int ne)
	{
		this->no_emp=ne;
	}
	int getid()
	{
		return this->tid;
	}
	char* getname()
	{
		return this->tname;
	}
	char* gethead()
	{
		return this->thead;
	}
	int getemp()
	{
		return this->no_emp;
	}
	void display()
	{
		printf("\nTeam details:\nteam id: %d\tName: %s\nHead of team: %s\t No. of employee: %d\n",this->tid,this->tname,this->thead,this->no_emp);
	}
};
int main()
{
	team t1;
	int id,emp;
	char name[20],head[20];
	t1.display();
	printf("\nEnter team id:\n");
	scanf("%d",&id);
	printf("\nEnter team name:\n");
	scanf("%s",name);
	printf("\nEnter name of team head:\n");
	scanf("%s",head);
	printf("\nEnter no of employees working in that team:\n");
	scanf("%d",&emp);
	t1.setid(id);
	t1.setname(name);
	t1.sethead(head);
	t1.setemp(emp);
	printf("\nafter setting value:\n");
	t1.display();
	printf("\n*getter*\nteam id: %d\nteam name: %s\nteam head: %s\nno. of employees: %d\n",t1.getid(),t1.getname(),t1.gethead(),t1.getemp());
	team t2;
	t2.display();
	t2.setid(11);
	t2.setname("Quality_assurance");
	t2.sethead("Prakruti");
	t2.setemp(15);
	printf("\nafter setting value:\n");
	t2.display();
	printf("\n*getter*\nteam id: %d\nteam name: %s\nteam head: %s\nno. of employees: %d\n",t2.getid(),t2.getname(),t2.gethead(),t2.getemp());
	team t3(22,"front_end","Pragati",25);
	t3.display();
	printf("\n*getter*\nteam id: %d\nteam name: %s\nteam head: %s\nno. of employees: %d\n",t3.getid(),t3.getname(),t3.gethead(),t3.getemp());
}
