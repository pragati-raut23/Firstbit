using namespace std;
#include<iostream>
#include<string.h>
class WaterSource
{
	char name[20];
	double waterSalinity;
	char waterQuality[20];
	public:
	WaterSource()
	{
		cout<<"\nWater source default constructor called\n";
		strcpy(this->name,"not given");
		this->waterSalinity=-1;
		strcpy(this->waterQuality,"not_given");
	}
	WaterSource(char* n,double s,char* q)
	{
		cout<<"\nWater source parameterised constructor called\n";
		strcpy(this->name,n);
		this->waterSalinity=s;
		strcpy(this->waterQuality,q);
	}
	void setName(char* n)
	{
		strcpy(this->name,n);
	}
	void setWaterQuality(char* q)
	{
		strcpy(this->waterQuality,q);
	}
	void setWaterSalinity(double s)
	{
		this->waterSalinity=s;
	}
	char* getName()
	{
		return this->name;
	}
	char* getWaterQuality()
	{
		return this->waterQuality;
	}
	double getWaterSalinity()
	{
		return this->waterSalinity;
	}
	void display()
	{
		cout<<"\nName: "<<this->name<<"\t  Quality: "<<this->waterQuality<<"\t  Salinity: "<<this->waterSalinity<<"\n";
	}
};
class Dam:public WaterSource
{
	int noDoors;
	double capacity;
	public:
	Dam():WaterSource()
	{
		cout<<"\nDam default constructor called\n";
		this->noDoors=0;
		this->capacity=0;
	}
	Dam(char* n,double s,char* q,int d,double c):WaterSource(n,s,q)
	{
		cout<<"\nDam parameterised constructor called\n";
		this->noDoors=d;
		this->capacity=c;
	}
	void setDoors(int d)
	{
		this->noDoors=d;
	}
	void setCapacity(double c)
	{
		this->capacity=c;
	}
	int getDoors()
	{
		return this->noDoors;
	}
	double getCapacity()
	{
		return this->capacity;
	}
	void display()
	{
		cout<<"\nWater source: Dam\nDetails:\n";
		WaterSource::display();
		cout<<"\nNo of doors: "<<this->noDoors<<"\tCapacity: "<<this->capacity<<" tmc\n";
	}
};
class River:public WaterSource
{
	double depth,width;
	char origin[20];
	public:
	River():WaterSource()
	{
		cout<<"\nRiver default constructor called\n";
		strcpy(this->origin,"not given");
		this->depth=0;
		this->width=0;
	}
	River(char* n,double s,char* q,char* sn,double d,double w):WaterSource(n,s,q)
	{
		cout<<"\nRiver default constructor called\n";
		strcpy(this->origin,sn);
		this->depth=d;
		this->width=w;
	}
	void setOrigin(char* sn)
	{
		strcpy(this->origin,sn);
	}
	void setDepth(double d)
	{
		this->depth=d;
	}
	void setWidth(double w)
	{
		this->width=w;
	}
	char* getOrigin()
	{
		return this->origin;
	}
	double getDepth()
	{
		return this->depth;
	}
	double getWidth()
	{
		return this->width;
	}
	void display()
	{
		cout<<"\nWater source: River\nDetails:\n";
		WaterSource::display();
		cout<<"\nOrigin of river: "<<this->origin<<"\t  Depth: "<<this->depth<<"\t Width: "<<this->width<<"\n";
	}
};
//	Dam d1;
//	d1.display();
//	Dam d2("koyana_dam",20,"Medium",36,98.77);
//	d2.display();
//	River r1;
//	r1.display();
//	River r2("koyana",32,"good","krishna_river",130,81);
//	r2.display();
//#include<iostream>
//Using namespace std;
void Execute(int &x, int y = 200)
{
	cout<<"\n"<<x<<"\n"<<y;
 int TEMP = x + y;
 cout<<"\n"<<x+TEMP<<"\n";
 x+= TEMP;
 if(y!=200)
     cout<<"\n"<<TEMP<<x<<y<<"--";
}
int main()
{



 int A=50, B=20;
 cout<<A<<B<<"--";
 Execute(A,B);
 cout<<A<<B<<"--";



	return 0;
}
