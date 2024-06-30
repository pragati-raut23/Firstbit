using namespace std;
#include<iostream>
#include<string.h>
int n;
class Employee
{
	int emp_id;
	char name[20];
	double salary;
	public:
	Employee()	
	{
		cout<<"\n\ndefault constructor called\n";
		this->emp_id=0;
		strcpy(this->name,"not_given");
		this->salary=0;
	}
	Employee(int i,const char* n,double s)
	{
		cout<<"\n\nparameterised called\n";
		this->emp_id=i;
		strcpy(this->name,n);
		this->salary=s;
	}
	void setId(int i)	//setters(mutators)
	{
		this->emp_id=i;
	}
	void setName(const char* n)	//setters(mutators)
	{
		strcpy(this->name,n);
	}
	void setSalary(double s)	//setters(mutators)
	{
		this->salary=s;
	}
	int getId()	//getters(accessors)
	{
		return this->emp_id;
	}
	char* getName()	//getters(accessors)
	{
		return this->name;
	}
	double getSalary()	//getters(accessors)
	{
		return this->salary;
	}
	void display()	
	{
		cout<<"\nemployees detail: \nid: "<<this->emp_id<<"\tname: "<<this->name<<"\tsalary: "<<this->salary<<"\n";
	}
};
int search(Employee*,char*);
int main()
{
	Employee *e;
	int id,i,ans;
	char name[20];
	double salary;
	cout<<"\nEnter no of employees: ";
	cin>>n;
	e=new Employee[n];
	for(i=0;i<n;i++)
	{
		e[i].display();
		cout<<"\nenter employee id:\n";
		cin>>id;
		cout<<"enter employee name: \n";
		cin>>name;
		cout<<"enter employee salary: \n";
		cin>>salary;
		e[i].setId(id);
		e[i].setName(name);
		e[i].setSalary(salary);
		e[i].display();
	}
	cout<<"\nEnter employee name to search: ";
	cin>>name;
	ans=search(e,name);
	if(ans==-1)
	cout<<"\nEmployee name not found\n";
	else
		{
		cout<<"\nEmployee name found at "<<ans<<" location\n";
		e[ans].display();
		}
	
	Employee *e1;	
	e1=new Employee(42,"pragati",60000);
	e1->display();
	return 0;
}
int search(Employee *e,char* nm)
{
	int i,count=0,j;
	for(i=0;i<n;i++)
	{
		j=strcmp(e[i].getName(),nm);
		if(j==1)
		{
			count++;
			break;
		}
	}
	if(count!=0)
	return i;
	else
	return -1;
}
