using namespace std;
#include<iostream>
#include<string.h>
extern int n;
class Employee
{
	int emp_id;
	char name[20];
	double salary;
	public:
	Employee();
	Employee(int ,const char* ,double );
	void setId(int );
	void setName(const char* );
	void setSalary(double );
	int getId();
	char* getName();
	double getSalary();
	void display();
};
int search(Employee*,char*);
