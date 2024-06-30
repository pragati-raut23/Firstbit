using namespace std;
#include<iostream>
#include<string.h>
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
	ostream& operator<<(ostream& out , Employee& e1)
	{
		int emp_id;
		char name[20];
		double salary;
		cout<<"\nenter employee id:\n";
		cin>>emp_id;
		cout<<"enter employee name: \n";
		cin>>name;
		cout<<"enter employee salary: \n";
		cin>>salary;
		e1.setId(emp_id);	//member function
		e1.setName(name);	//member function
		e1.setSalary(salary);
		out<<"\nemployees detail: \nid: "<<e1.getId()<<"\tname: "<<e1.getName()<<"\tsalary: "<<e1.getSalary()<<"\n";
		return out;
	}
int main()
{
	
	int a = 10 , b=20;
	cout<<a<<" "<<b;
	Employee e1,e2;
	
	cout<<e1<<e2;	// operator<<( cout , e1);
//	cin>>e1;	// operator>>(cin,e1)
//	e1.display();	//member function
//	
//		//member function
//	cout<<"\nafter setting values\n";
//	e1.display();	//member function
//	cout<<"\nemployees detail: \nid: "<<e1.getId()<<"\nname: "<<e1.getName() <<"\nsalary: "<<e1.getSalary()<<"\n";
//	Employee e3;
//	e3.display();
//	e3.setId(401);	//member function
//	e3.setName("sachin");	//member function
//	e3.setSalary(60000);	//member function
//	cout<<"\nafter setting values\n";
//	e3.display();	//member function
//	cout<<"\nemployees detail: \nid: "<<e3.getId()<<" \nname: "<<e3.getName()<<"\nsalary: "<<e3.getSalary()<<"\n";
//	Employee e2(22,"pragati",50000);	//member function
//	e2.display();	//member function
//	printf("\ngetter\n");
//	cout<<"\nemployees detail: \nid: "<<e2.getId()<<"\nname: "<<e2.getName()<<"\nsalary: "<<e2.getSalary()<<"\n";
	return 0;
}

