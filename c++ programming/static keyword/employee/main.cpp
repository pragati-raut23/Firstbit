#include "employee.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	//Employee::displayCount();
	Employee e1;
	int emp_id;
	char name[20];
	double salary;
	e1.display();	//member function
	cout<<"\nenter employee id:\n";
	cin>>emp_id;
	cout<<"enter employee name: \n";
	cin>>name;
	cout<<"enter employee salary: \n";
	cin>>salary;
	e1.setId(emp_id);	//member function
	e1.setName(name);	//member function
	e1.setSalary(salary);	//member function
	cout<<"\nafter setting values\n";
	Employee e3;
	e3.setId(401);	//member function
	e3.setName("sachin");	//member function
	e3.setSalary(60000);	//member function
	Employee e2(22,"pragati",50000);	//member function
	cout<<"\nTotal count = "<<Employee::count;
	return 0;
}

