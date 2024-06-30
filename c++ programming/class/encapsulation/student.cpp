using namespace std;
#include<iostream>
#include<string.h>
class student
{
	int roll_no;
	char name[20];
	public:
	void setroll(int r)
	{
		this->roll_no=r;
	}
	void setname(const char* n)
	{
		strcpy(this->name,n);
	}
	void display()
	{
		cout<<"roll no "<<this->roll_no<<" is "<<this->name<<"\n";
	}
};
int main()
{
	student s1;
	int roll_no;
	char name[20];
	cout<<"enter roll no of student: ";
	cin>>roll_no;
	cout<<"enter name of the student: ";
	cin>>name;
	s1.setroll(roll_no);
	s1.setname(name);
	s1.display();
	return 0;
}

