using namespace std;
#include<iostream>
#include<string.h>
struct Cricketer
{
	int jerseyNo,age;
	char name[20];
	Cricketer()
	{
		cout<<"\nCricketer default constructor called\n";
		this->jerseyNo=0;
		strcpy(this->name,"not given");
		this->age=0;
	}
	Cricketer(int j,char* n,int a)
	{
		cout<<"\nCricketer parameterised constructor called\n";
		this->jerseyNo=j;
		strcpy(this->name,n);
		this->age=a;
	}
	void setJerseyNo(int j)
	{
		this->jerseyNo=j;
	}
	void setName(char* n)
	{
		strcpy(this->name,n);
	}
	void setAge(int a)
	{
		this->age=a;
	}
	int getJerseyNo()
	{
		return this->jerseyNo;
	}
	char* getName()
	{
		return this->name;
	}
	int getAge()
	{
		return this->age;
	}
	virtual void display()
	{
		cout<<"\nCricketers information:\nJersey no.: "<<this->jerseyNo<<"\tName: "<<this->name<<"\t Age: "<<this->age<<"\n";
	}
	
};
struct Baller:public Cricketer
{
	int noOfBall,wicket;
	Baller():Cricketer()
	{
		cout<<"\nBaller default constructor called\n";
		this->noOfBall=0;
		this->wicket=0;
	}
	Baller(int j,char* n,int a,int nb,int w):Cricketer(j,n,a)
	{
		cout<<"\nBaller parameterised constructor called\n";
		this->noOfBall=nb;
		this->wicket=no;
	}
	void setNoOfBall(int nb)
	{
		this->noOfBall=nb;
	}
	void setWicket(int w)
	{
		this->wicket=w;
	}
	int getNoOfBall()
	{
		return this->noOfBall;
	}
	int getWicket()
	{
		return this->wicket;
	}
	void display()
	{
		Cricketer::display();
		cout<<"\nNo of Balls: "<<this->noOfBall<<"\n";
	}
};
struct BatsMan:public Cricketer
{
	int noOfBat,legGuard,helmet,run;
	BatsMan():Cricketer()
	{
		cout<<"\nBatsman default constructor called\n";
		this->noOfBat=0;
		this->legGuard=0;
		this->helmet=0;
	}
	BatsMan(int j,char* n,int a,int b,int lg,int h):Cricketer(j,n,a)
	{
		cout<<"\nBatsman default constructor called\n";
		this->noOfBat=b;
		this->legGuard=lg;
		this->helmet=h;
	}
	void setBat(int b)
	{
		this->noOfBat=b;
	}
	void setLegGuard(int lg)
	{
		this->legGuard=lg;
	}
	void setHelmet(int h)
	{
		this->helmet=h;
	}
	int getBat()
	{
		return this->noOfBat;
	}
	int getLegGuard()
	{
		return this->legGuard;
	}
	int getHelmet()
	{
		return this->helmet;
	}
	void display()
	{
		Cricketer::display();
		cout<<"\nNo. of bats: "<<this->noOfBat<<"\t no of leg guard: "<<this->legGuard<<"\n no of helmet: "<<this->helmet<<"\n";
	}
};
int main()
{
	Cricketer *c;
	Baller b1;
	c=&b1;
	c->display();
	Baller b2(10,"Sachin",30,3);
	c=&b2;
	c->display();
	BatsMan bm1;
	c=&bm1;
	c->display();
	BatsMan bm2(18,"virat",26,4,2,1);
	c=&bm2;
	c->display();
	Fielder f1;
	c=&f1;
	c->display();
	Fielder f2(7,"M.S.Dhoni",28,2);
	c=&f2;
	c->display();
	return 0;
}
