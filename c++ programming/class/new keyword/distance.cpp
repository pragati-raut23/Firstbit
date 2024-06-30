using namespace std;
#include<iostream>
int n;
class Distance
{
	int feet,inch;
	public:
	Distance()
	{
		cout<<"\n\ndefault constructor called\n";
		this->feet=-1;
		this->inch=-1;
	}
	Distance(int f,int i)
	{
		cout<<"\n\nparameterised constructor called\n";
		this->feet=f;
		this->inch=i;
	}
	void setFeet(int f)	//setter(mutator)
	{
		this->feet=f;
	}
	void setInch(int i)		//setter(mutator)
	{
		this->inch=i;
	}
	int getFeet()	//getter(accessor)
	{
		return this->feet;
	}
	int getInch()	//getter(accessor)
	{
		return this->inch;
	}
	void display()
	{
		cout<<"\ndistance is: "<<this->feet<<"feet and "<<this->inch<<"inches\n";
	}
};
int search(Distance*,Distance);
int main()
{
	Distance *d;
	Distance ds;
	int feet,inch;
	int i,ans;
	cout<<"\nEnter no of distance to store: ";
	cin>>n;
	d=new Distance[n];
	for(i=0;i<n;i++)
	{
		d[i].display();
		cout<<"\nenter distance in feet:\n";
		cin>>feet;
		cout<<"\nenter distance in inch:\n";
		cin>>inch;
		d[i].setFeet(feet);
		d[i].setInch(inch);	
		d[i].display();
	}
	cout<<"\nEnter distance to search (in feet and inch): ";
	cin>>feet>>inch;
	ds.setFeet(feet);
	ds.setInch(inch);
	ans=search(d,ds);
	if(ans!=-1)
	{
		cout<<"\nDistance found at "<<ans<<" location\n";
		d[ans].display();
	}
	Distance *d1;
	d1=new Distance(5,2);
	d1->display();
	return 0;
}
int search(Distance* d,Distance ds)
{
	int i,count=0;
	for(i=0;i<n;i++)
	{
		if(d[i].getFeet()==ds.getFeet()&&d[i].getInch()==ds.getInch())
		{
			count++;
			break;
		}
	}
	if(count!=0)
	return i;
	else
	return 0;
}
