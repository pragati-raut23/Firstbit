using namespace std;
#include<iostream>
#include<string.h>
struct Admin
{
	int id;
	char name[20];
	double salary,allowance;
	Admin()
	{
		cout<<"\n\ndefault constructor called\n";
		this->id=0;
		strcpy(this->name,"not_given");
		this->salary=0;
		this->allowance=0;
	}
	Admin(int i,const char* n,double s,double a)
	{
		cout<<"\n\nparameterised constructor called\n";
		this->id=i;
		strcpy(this->name,n);
		this->salary=s;
		this->allowance=a;
	}
	void setId(int i)	//setters(mutator)
	{
		this->id=i;
	}
	void setName(const char* n)		//setters(mutator)
	{
		strcpy(this->name,n);
	}
	void setSalary(double s)	//setters(mutator)
	{
		this->salary=s;
	}
	void setAllow(double a)		//setters(mutator)
	{
		this->allowance=a;
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
	double getAllow()	//getters(accessor)
	{
		return this->allowance;
	}
	void display()
	{
		cout<<"\nadmins details:\nid: "<<this->id<<"\tname: "<<this->name<<"\tsalary: "<<this->salary<<"\tallowance: "<<this->allowance<<"\n";
	}
};
int main()
{
	//Admin a1[5]={{1,"admin1",100,11},{2,"admin2",200,21}};
//	Admin a1={2,"admin2",200,21};
	Admin a1={};
//	a1.display();	//member function
//	cout<<"enter admin id:\n";
//	cin>>id;
//	cout<<"\nenter name of the admin:\n";
//	cin>>name;
//	cout<<"\nenter salary of admin:\n";
//	cin>>salary;
//	cout<<"\nallowance for admin:\n";
//	cin>>allowance;
//	a1.setId(id);	//member function
//	a1.setName(name);	//member function
//	a1.setSalary(salary);	//member function
//	a1.setAllow(allowance);	//member function
//	cout<<"\nafter setting values\n";
//	a1.display();	//member function
//	cout<<"\ngetter\n";
//	cout<<"\nadmins details:\nid: "<<a1.getId()<<"\nname: "<<a1.getName()<<"\nsalary: "<<a1.getSalary()<<"\nallowance: "<<a1.getAllow()<<"\n";
//	Admin a3;
//	a3.display();
//	a3.setId(101);	//member function
//	a3.setName("sachin");	//member function
//	a3.setSalary(60000);	//member function
//	a3.setAllow(6000);	//member function
//	cout<<"\nafter setting values\n";
//	a3.display();	//member function
//	cout<<"\ngetter\n";
//	cout<<"\nadmins details:\nid: "<<a3.getId()<<"\nname: "<<a3.getName()<<"\nsalary: "<<a3.getSalary()<<"\nallowance: "<<a3.getAllow()<<"\n";
//	Admin a2(101,"pragati",50000,4500);
//	a2.display();	//member function
//	cout<<"\ngetter\n";
//	cout<<"\nadmins details:\nid: "<<a2.getId()<<"\nname: "<<a2.getName()<<"\nsalary: "<<a2.getSalary()<<"\nallowance: "<<a2.getAllow()<<"\n";
	return 0;
}

