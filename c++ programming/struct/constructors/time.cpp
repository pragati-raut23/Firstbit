using namespace std;
#include<iostream>
struct Time
{
	int hr,min,sec;
	Time()
	{
		cout<<"\n\ndefault constructor called\n";
		this->hr=-1;
		this->min=-1;
		this->sec=-1;
	}
	Time(int h,int m,int s)
	{
		cout<<"\n\nparameterised constructor called\n";
		this->hr=h;
		this->min=m;
		this->sec=s;
	}
	void setHour(int h)		//setter(mutator)
	{
		this->hr=h;
	}
	void setMin(int m)		//setter(mutator)
	{
		this->min=m;
	}
	void setSec(int s)		//setter(mutator)
	{
		this->sec=s;
	}
	int getHr()		//getter(accessor)
	{
		return this->hr;
	}
	int getMin()	//getter(accessor)
	{
		return this->min;
	}
	int getSec()	//getter(accessor)
	{
		return this->sec;
	}
	void display()
	{
		cout<<"\ntime is: "<<this->hr<<":"<<this->min<<":"<<this->sec;
	}
};
int main()
{
	Time t1;
	int hr,min,sec;
	int r,q;
	t1.display();	//member function
	cout<<"\nenter hours:\n";
	cin>>hr;
	cout<<"\nenter minuits:\n";
	cin>>min;
	cout<<"\nenter seconds:\n";
	cin>>sec;
	if(sec>=60)
	{
		r=sec%60;
		q=sec/60;
		sec=r;
		min=min+q;
	}
	if(min>=60)
	{
		r=min%60;
		q=min/60;
		min=r;
		hr=hr+q;
	}
	t1.setSec(sec);		//member function
	t1.setMin(min);		//member function
	t1.setHour(hr);		//member function
	cout<<"\nafter setting value\n";
	t1.display();	//member function
	cout<<"\ngetter\nhour: "<<t1.getHr()<<"\nmin: "<<t1.getMin()<<"\nsec: "<<t1.getSec()<<"\n";
	Time t3;
	t3.display();
	t3.setSec(40);		//member function
	t3.setMin(56);		//member function
	t3.setHour(7);		//member function
	cout<<"\nafter setting value\n";
	t3.display();	//member function
	cout<<"\ngetter\nhour: "<<t3.getHr()<<"\nmin: "<<t3.getMin()<<"\nsec: "<<t3.getSec()<<"\n";
	Time t2(10,49,55);		//member function
	t2.display();	//member function
	cout<<"\ngetter\nhour: "<<t1.getHr()<<"\nmin: "<<t1.getMin()<<"\nsec: "<<t1.getSec()<<"\n";
	return 0;
}
