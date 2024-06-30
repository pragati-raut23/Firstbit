#include "search.h"
	Employee :: Employee()	
	{
		cout<<"\n\ndefault constructor called\n";
		this->emp_id=0;
		strcpy(this->name,"not_given");
		this->salary=0;
	}
	Employee :: Employee(int i,const char* n,double s)
	{
		cout<<"\n\nparameterised called\n";
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
	int search(Employee *e,char* nm)
	{
		int i,count=0,j;
		for(i=0;i<n;i++)
		{
			j=strcmp(e[i].getName(),nm);
			if(j==1)
			{
				count++;
				break;
			}
		}
		if(count!=0)
		return i;
		else
		return -1;
	}
