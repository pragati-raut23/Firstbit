#include"time.h"
	Time :: Time()
	{
		cout<<"\n\ndefault constructor called\n";
		this->hr=-1;
		this->min=-1;
		this->sec=-1;
	}
	Time :: Time(int h,int m,int s)
	{
		cout<<"\n\nparameterised constructor called\n";
		this->hr=h;
		this->min=m;
		this->sec=s;
	}
	Time :: Time(Time& t)
	{
		this->hr=t.hr;
		this->min=t.min;
		this->sec=t.sec;
	}
	void Time :: setHour(int h)		//setter(mutator)
	{
		this->hr=h;
	}
	void Time :: setMin(int m)		//setter(mutator)
	{
		this->min=m;
	}
	void Time :: setSec(int s)		//setter(mutator)
	{
		this->sec=s;
	}
	int Time :: getHour()		//getter(accessor)
	{
		return this->hr;
	}
	int Time :: getMin()	//getter(accessor)
	{
		return this->min;
	}
	int Time :: getSec()	//getter(accessor)
	{
		return this->sec;
	}
	void Time :: display()
	{
		cout<<"\ntime is: "<<this->hr<<":"<<this->min<<":"<<this->sec;
	}
