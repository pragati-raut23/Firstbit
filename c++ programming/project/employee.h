#ifndef employee
#define employee
//#pragma once
using namespace std;
#include<iostream>
#include<string.h>
class Employee		//Base class
{
	int emp_id;
	char name[20];
	double salary;
	public:
	Employee();
	Employee(int ,const char*,double );
	void setId(int );
	void setName(const char*);
	void setSalary(double );
	int getId();
	char* getName();
	double getSalary();
	virtual void display();
	virtual double calSal();
};
#endif
