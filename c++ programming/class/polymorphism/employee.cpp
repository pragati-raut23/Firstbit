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
	Employee(int emp_id,const char* name,double salary)
	{
		cout<<"\n\nEmp parameterised called\n";
		this->emp_id=emp_id;
		strcpy(this->name,name);
		this->salary=salary;
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
	virtual double calSal()=0;	// pure virtual / abstract function
//	{
//		return salary;
//	}
};
class SalesMan: public Employee	//step 1
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
		cout<<"\ntarget: "<<this->target<<"\tintensive: "<<this->intensive;
	}
	virtual double calSal()		//different implementation
	{
		cout<<"sm calsal";
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
//Employee* store(int);
int main()
{
	Employee *ep[5];
	ctr=0;
	SalesMan s1;
	Admin a1;
	HrManager h1;
	ep[ctr++]=&s1;
	ep->setId(23);
	cout<<"\n"<<ep->getId();
	ep[ctr++]=&a1;
	ep->setId(15);
	ep[ctr++]=&h1;
	ep->setId(30);

//	Admin *ap=(Admin*)ep;
	Admin *sp= dynamic_cast<Admin*> (ep);
	if(sp!=NULL){
		cout<<"\nIt is admin object";
//		sp->setTarget(150);
//		cout<<"\n"<<sp->getTarget();
	}
	else{
		cout<<"\nThis is not a admin object";
	}
	
//	s1.setIntense(23);
//	int id,target;
//	char name[20];
//	double salary,intensive,allowance,commission;
//	SalesMan m1,m2;
//	Employee *e[2]={&m1,&m2};
//	e=sm;
//	e.calSal();
//	Employee e1;
//	Employee e2(42,"pragati",60000);
//	e=&e2;
//	e->display();
//	
//	cout<<"enter sale managers id:\n";
//	cin>>id;
//	cout<<"\nenter the name of sales manager:\n";
//	cin>>name;
//	cout<<"\nenter salary of sales manager:\n";
//	cin>>salary;
//	cout<<"\nenter target of sales manager:\n";
//	cin>>target;
//	cout<<"\nenter intensive for target completion:\n";
//	cin>>intensive;
//	m1.setId(id);	
//	m1.setName(name);	
//	m1.setSalary(salary);	
//	m1.setTarget(target);
//	m1.setIntense(intensive);
//	e=&m1;	
//	e->display();
//	cout<<"\nCalculated salary is: "<<e->calSal();
//	SalesMan m2(22,"pragati",50000,45,4500);
//	e=&m2;
//	e->display();
//	cout<<"\nCalculated salary is: "<<e->calSal();
//	Admin a1;
//	cout<<"enter admin id:\n";
//	cin>>id;
//	cout<<"\nenter name of the admin:\n";
//	cin>>name;
//	cout<<"\nenter salary of admin:\n";
//	cin>>salary;
//	cout<<"\nallowance for admin:\n";
//	cin>>allowance;
//	a1.setId(id);	
//	a1.setName(name);	
//	a1.setSalary(salary);
//	a1.setAllow(allowance);	
//	e=&a1;
//	e->display();	
//	cout<<"\nCalculated salary is: "<<e->calSal();
//	Admin a2(101,"pragati",50000,4500);
//	e=&a2;
//	e->display();
//	cout<<"\nCalculated salary is: "<<e->calSal();
//	HrManager h1;
//	cout<<"\nenter hr managers id:\n";
//	cin>>id;
//	cout<<"\nenter name of hr manager:\n";
//	cin>>name;
//	cout<<"\nenter salary of hr manager:\n";
//	cin>>salary;
//	cout<<"\nenter commission for hr manager:\n";
//	cin>>commission;
//	h1.setId(id);	
//	h1.setName(name);	
//	h1.setSalary(salary);
//	h1.setComm(commission);	
//	e=&h1;
//	e->display();
//	cout<<"\nCalculated salary is: "<<e->calSal();	
//	HrManager h2(202,"pragati",50000,5000);	
//	e=&h2;
//	e->display();
//	cout<<"\nCalculated salary is: "<<e->calSal();
//Employee* emp[5];
//
//Employee* emp1[5];
//emp1[0]= new SalesMan(101,"sm",43,4,5);
//emp1[1]=new Admin(102,"admin",345,4);
//
//int i;
//int ch;
//for(i=0;i<5;i++)
//{
//	cout<<"enter choice";
//	cin>>ch;
//	emp[i]=store(ch);
//}
//
//
//for(i=0;i<5;i++)
//{
//	//if(strcmp(typeid(*emp[i]).name(),typeid(SalesMan).name())==0)
//	SalesMan *sm=dynamic_cast<SalesMan*>(emp[i]);
//	if(sm!=NULL)
//	cout<<"in if sales man\n";
//}
//
//cout<<"\n"<<typeid(*emp[1]).name();
//cout<<"\n"<<typeid(*emp[2]).name();
//cout<<"\n"<<typeid(*emp[3]).name();
//cout<<"\n\n"<<typeid(*emp[4]).name();
//
//cout<<"\n"<<typeid(*emp1[0]).name();
//cout<<"\n"<<typeid(*emp1[1]).name();

//emp[0]=&m2;
//emp[1]=&e2;
//emp[2]=&a2;
//
//      typeid(emp[0]);

	return 0;
}
//Employee * store(int ch)
//{
//	if(ch==1)
//	 return new SalesMan(1,"sales",3434,43,4);
//	 if(ch==2)
//	 return new Employee(1,"Employee",3434);
//	 if(ch==3)
//	 return new Admin(1,"admin",3434,43);
//}