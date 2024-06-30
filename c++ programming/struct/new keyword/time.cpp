using namespace std;
#include<iostream>
int n;
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
int search(Time*,Time);
int main()
{
	Time *t;
	Time tm;
	int hr,min,sec;
	int r,q,i,ans;
	cout<<"\nEnter no of time slot to store: ";
	cin>>n;
	t=new Time[n];
	for(i=0;i<n;i++)
	{
		t[i].display();
		cout<<"\nenter hours:\n";
		cin>>hr;
		cout<<"\nenter minuits:\n";
		cin>>min;
		cout<<"\nenter seconds:\n";
		cin>>sec;
		t[i].setSec(sec);	
		t[i].setMin(min);		
		t[i].setHour(hr);		
		t[i].display();	
	}
	cout<<"\nEnter time slot to search(hr/min/sec): ";
	cin>>hr>>min>>sec;
	tm.setHour(hr);
	tm.setMin(min);
	tm.setSec(sec);
	ans=search(t,tm);
	if(ans!=-1)
	{
		cout<<"\nTime slot found at "<<ans<<" location\n";
		t[ans].display();
	}
	Time *t1;
	t1=new Time(10,49,55);
	t1->display();
	return 0;
}
int search(Time* t,Time tm)
{
	int i,count=0;
	for(i=0;i<n;i++)
	{
		if(t[i].getHr()==tm.getHr()&&t[i].getMin()==tm.getMin()&&t[i].getSec()==tm.getSec())
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
