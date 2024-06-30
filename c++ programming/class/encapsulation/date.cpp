#include<stdio.h>
class date
{
	int day,month,year;
	public:
	void setday(int d)
	{
		this->day=d;
	}
	void setmonth(int m)
	{
		this->month=m;
	}
	void setyear(int y)
	{
		this->year=y;
	}
	void display()
	{
		printf("\n\n birth date is: \n %d/%d/%d",this->day,this->month,this->year);
	}
};
int main()
{
	date d1;
	int day,month,year;
	printf("enter your birth date: ");
	scanf("%d",&day);
	printf("enter your birth month: ");
	scanf("%d",&month);
	printf("enter your birth year: ");
	scanf("%d",&year);
	d1.setday(day);
	d1.setmonth(month);
	d1.setyear(year);
	d1.display();
	return 0;
}

