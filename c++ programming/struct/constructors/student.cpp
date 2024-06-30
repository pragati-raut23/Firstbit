using namespace std;
#include<iostream>
#include<string.h>
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
	Student(int r,const char* n)
	{
		char* ptr;
		cout<<"\n\nparameterised constructor called\n";
		this->roll_no=r;
		strcpy(this->name,n);
	}
	void setRoll(int r)		//setters(mumtator)
	{
		this->roll_no=r;
	}
	void setName( const char* n)
	{
		char* ptr="abc";
		n = ptr;
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
int main()
{
	Student *s = new Student(10,"xyz");
	//s->display();
	Student s1;
	int roll_no;
	char name[20];
	s1.display();
	cout<<"\nenter roll no of student: "<<"\n";
	cin>>roll_no;
	cout<<"\nenter name of the student: "<<"\n";
	cin>>name;
	s1.setRoll(roll_no);	//member function
	s1.setName(name);	//member function
	cout<<"\nafter setting value\n";
	s1.display();	//member function
	cout<<"\ngetter\n";
	cout<<"\nRoll no: "<<s1.getRoll() <<"\nName: "<<s1.getName()<<"\n";
	Student s3;
	s3.setRoll(10);
	s3.setName("sachin");
	printf("\nafter setting value\n");
	s3.display();	//member function
	cout<<"\ngetter\n";
	cout<<"\nRoll no: "<<s3.getRoll() <<"\nName: "<<s3.getName()<<"\n";
	Student s2(42,"pragati");	//member function
	s2.display();	//member function
	cout<<"\ngetter\n";
	cout<<"\nRoll no: "<<s2.getRoll()<<"\nname: "<<s2.getName()<<"\n";
	return 0;
}

