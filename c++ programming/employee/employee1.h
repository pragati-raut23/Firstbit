using namespace std;
#include<iostream>
#include<string.h>
//#ifndef EMPLOYEE
//#define EMPLOYEE
class Employee
{
	int emp_id;
	char name[20];
	double salary;
	public:
	Employee()	;
	Employee(int i,const char* n,double s);
	void setId(int i);	//setters(mutators)
	void setName(const char* n)	;//setters(mutators)
	void setSalary(double s);	//setters(mutators)
	int getId()	;//getters(accessors)
	char* getName();	//getters(accessors)
	double getSalary();	//getters(accessors)
	void display()	;
};
//#endif