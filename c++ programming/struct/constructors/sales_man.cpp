using namespace std;
#include<iostream>
#include<string.h>
struct SalesMan
{
	int id,target;
	char name[20];
	double salary,intensive;
	SalesMan()
	{
		cout<<"\n\ndefault constructor called\n";
		this->id=0;
		strcpy(this->name,"not_given");
		this->salary=0;
		this->target=0;
		this->intensive=0;
	}
	SalesMan(int i,const char* n,double s,int t,int in)
	{
		printf("\n\nparameterised constructor called\n");
		this->id=i;
		strcpy(this->name,n);
		this->salary=s;
		this->target=t;
		this->intensive=in;
	}
	void setId(int i)	//setters(mutator)
	{
		this->id=i;
	}
	void setName(const char* n)		//setters(mutator)
	{
		strcpy(this->name,n);
	}
	void setSalary(double s)		//setters(mutator)
	{
		this->salary=s;
	}
	void setTarget(int t)		//setters(mutator)
	{
		this->target=t;
	}
	void setIntense(double in)		//setters(mutator)
	{
		this->intensive=in;
	}
	int getId()		//getters(accessor)
	{
		return this->id;
	}
	char* getName()		//getters(accessor)
	{
		return this->name;
	}
	double getSalary()		//getters(accessor)
	{
		return this->salary;
	}
	int getTarget()		//getters(accessor)
	{
		return this->target;
	}
	double getIntense()		//getters(accessor)
	{
		return this->intensive;
	}
	void display()
	{
		cout<<"\nsales managers details:\nid: "<<this->id<<"\tname: "<<this->name<<"\tsalary: "<<this->salary<<"\ttarget: "<<this->target<<"\tintensive: "<<this->intensive;
	}
};
int main()
{
	SalesMan m1;
	int id,target;
	char name[20];
	double salary,intensive;
	m1.display();	//member function
	cout<<"enter sale managers id:\n";
	cin>>id;
	cout<<"\nenter the name of sales manager:\n";
	cin>>name;
	cout<<"\nenter salary of sales manager:\n";
	cin>>salary;
	cout<<"\nenter target of sales manager:\n";
	cin>>target;
	cout<<"\nenter intensive for target completion:\n";
	cin>>intensive;
	m1.setId(id);	//member function
	m1.setName(name);		//member function
	m1.setSalary(salary);		//member function
	m1.setTarget(target);
	m1.setIntense(intensive);	//member function
	cout<<"\nafter setting values\n";
	m1.display();	//member function
	cout<<"\ngetter\nsales managers details:\nid: "<<m1.getId()<<"\tname: "<<m1.getName()<<"\nsalary: "<<m1.getSalary()<<"\ttarget: "<<m1.getTarget()<<"\tintensive: "<<m1.getIntense()<<"\n";
	SalesMan m3;
	m3.display();
	m3.setId(101);	//member function
	m3.setName("sachin");		//member function
	m3.setSalary(60000);		//member function
	m3.setTarget(40);
	m3.setIntense(4500);	//member function
	cout<<"\nafter setting values\n";
	m3.display();	//member function
	cout<<"\ngetter\nsales managers details:\nid: "<<m3.getId()<<"\tname: "<<m3.getName()<<"\nsalary: "<<m3.getSalary()<<"\ttarget: "<<m3.getTarget()<<"\tintensive: "<<m3.getIntense()<<"\n";
	SalesMan m2(22,"pragati",50000,45,4500);
	m2.display();	//member function
	cout<<"\ngetter\nsales managers details:\nid: "<<m2.getId()<<"\tname: "<<m2.getName()<<"\nsalary: "<<m2.getSalary()<<"\ttarget: "<<m2.getTarget()<<"\tintensive: "<<m2.getIntense()<<"\n";
	return 0;	
}

