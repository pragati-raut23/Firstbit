using namespace std;
#include<iostream>
#include<string.h>
struct WaterSource
{
	char name[20];
	double waterSalinity;
	char waterQuality[20];
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
	virtual void display()
	{
		cout<<"\nName: "<<this->name<<"\t  Quality: "<<this->waterQuality<<"\t  Salinity: "<<this->waterSalinity<<"\n";
	}
	virtual void giveWater()
	{
		cout<<"\nWater Source provide us stored water\n";
	}
};
struct Dam:public WaterSource
{
	int noDoors;
	double capacity;
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
	void giveWater()
	{
		cout<<"\nBy opening doors of dam, water stored in dam is becomes available for us to use\n";
	}
};
struct River:public WaterSource
{
	double depth,width;
	char origin[20];
	River():WaterSource()
	{
		cout<<"\nRiver default constructor called\n";
		strcpy(this->origin,"not given");
		this->depth=0;
		this->width=0;
	}
	River(char* n,double s,char* q,char* sn,double d,double w):WaterSource(n,s,q)
	{
		cout<<"\nRiver parameterised constructor called\n";
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
	void giveWater()
	{
		cout<<"\nRiver water is open to us to use\n";
	}
};
int main()
{
	WaterSource *w;
	Dam d1;
	w=&d1;
	w->display();
	w->giveWater();
	Dam d2("koyana_dam",20,"Medium",36,98.77);
	w=&d2;
	w->display();
	w->giveWater();
	River r1;
	w=&r1;
	w->display();
	w->giveWater();
	River r2("koyana",32,"good","krishna_river",130,81);
	w=&r2;
	w->display();
	w->giveWater();
	return 0;
}
