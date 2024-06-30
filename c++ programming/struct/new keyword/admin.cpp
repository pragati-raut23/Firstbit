using namespace std;
#include<iostream>
#include<string.h>
int n;
struct Admin
{
	int id;
	char name[20];
	double salary,allowance;
	Admin()
	{
		cout<<"\n\ndefault constructor called\n";
		this->id=0;
		strcpy(this->name,"not_given");
		this->salary=0;
		this->allowance=0;
	}
	Admin(int i,const char* n,double s,double a)
	{
		cout<<"\n\nparameterised constructor called\n";
		this->id=i;
		strcpy(this->name,n);
		this->salary=s;
		this->allowance=a;
	}
	void setId(int i)	//setters(mutator)
	{
		this->id=i;
	}
	void setName(const char* n)		//setters(mutator)
	{
		strcpy(this->name,n);
	}
	void setSalary(double s)	//setters(mutator)
	{
		this->salary=s;
	}
	void setAllow(double a)		//setters(mutator)
	{
		this->allowance=a;
	}
	int getId()		//getters(accessor)
	{
		return this->id;
	}
	char* getName()		//getters(accessor)
	{
		return this->name;
	}
	double getSalary()		//getters(accessor)
	{
		return this->salary;
	}
	double getAllow()	//getters(accessor)
	{
		return this->allowance;
	}
	void display()
	{
		cout<<"\nadmins details:\nid: "<<this->id<<"\tname: "<<this->name<<"\tsalary: "<<this->salary<<"\tallowance: "<<this->allowance<<"\n";
	}
};
int search(Admin*,char*);
int main()
{
	Admin *a;
	int id,i,ans;
	char name[20];
	double salary,allowance;
	cout<<"\nEnter no of admin: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		a[i].display();
		cout<<"enter admin id:\n";
		cin>>id;
		cout<<"\nenter name of the admin:\n";
		cin>>name;
		cout<<"\nenter salary of admin:\n";
		cin>>salary;
		cout<<"\nallowance for admin:\n";
		cin>>allowance;
		a[i].setId(id);	
		a[i].setName(name);	
		a[i].setSalary(salary);	
		a[i].setAllow(allowance);	
		cout<<"\nafter setting values\n";
		a[i].display();
	}
	cout<<"\nEnter admin name to search: ";
	cin>>name;	
	ans=search(a,name);
	if(ans!=-1)
	{
		cout<<"\nAdmin name found at "<<ans<<" location\n";
		a[ans].display();
	}
	else
		cout<<"\nName not found\n";
	Admin *a1;
	a1=new Admin(42,"pragati",60000,5000);
	a1->display();
	return 0;
}
int search(Admin* a,char* nm)
{
	int i,count=0,j;
	for(i=0;i<n;i++)
	{
		j=strcmp(a[i].getName(),nm);
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
