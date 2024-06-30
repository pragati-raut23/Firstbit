using namespace std;
#include<iostream>
#include<string.h>
int n;
struct HrManager
{
	int id;
	char name[20];
	double salary,commission;
	HrManager()
	{
		cout<<"\n\ndefault constructor called\n";
		this->id=0;
		strcpy(this->name,"not_given");
		this->salary=0;
		this->commission=0;
	}
	HrManager(int i,const char* n,double s,double c)
	{
		cout<<"\n\nparameterised constructor called\n";
		this->id=i;
		strcpy(this->name,n);
		this->salary=s;
		this->commission=c;
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
	void setComm(double c)		//setters(mutator)
	{
		this->commission=c;
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
	double getComm()	//getters(accessor)
	{
		return this->commission;
	}
	void display()
	{
		cout<<"\nHR Managers detail: \nid: "<<this->id<<"\tName: "<<this->name<<"\tSalary: "<<this->salary<<"\tCommission: "<<this->commission<<"\n";
	}
};
int search(HrManager*,char*);
int main()
{
	HrManager *h;
	int id,i,ans;
	char name[20];
	double salary,commission;
	cout<<"\nEnter no of HR manager ";
	cin>>n;
	h=new HrManager[n];
	for(i=0;i<n;i++)
	{
		h[i].display();	
		cout<<"\nenter hr managers id:\n";
		cin>>id;
		cout<<"\nenter name of hr manager:\n";
		cin>>name;
		cout<<"\nenter salary of hr manager:\n";
		cin>>salary;
		cout<<"\nenter commission for hr manager:\n";
		cin>>commission;
		h[i].setId(id);	
		h[i].setName(name);	
		h[i].setSalary(salary);	
		h[i].setComm(commission);	
		h[i].display();
	}
	cout<<"\nEnter HR managers name to search: ";
	cin>>name;
	ans=search(h,name);
	if(ans!=-1)
	{
		cout<<"\nName found at "<<ans<<" location\n";
		h[ans].display();
	}
	else
	cout<<"\nName not found\n";
	HrManager *h1;
	h1=new HrManager(42,"pragati",60000,5000);
	h1->display();
	return 0;
}
int search(HrManager* h,char* nm)
{
	int i,count=0,j;
	for(i=0;i<n;i++)
	{
		j=strcmp(h[i].getName(),nm);
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
