using namespace std;
#include<iostream>
#include<string.h>
int n;
struct Student
{
	int roll_no;
	char name[20];
	Student()
	{
		cout<<"\n\ndefault constructor called\n";
		this->roll_no=0;
		strcpy(this->name,"not_given");
	}
	Student(int r,char* n)
	{
		cout<<"\n\nparameterised constructor called\n";
		this->roll_no=r;
		strcpy(this->name,n);
	}
	void setRoll(int r)		//setters(mumtator)
	{
		this->roll_no=r;
	}
	void setName(const char* n)
	{
		strcpy(this->name,n);	//setters(mumtator)
	}
	int getRoll()		//getters(accessors)
	{
		return this->roll_no;
	}
	char* getName()	//getters(accessors)
	{
		return this->name;
	}
	void display()	
	{
		cout<<"\nroll no "<<this->roll_no<<" is "<<this->name<<"\n";
	}
};
int search(Student*,int);
int main()
{
	Student *s;
	int roll,i,ans;
	char name[20];
	cout<<"\nEnter no of students: ";
	cin>>n;
	s=new Student[n];
	for(i=0;i<n;i++)
	{
		s[i].display();
		cout<<"\nEnter roll no of the student: ";
		cin>>roll;
		cout<<"\nEnter name of the student: ";
		cin>>name;
		s[i].setRoll(roll);
		s[i].setName(name);
		s[i].display();
	}
	cout<<"\nEnter roll no to search: ";
	cin>>roll;
	ans=search(s,roll);
	if(ans==-1)
	cout<<"\nroll number not found\n";
	else
	s[ans].display();
	Student *s1;
	s1=new Student(42,"pragati");
	s1->display();
	return 0;
}
int search(Student* s,int r)
{
	int i,count=0;
	for(i=0;i<n;i++)
	{
		if(s[i].getRoll()==r)
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
