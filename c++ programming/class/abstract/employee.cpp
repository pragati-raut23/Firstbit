using namespace std;
#include<iostream>
#include<string.h>
class Employee		//Base class
{
	int emp_id;
	char name[20];
	double salary;
	public:
	Employee()	
	{
		cout<<"\n\nEmp default constructor called\n";
		this->emp_id=0;
		strcpy(this->name,"not_given");
		this->salary=0;
	}
	Employee(int i,const char* n,double s)
	{
		cout<<"\n\nEmp parameterised called\n";
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
	virtual void display()	
	{
		cout<<"\nemployees detail: \nid: "<<this->emp_id<<"\tname: "<<this->name<<"\tsalary: "<<this->salary<<"\n";
	}
	virtual double calSal()=0;
};
class SalesMan:public Employee	//step 1
{
	int target;
	double intensive;
	public:
	SalesMan():Employee()	//step 2(a)- default constructor of Sales manager and call given to default constructor of Employee
	{
		cout<<"\n\nSM default constructor called\n";
		this->target=0;
		this->intensive=0;
	}
	SalesMan(int i,const char* n,double s,int t,int in):Employee(i,n,s)		//step 2(b) parameterised constructor of Sales manager and call given to parameterised constructor of Employee
	{
		cout<<"\n\nSM parameterised constructor called\n";
		this->target=t;
		this->intensive=in;
	}
	void setTarget(int t)		//extra setters(mutator) required for Sales manager
	{
		this->target=t;
	}
	void setIntense(double in)		//extra setters(mutator) required for Sales manager
	{
		this->intensive=in;
	}
	int getTarget()		//extra getters(accessor) required for sales manager
	{
		return this->target;
	}
	double getIntense()		//extra getters(accessor) required for sales manager
	{
		return this->intensive;
	}
	void display()
	{
		Employee::display();	//step 3- call given to display function of Employee class
		cout<<"\ntarget: "<<this->target<<"\tintensive: "<<this->intensive<<"\n";
	}
	double calSal()		//different implementation
	{
		return this->getSalary()+intensive;
	}
};
class Admin:public Employee	//step 1
{
	double allowance;
	public:
	Admin():Employee()	//step 2(a)-default constructor of Admin and call given to default constructor of Employee
	{
		cout<<"\n\nAdmin default constructor called\n";
		this->allowance=0;
	}
	Admin(int i,const char* n,double s,double a):Employee(i,n,s)	//step 2(b)-parameterised constructor of Admin and call given to parameterised constructor of Employee
	{
		cout<<"\n\nAdmin parameterised constructor called\n";
		this->allowance=a;
	}
	void setAllow(double a)		//extra setters(mutator) required for Admin
	{
		this->allowance=a;
	}
	double getAllow()	//extra getters(accessor) required for Admin
	{
		return this->allowance;
	}
	void display()	//step 3
	{
		Employee::display();	//call given to display function of Employee class
		cout<<"\tallowance: "<<this->allowance<<"\n";
	}
	double calSal()		//different implementation
	{
		return this->getSalary()+allowance;
	}
};
class HrManager:public Employee	//step 1
{
	double commission;
	public:
	HrManager():Employee()	//step 2(a)-default constructor of HR manager and call given to default constructor of Employee
	{
		cout<<"\n\nHR default constructor called\n";
		this->commission=0;
	}
	HrManager(int i,const char* n,double s,double c):Employee(i,n,s)	//step 2(b)-parameterised constructor of HR manager and call given to parameterised constructor of Employee
	{
		cout<<"\n\nHR parameterised constructor called\n";
		this->commission=c;
	}
	void setComm(double c)		//extra setters(mutator) required for HR manager
	{
		this->commission=c;
	}
	double getComm()	//extra getters(accessor) required for HR manager
	{
		return this->commission;
	}
	void display()	
	{
		Employee::display();	//step 3- call given to display function of Employee class
		cout<<"\tCommission: "<<this->commission<<"\n";
	}
	double calSal()		//different implementation
	{
		return this->getSalary()+commission;
	}
};
void allEmployeeDetails(Employee*);
int main()
{
	int id,target;
	char name[20];
	double salary,intensive,allowance,commission;
	Employee *e;
	SalesMan m1;
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
	m1.setId(id);	
	m1.setName(name);	
	m1.setSalary(salary);	
	m1.setTarget(target);
	m1.setIntense(intensive);
	e=&m1;	
	e->display();
	cout<<"\nCalculated salary is: "<<e->calSal();
	allEmployeeDetails(&m1);
	SalesMan m2(22,"pragati",50000,45,4500);
	e=&m2;
	e->display();
	cout<<"\nCalculated salary is: "<<e->calSal();
	allEmployeeDetails(&m2);
	Admin a1;
	cout<<"enter admin id:\n";
	cin>>id;
	cout<<"\nenter name of the admin:\n";
	cin>>name;
	cout<<"\nenter salary of admin:\n";
	cin>>salary;
	cout<<"\nallowance for admin:\n";
	cin>>allowance;
	a1.setId(id);	
	a1.setName(name);	
	a1.setSalary(salary);
	a1.setAllow(allowance);	
	e=&a1;
	e->display();	
	cout<<"\nCalculated salary is: "<<e->calSal();
	allEmployeeDetails(&a1);
	Admin a2(101,"pragati",50000,4500);
	e=&a2;
	e->display();
	cout<<"\nCalculated salary is: "<<e->calSal();
	allEmployeeDetails(&a2);
	HrManager h1;
	cout<<"\nenter hr managers id:\n";
	cin>>id;
	cout<<"\nenter name of hr manager:\n";
	cin>>name;
	cout<<"\nenter salary of hr manager:\n";
	cin>>salary;
	cout<<"\nenter commission for hr manager:\n";
	cin>>commission;
	h1.setId(id);	
	h1.setName(name);	
	h1.setSalary(salary);
	h1.setComm(commission);	
	e=&h1;
	e->display();
	cout<<"\nCalculated salary is: "<<e->calSal();	
	allEmployeeDetails(&h1);
	HrManager h2(202,"pragati",50000,5000);	
	e=&h2;
	e->display();
	cout<<"\nCalculated salary is: "<<e->calSal();
	allEmployeeDetails(&h2);
	return 0;
}
void allEmployeeDetails(Employee *ep)
{
	cout<<"\nemployees detail: \nid: "<<ep->getId()<<"\nname: "<<ep->getName()<<"\nsalary: "<<ep->getSalary()<<"\n";
	SalesMan* sp=dynamic_cast<SalesMan*>(ep);
	if(sp!=0)
	cout<<"\nIncentive is: "<<sp->getIntense()<<"\n";
	Admin* ap=dynamic_cast<Admin*>(ep);
	if(ap!=0)
	cout<<"\nAllowance is: "<<ap->getAllow()<<"\n";
	HrManager* hp=dynamic_cast<HrManager*>(hp);
	if(hp!=0)
	cout<<"\nCommission is: "<<hp->getComm()<<"\n";
}
