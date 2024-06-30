#include "employee.h"
#include "salesman.h"
#include "admin.h"
#include "hr.h"

int main()
{
	int id,target;
	char name[20];
	double salary,incentive,allowance,commission;
	Employee *e;
	Employee e1;
	Employee e2(42,"pragati",60000);
	e=&e2;
	e->display();
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
	cin>>incentive;
	m1.setId(id);	
	m1.setName(name);	
	m1.setSalary(salary);	
	m1.setTarget(target);
	m1.setIncentive(incentive);
	e=&m1;	
	e->display();
	cout<<"\nCalculated salary is: "<<e->calSal();
	SalesMan m2(22,"pragati",50000,45,4500);
	e=&m2;
	e->display();
	cout<<"\nCalculated salary is: "<<e->calSal();
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
	Admin a2(101,"pragati",50000,4500);
	e=&a2;
	e->display();
	cout<<"\nCalculated salary is: "<<e->calSal();
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
	HrManager h2(202,"pragati",50000,5000);	
	e=&h2;
	e->display();
	cout<<"\nCalculated salary is: "<<e->calSal();
	return 0;
}

