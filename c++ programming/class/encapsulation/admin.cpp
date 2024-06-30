using namespace std;
#include<iostream>
#include<string.h>
class admin
{
	int id;
	char name[20];
	double salary,allowance;
	public:
	void setid(int i)
	{
		this->id=i;
	}
	void setname(const char* n)
	{
		strcpy(this->name,n);
	}
	void setsalary(double s)
	{
		this->salary=s;
	}
	void setallow(double a)
	{
		this->allowance=a;
	}
	void display()
	{
		cout<<"\nadmins details:\nid: "<<this->id<<"\nname: "<<this->name<<"\nsalary: "<<this->salary<<"\nallowance: "<<this->allowance<<"\n";
	}
};
int main()
{
	admin a1;
	int id;
	char name[20];
	double salary,allowance;
	cout<<"enter admin id:\n";
	cin>>id;
	cout<<"\nenter name of the admin:\n";
	cin>>name;
	cout<<"\nenter salary of admin:\n";
	cin>>salary;
	cout<<"\nallowance for admin:\n";
	cin>>allowance;
	a1.setid(id);
	a1.setname(name);
	a1.setsalary(salary);
	a1.setallow(allowance);
	a1.display();
	return 0;
}

