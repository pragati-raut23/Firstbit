using namespace std;
#include<iostream>
int n;
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
int search(Date*,Date);
int main()
{
	Date *d;
	Date dt;
	int day,month,year;
	int i,ans;
	cout<<"\nEnter no of dates to store: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		d[i].display();	
		cout<<"\nenter date: ";
		cin>>day;
		cout<<"\nenter month: ";
		cin>>month;
		cout<<"\nenter year: ";
		cin>>year;
		d[i].setDay(day);		
		d[i].setMonth(month);		
		d[i].setYear(year);
		d[i].display();		
	}
	cout<<"\nEnter date to search(dd/mm/yy): ";
	cin>>day>>month>>year;
	dt.setDay(day);
	dt.setMonth(month);
	dt.setYear(year);
	ans=search(d,dt);
	if(ans!=-1)
	{
		cout<<"\nDate found at "<<ans<<" location\n";
		d[ans].display();
	}
	else
	cout<<"\nDate not found\n";
	Date *d1;
	d1=new Date(23,4,2001);
	d1->display();
	return 0;
}
int search(Date* d,Date dt)
{
	int i,count=0;
	for(i=0;i<n;i++)
	{
		if(d[i].getDay()==dt.getDay()&&d[i].getMonth()==dt.getMonth()&&d[i].getYear()==dt.getYear())
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
