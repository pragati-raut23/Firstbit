#include<stdio.h>
#include<string.h>
struct player
{
	int jersey;
	char pname[20],sname[20];
	player()
	{
		printf("\nDefault constructor called\n");
		this->jersey=0;
		strcpy(this->pname,"not_given");
		strcpy(this->sname,"not_given");
	}
	player(int i,char* n,char* s)
	{
		printf("\nParameterised constructor called\n");
		this->jersey=i;
		strcpy(this->pname,n);
		strcpy(this->sname,s);
	}
	void setjersey(int j)
	{
		this->jersey=j;
	}
	void setpname(char* n)
	{
		strcpy(this->pname,n);
	}
	void setsport(char* s)
	{
		strcpy(this->sname,s);
	}
	int getjersey()
	{
		return this->jersey;
	}
	char* getname()
	{
		return this->pname;
	}
	char* getsport()
	{
		return this->sname;
	}
	void display()
	{
		printf("\nplayers detail: \njersey no: %d\tName: %s\tSport: %s\n",this->jersey,this->pname,this->sname);
	}
};
int main()
{
	player p1;
	p1.display();
	int j;
	char name[20],sport[20];
	printf("\nEnter jersey no:\n");
	scanf("%d",&j);
	printf("\nEnter player name:\n");
	scanf("%s",name);
	printf("\nEnter sport name:\n");
	scanf("%s",sport);
	p1.setjersey(j);
	p1.setpname(name);
	p1.setsport(sport);
	printf("\nafter setting value\n");
	p1.display();
	printf("\n*gatter*\njersey no: %d\nplayer name: %s\nsport name: %s\n",p1.getjersey(),p1.getname(),p1.getsport());
	player p2;
	p2.display();
	p2.setjersey(7);
	p2.setpname("M.S.Dhoni");
	p2.setsport("cricket");
	printf("\nafter setting value\n");
	p2.display();
	printf("\n*gatter*\njersey no: %d\nplayer name: %s\nsport name: %s\n",p2.getjersey(),p2.getname(),p2.getsport());
	player p3(7,"Ronaldo","football");
	p3.display();
	printf("\n*gatter*\njersey no: %d\nplayer name: %s\nsport name: %s\n",p3.getjersey(),p3.getname(),p3.getsport());
	return 0;
}
