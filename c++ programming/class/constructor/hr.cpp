using namespace std;
#include<iostream>
#include<string.h>
class HrManager
{
	int id;
	char name[20];
	double salary,commission;
	public:
	HrManager()
	{
		cout<<"\n\ndefault constructor called\n";
		this->id=0;
		strcpy(this->name,"not_given");
		this->salary=0;
		this->commission=0;
	}
	HrManager(int i,const char* n,double s,double c)
	{
		cout<<"\n\nparameterised constructor called\n";
		this->id=i;
		strcpy(this->name,n);
		this->salary=s;
		this->commission=c;
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
	void setComm(double c)		//setters(mutator)
	{
		this->commission=c;
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
	double getComm()	//getters(accessor)
	{
		return this->commission;
	}
	void display()
	{
		cout<<"\nHR Managers detail: \nid: "<<this->id<<"\tName: "<<this->name<<"\tSalary: "<<this->salary<<"\tCommission: "<<this->commission<<"\n";
	}
};
int main()
{
	HrManager h1;
	int id;
	char name[20];
	double salary,commission;
	h1.display();	//member function
	cout<<"\nenter hr managers id:\n";
	cin>>id;
	cout<<"\nenter name of hr manager:\n";
	cin>>name;
	cout<<"\nenter salary of hr manager:\n";
	cin>>salary;
	cout<<"\nenter commission for hr manager:\n";
	cin>>commission;
	h1.setId(id);	//member function
	h1.setName(name);	//member function
	h1.setSalary(salary);	//member function
	h1.setComm(commission);	//member function
	cout<<"\nafter setting values\n";
	h1.display();	//member function
	cout<<"\ngetter\nHR Managers detail: \nid: "<<h1.getId()<<"\nName: "<<h1.getName()<<"\nSalary: "<<h1.getSalary()<<"\nCommission: "<<h1.getComm()<<"\n";
	HrManager h3;
	h3.display();
	h3.setId(101);	//member function
	h3.setName("sachin");	//member function
	h3.setSalary(60000);	//member function
	h3.setComm(6000);	//member function
	cout<<"\nafter setting values\n";
	h3.display();	//member function
	cout<<"\ngetter\nHR Managers detail: \nid: "<<h3.getId()<<"\nName: "<<h3.getName()<<"\nSalary: "<<h3.getSalary()<<"\nCommission: "<<h3.getComm()<<"\n";
	HrManager h2(202,"pragati",50000,5000);	//member function
	h2.display();	//member function
	cout<<"\ngetter\nHR Managers detail: \nid: "<<h2.getId()<<"\nName: "<<h2.getName()<<"\nSalary: "<<h2.getSalary()<<"\nCommission: "<<h2.getComm()<<"\n";
	return 0;
}
