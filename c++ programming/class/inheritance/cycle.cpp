using namespace std;
#include<iostream>
#include<string.h>
class Cycle
{
	int no_of_wheel,no_of_bottle_holder;
	char cname[20],brake_type[20];
	public:
	Cycle()
	{
		cout<<"\nCycle default constructor called\n";
		strcpy(this->cname,"not given");
		this->no_of_wheel=0;
		this->no_of_bottle_holder=0;
		strcpy(this->brake_type,"not given");
	}
	Cycle(char* cn,int w,int bh,char* b)
	{
		cout<<"\nCycle default constructor called\n";
		strcpy(this->cname,cn);
		this->no_of_wheel=w;
		this->no_of_bottle_holder=bh;
		strcpy(this->brake_type,b);
	}
	void setCompany(char* cn)
	{
		strcpy(this->cname,cn);
	}
	void setWheels(int w)
	{
		this->no_of_wheel=w;
	}
	void setBottleHolder(int bh)
	{
		this->no_of_bottle_holder=bh;
	}
	void setBrake(char* bt)
	{
		strcpy(this->brake_type,bt);
	}
	char* getCompany()
	{
		return this->cname;
	}
	int getWheel()
	{
		return this->no_of_wheel;
	}
	int getBottleHolder()
	{
		return this->no_of_bottle_holder;
	}
	char* getBrake()
	{
		return this->brake_type;
	}
	void display()
	{
		cout<<"\nCycles details:\nCompany name: "<<this->cname<<"\nNo of wheels: "<<this->no_of_wheel<<"\nNo of bottle holder: "<<this->no_of_bottle_holder<<"\nBrake type: "<<this->brake_type<<"\n";
	}
};
class GearCycle:public Cycle
{
	int no_of_gears;
	public:
	GearCycle():Cycle()
	{
		cout<<"\nGear cycle default constructor called\n";
		this->no_of_gears=0;
	}
	GearCycle(char* cn,int w,int bh,char* bt,int g):Cycle(cn, w, bh, bt)
	{
		cout<<"\nGear cycle parameterised constructor called\n";
		this->no_of_gears=g;
	}
	void setGear(int g)
	{
		this->no_of_gears=g;
	}
	int getGear()
	{
		return this->no_of_gears;
	}
	void display()
	{
		Cycle::display();
		cout<<"No of gears: "<<this->no_of_gears<<"\n";
	}
};
class ElectricCycle:public Cycle
{
	double battery_power;
	public:
	ElectricCycle():Cycle()
	{
		cout<<"\nElectric cycle default constructor called\n";
		this->battery_power=0;
	}
	ElectricCycle(char* cn,int w,int bh,char* bt,double b):Cycle(cn, w, bh, bt)
	{
		cout<<"\nElectric cycle default constructor called\n";
		this->battery_power=b;
	}
	void setBattery(double b)
	{
		this->battery_power=b;
	}
	double getBattery()
	{
		return this->battery_power;
	}
	void display()
	{
		Cycle::display();
		cout<<"Battery power: "<<this->battery_power<<"\n";
	}
};
int main()
{
	GearCycle g1;
	g1.display();
	GearCycle g2("keysto",2,1,"disc_brake",14);
	g2.display();
	ElectricCycle e1;
	e1.display();
	ElectricCycle e2("keysto",2,2,"drum_brake",5000);
	e2.display();
	return 0;
}
