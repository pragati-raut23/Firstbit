using namespace std;
#include<iostream>
#include<string.h>
int n;
struct SalesMan
{
	int id,target;
	char name[20];
	double salary,intensive;
	SalesMan()
	{
		cout<<"\n\ndefault constructor called\n";
		this->id=0;
		strcpy(this->name,"not_given");
		this->salary=0;
		this->target=0;
		this->intensive=0;
	}
	SalesMan(int i,const char* n,double s,int t,int in)
	{
		printf("\n\nparameterised constructor called\n");
		this->id=i;
		strcpy(this->name,n);
		this->salary=s;
		this->target=t;
		this->intensive=in;
	}
	void setId(int i)	//setters(mutator)
	{
		this->id=i;
	}
	void setName(const char* n)		//setters(mutator)
	{
		strcpy(this->name,n);
	}
	void setSalary(double s)		//setters(mutator)
	{
		this->salary=s;
	}
	void setTarget(int t)		//setters(mutator)
	{
		this->target=t;
	}
	void setIntense(double in)		//setters(mutator)
	{
		this->intensive=in;
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
	int getTarget()		//getters(accessor)
	{
		return this->target;
	}
	double getIntense()		//getters(accessor)
	{
		return this->intensive;
	}
	void display()
	{
		cout<<"\nsales managers details:\nid: "<<this->id<<"\tname: "<<this->name<<"\tsalary: "<<this->salary<<"\ttarget: "<<this->target<<"\tintensive: "<<this->intensive;
	}
};
int search(SalesMan*,char*);
int main()
{
	SalesMan *m;
	int id,target,i,ans;
	char name[20];
	double salary,intensive;
	cout<<"\nEnter no of sales manager: ";
	cin>>n;
	m=new SalesMan[n];
	for(i=0;i<n;i++)
	{
		m[i].display();	
		cout<<"enter sale managers id:\n";
		cin>>id;
		cout<<"\nenter the name of sales manager:\n";
		cin>>name;
		cout<<"\nenter salary of sales manager:\n";
		cin>>salary;
		cout<<"\nenter target of sales manager:\n";
		cin>>target;
		cout<<"\nenter intensive for target completion:\n";
		cin>>intensive;
		m[i].setId(id);	
		m[i].setName(name);		
		m[i].setSalary(salary);		
		m[i].setTarget(target);
		m[i].setIntense(intensive);	
		m[i].display();
	}
	cout<<"\nEnter sales mans name to search: ";
	cin>>name;
	ans=search(m,name);
	if(ans!=-1)
	{
		cout<<"\nName found at "<<ans<<" location\n";
		m[ans].display();
	}
	else
		cout<<"\nName not found\n";
	SalesMan *m1;
	m1=new SalesMan(42,"pragati",60000,40,5000);
	m1->display();
	return 0;
}
int search(SalesMan* m,char* nm)
{
	int i,count=0,j;
	for(i=0;i<n;i++)
	{
		j=strcmp(m[i].getName(),nm);
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
