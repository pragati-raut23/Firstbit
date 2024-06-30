#include<iostream>
using namespace std;
#include<string.h>

class Student
{
	char name[20];
	int age;
	public:
		Student()
		{
			strcpy(this->name,"not_given");
			this->age=0;
		}
		
		Student(char* name,int age)
		{
			strcpy(this->name,name);
			this->age=age;
		}
		
		void display()
		{
			cout<<"Name: "<<this->name<<"\tAge: "<<this->age<<"\n";
		}
};
int main()
{
	Student arr[]={Student("pragati",22),Student("aadesh",16)};
	int i;
	for(i=0;i<2;i++)
	{
		arr[i].display();
	}
}
