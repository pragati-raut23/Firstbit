#include<stdio.h>
struct date
{
	int day,month,year;
};
void display(date*);
int main()
{
	date d1;
	printf("enter your birth date: ");
	scanf("%d",&d1.day);
	printf("enter your birth month: ");
	scanf("%d",&d1.month);
	printf("enter your birth year: ");
	scanf("%d",&d1.year);
	display(&d1);
	return 0;
}
void display(date *d1)
{
	printf("\n\n birth date is: \n %d/%d/%d",d1->day,d1->month,d1->year);
}
