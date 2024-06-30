using namespace std;
#include<iostream>
#include<string.h>
class Employee
{
	int emp_id;
	char name[20];
	double salary;
	static int count;
	public:
	
	Employee();
	Employee(int ,const char* ,double );
	void setId(int);
	void setName(const char*);
	void setSalary(double);
	int getId();
	char* getName();
	double getSalary();
	void display();
//  static void displayCount();
};
