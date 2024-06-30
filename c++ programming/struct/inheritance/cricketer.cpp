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
	void display()
	{
		cout<<"\nCricketers information:\nJersey no.: "<<this->jerseyNo<<"\tName: "<<this->name<<"\t Age: "<<this->age<<"\n";
	}
};
struct Baller:public Cricketer
{
	int noOfBall;
	Baller():Cricketer()
	{
		cout<<"\nBaller default constructor called\n";
		this->noOfBall=0;
	}
	Baller(int j,char* n,int a,int nb):Cricketer(j,n,a)
	{
		cout<<"\nBaller default constructor called\n";
		this->noOfBall=nb;
	}
	void setNoOfBall(int nb)
	{
		this->noOfBall=nb;
	}
	int getNoOfBall()
	{
		return this->noOfBall;
	}
	void display()
	{
		Cricketer::display();
		cout<<"\nNo of Balls: "<<this->noOfBall<<"\n";
	}
};
struct BatsMan:public Cricketer
{
	int noOfBat,legGuard,helmet;
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
struct Fielder:public Cricketer
{
	int noGloves;
	Fielder():Cricketer()
	{
		cout<<"\nFielder default constructor called\n";
		this->noGloves=0;
	}
	Fielder(int j,char* n,int a,int g):Cricketer(j,n,a)
	{
		cout<<"\nFielder default constructor called\n";
		this->noGloves=g;
	}
	void setGloves(int g)
	{
		this->noGloves=g;
	}
	int getGloves()
	{
		return this->noGloves;
	}
	void display()
	{
		Cricketer::display();
		cout<<"\nNo of gloves: "<<this->noGloves<<"\n";
	}
};
int main()
{
	Baller b1;
	Baller b2(10,"Sachin",30,3);
	b2.display();
	BatsMan bm1;
	BatsMan bm2(18,"virat",26,4,2,1);
	bm2.display();
	Fielder f1;
	Fielder f2(7,"M.S.Dhoni",28,2);
	f2.display();
	return 0;
}
