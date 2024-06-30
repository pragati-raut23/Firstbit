#include<iostream>
using namespace std;
int main()
{
	int num,rem,rev=0,temp,sum=0;
	cout<<"\nEnter three digit number: \n";
	cin>>num;
	temp=num;
	while(temp>0)
	{
		rem=temp%10;
		sum=sum+rem;
		temp=temp/10;
	}
	while(num>0)
	{
		rem=num%10;
		rev=(rev*10)+rem;
		num=num/10;
	}
	cout<<"\nsum of digits= "<<sum;
	cout<<"\nReverse number: "<<rev;
}
