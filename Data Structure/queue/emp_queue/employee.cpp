#include"employee.h"
	Employee :: Employee()	
	{
		this->emp_id=0;
		strcpy(this->name,"not_given");
		this->salary=0;
	}
	Employee :: Employee(int i,const char* n,double s)
	{
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
