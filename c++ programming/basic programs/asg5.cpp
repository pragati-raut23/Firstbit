#include<iostream>
using namespace std;
int main()
{
	float salary,basic,da,ta,hra;
	cout<<"Enter the basic salary of employee:\n";
	cin>>basic;
	if(basic<=5000)
	{
		da=basic*0.10;
		ta=basic*0.20;
		hra=basic*0.25;
	}
	else
	{
		da=basic*0.15;
		ta=basic*0.25;
		hra=basic*0.30;
	}
	salary=(basic+da+ta+hra);
	cout<<"\ntotal salary of the employee is: "<<salary;
}
