#include<stdio.h>
#include<string.h>
struct project
{
	int pid;
	char pname[30];
	struct date
	{
		int day,month,year;
	};
	date due_d;
	project()
	{
		printf("\nDefault constructor called\n");
		this->pid=0;
		strcpy(this->pname,"not_given");
		this->due_d.day=0;
		this->due_d.month=0;
		this->due_d.year=0;
	}
	project(int i,char* n,int d,int m,int y)
	{
		printf("\nParameterised constructor called\n");
		this->pid=i;
		strcpy(this->pname,n);
		this->due_d.day=d;
		this->due_d.month=m;
		this->due_d.year=y;
	}
	void setid(int i)
	{
		this->pid=i;
	}
	void setpro(char* p)
	{
		strcpy(this->pname,p);
	}
	void setday(int d)
	{
		this->due_d.day=d;
	}
	void setmonth(int m)
	{
		this->due_d.month=m;
	}
	void setyear(int y)
	{
		this->due_d.year=y;
	}
	int getid()
	{
		return this->pid;
	}
	char* getpro()
	{
		return this->pname;
	}
	int getday()
	{
		return this->due_d.day;
	}
	int getmonth()
	{
		return this->due_d.month;
	}
	int getyear()
	{
		return this->due_d.year;
	}
	void display()
	{
		printf("\nProject details:\nProject id: %d\tName: %s\t Due date: %d/%d/%d\n",this->pid,this->pname,this->due_d.day,this->due_d.month,this->due_d.year);
	}
};
int main()
{
	project p1;
	int id,d,m,y;
	char name[30];
	p1.display();
	printf("\nEnter project id:\n");
	scanf("%d",&id);
	printf("\nEnter project name:\n");
	scanf("%s",name);
	printf("\nEnter due date of project(dd/mm/yy):\n");
	scanf("%d %d %d",&d,&m,&y);
	p1.setid(id);
	p1.setpro(name);
	p1.setday(d);
	p1.setmonth(m);
	p1.setyear(y);
	printf("\nafter setting values\n");
	p1.display();
	printf("\n*getter*\nproject id: %d\nproject name: %s\ndue date: %d/%d/%d\n",p1.getid(),p1.getpro(),p1.getday(),p1.getmonth(),p1.getyear());
	project p2;
	p2.display();
	p2.setid(23);
	p2.setpro("online_book_order");
	p2.setday(3);
	p2.setmonth(3);
	p2.setyear(2023);
	printf("\nafter setting values\n");
	p2.display();
	printf("\n*getter*\nproject id: %d\nproject name: %s\ndue date: %d/%d/%d\n",p2.getid(),p2.getpro(),p2.getday(),p2.getmonth(),p2.getyear());
	project p3(12,"online_food_order",11,3,2023);
	p3.display();
	printf("\n*getter*\nproject id: %d\nproject name: %s\ndue date: %d/%d/%d\n",p3.getid(),p3.getpro(),p3.getday(),p3.getmonth(),p3.getyear());
	return 0;
}
