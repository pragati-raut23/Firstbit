#include<iostream>
using namespace std;
int main()
{
	int choice,num;
	float basic,salary,da,ta,hra;
	do
	{
		cout<<"\nEnter your choice \n1. even odd no. \n2. basic and total salary\n0.to exit\n";
		cin>>choice;
		switch(choice)
		{
		case 1:
			{
				cout<<"\nEnter the number:\n";
				cin>>num;
				if(num%2==0)
				cout<<"\nThe given number is even\n";
				else
				cout<<"\nThe given number is odd\n";
			}
			break;
		case 2:
			{
				cout<<"\nEnter the basic salary of employee:\n";
				cin>>basic;
				cout<<"\nBasic salary of employee is:\n"<<basic;
				if(basic<=5000)
				{
					da=basic*10/100;
					ta=basic*20/100;
					hra=basic*25/100;
				}
				else
				{
					da=basic*15/100;
					ta=basic*25/100;
					hra=basic*30/100;
				}
				salary=(basic+da+ta+hra);
				cout<<"\ntotal salary of the employee is:\n"<<salary;
			}
			break;
		}
	}while(choice!=0);
	return 0;
}
