using namespace std;
#include<iostream>
#include<string.h>
class sales_man
{
	int id,target;
	char name[20];
	double salary,intensive;
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
	void settarget(int t)
	{
		this->target=t;
	}
	void setintense(double in)
	{
		this->intensive=in;
	}
	void display()
	{
		cout<<"\nsales managers details:\nid: "<<this->id<<"\nname: "<<this->name<<"\nsalary: "<<this->salary<<"\ntarget: "<<this->target<<"\nintensive: "<<this->intensive<<"\n";
	}
};
int main()
{
	sales_man m1;
	int id,target;
	char name[20];
	double salary,intensive;
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
	m1.setid(id);
	m1.setname(name);
	m1.setsalary(salary);
	m1.settarget(target);
	m1.setintense(intensive);
	m1.display();
	return 0;	
}

