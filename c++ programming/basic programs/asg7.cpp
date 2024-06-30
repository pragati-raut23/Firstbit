#include<iostream>
using namespace std;
int main()
{
	int num1,num2,num3;
	cout<<"\nEnter 3 numbers:\n";
	cin>>num1>>num2>>num3;
	if(num1>num2)
	{
		if(num1>num3)
		cout<<"\n"<<num1<<" is greater";
		else
		cout<<"\n"<<num3<<" is greater";
	}
	else
	{
		if(num2>num3)
		cout<<"\n"<<num2<<" is greater";
		else
		cout<<"\n"<<num3<<" is greater";
	}
	return 0;
}
