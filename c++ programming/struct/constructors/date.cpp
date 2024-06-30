using namespace std;
#include<iostream>
struct Date
{
	int day,month,year;
	Date()
	{
		cout<<"\n\ndefault constructor called\n";
		this->day=0;
		this->month=0;
		this->year=0;
	}
	Date(int d,int m,int y)
	{
		cout<<"\n\nparameterised constructor called\n";
		this->day=d;
		this->month=m;
		this->year=y;
	}
	void setDay(int d)	//setter(mutator)
	{
		this->day=d;
	}
	void setMonth(int m)	//setter(mutator)
	{
		this->month=m;
	}
	void setYear(int y)		//setter(mutator)
	{
		this->year=y;
	}
	int getDay()	//getters(accessor)
	{
		return this->day;
	}
	int getMonth()		//getters(accessor)
	{
		return this->month;
	}
	int getYear()		//getters(accessor)
	{
		return this->year;
	}
	void display()
	{
		cout<<"\n\ndate is: \n"<<this->day<<"/"<<this->month<<"/"<<this->year<<"\n";
	}
};
int main()
{
	Date d1;
	int day,month,year;
	d1.display();	//member function
	cout<<"\nenter date: ";
	cin>>day;
	cout<<"\nenter month: ";
	cin>>month;
	cout<<"\nenter year: ";
	cin>>year;
	d1.setDay(day);		//member function
	d1.setMonth(month);		//member function
	d1.setYear(year);		//member function
	cout<<"\nafter setting values\n";
	d1.display();	//member function
	cout<<"\ngetter\ndate: "<<d1.getDay()<<"\nmonth: "<<d1.getMonth()<<"\nyear: "<<d1.getYear()<<"\n";
	Date d3;
	d3.display();
	d3.setDay(4);		//member function
	d3.setMonth(10);		//member function
	d3.setYear(2018);		//member function
	cout<<"\nafter setting values\n";
	d1.display();	//member function
	cout<<"\ngetter\ndate: "<<d1.getDay()<<"\nmonth: "<<d1.getMonth()<<"\nyear: "<<d1.getYear()<<"\n";
	Date d2(23,4,2001);		//member function
	d2.display();
	cout<<"\ngetter\ndate: "<<d2.getDay()<<"\nmonth: "<<d2.getMonth()<<"\nyear: "<<d2.getYear()<<"\n";
	return 0;
}

