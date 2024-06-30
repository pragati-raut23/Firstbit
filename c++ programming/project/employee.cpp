#include "employee.h"
#include "salesman.h"
#include "admin.h"
#include "hr.h"
Employee::	Employee()	
	{
		cout<<"\n\nEmp default constructor called\n";
		this->emp_id=0;
		strcpy(this->name,"not_given");
		this->salary=0;
	}
Employee::	Employee(int i,const char* n,double s)
	{
		cout<<"\n\nEmp parameterised called\n";
		this->emp_id=i;
		strcpy(this->name,n);
		this->salary=s;
	}
	void Employee :: setId(int i)	//setters(mutators)
	{
		this->emp_id=i;
	}
	void Employee :: setName(const char* n)	//setters(mutators)
	{
		strcpy(this->name,n);
	}
	void Employee :: setSalary(double s)	//setters(mutators)
	{
		this->salary=s;
	}
	int Employee :: getId()	//getters(accessors)
	{
		return this->emp_id;
	}
	char* Employee :: getName()	//getters(accessors)
	{
		return this->name;
	}
	double Employee :: getSalary()	//getters(accessors)
	{
		return this->salary;
	}
	void Employee :: display()	
	{
		cout<<"\nemployees detail: \nid: "<<this->emp_id<<"\tname: "<<this->name<<"\tsalary: "<<this->salary<<"\n";
	}
	double Employee :: calSal()
	{
		return salary;
	}
	SalesMan :: SalesMan():Employee()	//step 2(a)- default constructor of Sales manager and call given to default constructor of Employee
	{
		cout<<"\n\nSM default constructor called\n";
		this->target=0;
		this->incentive=0;
	}
	SalesMan :: SalesMan(int i,const char* n,double s,int t,int in):Employee(i,n,s)		//step 2(b) parameterised constructor of Sales manager and call given to parameterised constructor of Employee
	{
		cout<<"\n\nSM parameterised constructor called\n";
		this->target=t;
		this->incentive=in;
	}
	void SalesMan :: setTarget(int t)		//extra setters(mutator) required for Sales manager
	{
		this->target=t;
	}
	void SalesMan :: setIncentive(double in)		//extra setters(mutator) required for Sales manager
	{
		this->incentive=in;
	}
	int SalesMan :: getTarget()		//extra getters(accessor) required for sales manager
	{
		return this->target;
	}
	double SalesMan :: getIncentive()		//extra getters(accessor) required for sales manager
	{
		return this->incentive;
	}
	void SalesMan :: display()
	{
		Employee::display();	//step 3- call given to display function of Employee class
		cout<<"\ntarget: "<<this->target<<"\tintensive: "<<this->incentive;
	}
	double SalesMan :: calSal()		//different implementation
	{
		return getSalary()+incentive;
	}

	Admin :: Admin():Employee()	//step 2(a)-default constructor of Admin and call given to default constructor of Employee
	{
		cout<<"\n\nAdmin default constructor called\n";
		this->allowance=0;
	}
	Admin :: Admin(int i,const char* n,double s,double a):Employee(i,n,s)	//step 2(b)-parameterised constructor of Admin and call given to parameterised constructor of Employee
	{
		cout<<"\n\nAdmin parameterised constructor called\n";
		this->allowance=a;
	}
	void Admin :: setAllow(double a)		//extra setters(mutator) required for Admin
	{
		this->allowance=a;
	}
	double Admin :: getAllow()	//extra getters(accessor) required for Admin
	{
		return this->allowance;
	}
	void Admin :: display()	//step 3
	{
		Employee::display();	//call given to display function of Employee class
		cout<<"\tallowance: "<<this->allowance<<"\n";
	}
	double Admin :: calSal()		//different implementation
	{
		return getSalary()+allowance;
	}

	HrManager :: HrManager():Employee()	//step 2(a)-default constructor of HR manager and call given to default constructor of Employee
	{
		cout<<"\n\nHR default constructor called\n";
		this->commission=0;
	}
	HrManager :: HrManager(int i,const char* n,double s,double c):Employee(i,n,s)	//step 2(b)-parameterised constructor of HR manager and call given to parameterised constructor of Employee
	{
		cout<<"\n\nHR parameterised constructor called\n";
		this->commission=c;
	}
	void HrManager :: setComm(double c)		//extra setters(mutator) required for HR manager
	{
		this->commission=c;
	}
	double HrManager :: getComm()	//extra getters(accessor) required for HR manager
	{
		return this->commission;
	}
	void HrManager :: display()	
	{
		Employee::display();	//step 3- call given to display function of Employee class
		cout<<"\tCommission: "<<this->commission<<"\n";
	}
	double HrManager :: calSal()		//different implementation
	{
		return getSalary()+commission;
	}
