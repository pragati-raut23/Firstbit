#include<iostream>
using namespace std;
int main()
{
	int num1,num2,i,gcd;
	cout<<"Enter number: \n";
	cin>>num1;
	cout<<"\nEnter number: \n";
	cin>>num2;
	for(i=1;i<num1 && i<=num2;i++)
	{
		if(num1%i==0 && num2%i==0)
		{
			gcd=i;
		}
	}
	cout<<"\nGCD of "<<num1<<" and "<<num2<<" is: "<<gcd;
}
