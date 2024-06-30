#include<iostream>
using namespace std;
#include<string.h>
#include<sstream>
struct Date
{
		int day,month,year;
		Date()
		{
			this->day=0;
			this->month=0;
			this->year=0;
		}
		Date(int d,int m,int y)
		{
			this->day=d;
			this->month=m;
			this->year=y;
		}
		void setDay(int d)
		{
			this->day=d;
		}
		void setMonth(int m)
		{
			this->month=m;
		}
		void setYear(int y)
		{
			this->year=y;
		}
		int getDay()
		{
			return this->day;
		}
		int getMonth()
		{
			return this->month;
		}
		int getYear()
		{
			return this->year;
		}
		void display()
		{
			cout<<"\nDate:\t"<<this->day<<"/"<<this->month<<"/"<<this->year<<"\n";
		}
};
struct Number
{
	int no;
	Number()
	{
		this->no=-1;
	}
	Number(int t)
	{
		this->no=t;
	}
	void setNo(int t)
	{
		this->no=t;
	}
	int getNo()
	{
		return this->no;
	}
	char* convert(int t)
	{
		char num[10];
		switch(t)
		{
			case 1:
				strcpy(num,"one");
				break;
			case 2:
				strcpy(num,"two");
				break;
			case 3:
				strcpy(num,"three");
				break;
			case 4:
				strcpy(num,"four");
				break;
			case 5:
				strcpy(num,"five");
				break;
			case 6:
				strcpy(num,"six");
				break;
			case 7:
				strcpy(num,"seven");
				break;
			case 8:
				strcpy(num,"eight");
				break;
			case 9:
				strcpy(num,"nine");
				break;
			default:
				cout<<"\nInvalid!"<<"\n";
		}
		return num;
	}
	int show(int d)
	{
		int temp;
		temp=this->no+d;
		return temp;
	}
	char* show(const char* s)
	{
		char temp[10];
		
		strcpy(temp,convert(this->no));
		strcat(temp,s);
		//strcat(this->no,s);
		return temp;
	}
	char* show(int n,const char* s)
	{
		char temp[10];
		strcpy(temp,convert(n));
		//temp[1]=n;
		strcat(temp,s);
		return temp;
	}
	Date show(Date dt)
	{
		Date temp;
		temp.day=dt.day+this->no;
		temp.month=dt.month+this->no;
		temp.year=dt.year+this->no;
		return temp;
	}
	Date show(int n,Date dt)
	{
		Date temp;
		temp.day=dt.day+n;
		temp.month=dt.month+n;
		temp.year=dt.year+n;
		return temp;
	}
};
int main()
{
	Number num(7);
	Date dt(22,2,2023);
	int res1=num.show(20);
	cout<<"\nResult 1 is: "<<res1<<"\n";
	char res2[10],res3[10];
	strcpy(res2,num.show("fbs"));
	cout<<"\nResult 2 is: "<<res2<<"\n";
	strcpy(res3,num.show(2,"cpp"));
	cout<<"\nResult 3 is: "<<res3<<"\n";
	Date d1,d2;
	d1=num.show(dt);
	d1.display();
	d2=num.show(3,dt);
	d2.display();
	return 0;
}
