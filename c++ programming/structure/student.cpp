#include<stdio.h>
//passing structure variable to function(pass by address)
struct student
{
	int roll_no;
	char name[20];
};
void display(student*);
int main()
{
	student s1;
	printf("enter roll no of student: ");
	scanf("%d",&s1.roll_no);
	printf("enter name of the student: ");
	scanf("%s",&s1.name);
	display(&s1);
	return 0;
}
void display(student *s1)
{
	printf("roll no %d is %s",s1->roll_no,s1->name);
}
