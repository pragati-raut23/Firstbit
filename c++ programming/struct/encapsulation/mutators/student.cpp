#include<stdio.h>
#include<string.h>
struct student
{
	int roll_no;
	char name[20];
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
		printf("roll no %d is %s",this->roll_no,this->name);
	}
};
int main()
{
	student s1;
	int roll_no;
	char name[20];
	printf("enter roll no of student: ");
	scanf("%d",&roll_no);
	printf("enter name of the student: ");
	scanf("%s",&name);
	s1.setroll(roll_no);
	s1.setname(name);
	s1.display();
	return 0;
}

