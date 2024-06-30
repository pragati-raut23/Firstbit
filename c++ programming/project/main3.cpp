#include "search.h"
int n;
int main()
{
	Employee *e;
	int id,i,ans;
	char name[20];
	double salary;
	cout<<"\nEnter no of employees: ";
	cin>>n;
	e=new Employee[n];
	for(i=0;i<n;i++)
	{
		e[i].display();
		cout<<"\nenter employee id:\n";
		cin>>id;
		cout<<"enter employee name: \n";
		cin>>name;
		cout<<"enter employee salary: \n";
		cin>>salary;
		e[i].setId(id);
		e[i].setName(name);
		e[i].setSalary(salary);
		e[i].display();
	}
	cout<<"\nEnter employee name to search: ";
	cin>>name;
	ans=search(e,name);
	if(ans==-1)
	cout<<"\nEmployee name not found\n";
	else
		{
		cout<<"\nEmployee name found at "<<ans<<" location\n";
		e[ans].display();
		}
	
	Employee *e1;	
	e1=new Employee(42,"pragati",60000);
	e1->display();
	return 0;
}
