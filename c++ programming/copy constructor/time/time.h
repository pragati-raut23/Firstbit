#include<iostream>
using namespace std;
class Time
{
	int hr,min,sec;
	public:
		Time();
		Time(int,int,int);
		Time(Time&);
		void setHour(int);
		void setMin(int);
		void setSec(int);
		int getHour();
		int getMin();
		int getSec();
		void display();
};
