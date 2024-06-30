using namespace std;
#include<iostream>
#include<string.h>

class employee
{
	int emp_id;
	char name[20];
	double salary;
	static int count;
	public:
	void setid(int i)
	{
		this->emp_id=i;
	}
	void setname(const char* n)
	{
		strcpy(this->name,n);
	}
	void setsalary(double s)
	{
		this->salary=s;
	}
	void display()
	{
		cout<<"\nemployees detail: \nid: "<<this->emp_id<<" \nname: "<<this->name<<" \nsalary: %.2lf"<<this->salary<<"\n";
	}
};

int main()
{
		int employee::count=0;
	employee e1;
	int emp_id;
	char name[20];
	double salary;
	cout<<"enter employee id: \n";
	cin>>emp_id;
	cout<<"enter employee name: \n";
	cin>>name;
	cout<<"enter employee salary: \n";
	cin>>salary;
	e1.setid(emp_id);
	e1.setname(name);
	e1.setsalary(salary);
	e1.display();
	return 0;
}

