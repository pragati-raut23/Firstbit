#include<iostream>
using namespace std;
int main()
{
	int num1,num2,add,sub,mult,div,mod,choice;
	cout<<"\nEnter two numbers:\n";
	cin>>num1>>num2;
	cout<<"\nEnter your choice:\n1.addition\n2.substraction\n3.multiplication\n4.division(quotient)\n5.division(remender)\n";
	cin>>choice;
	if(choice==1)
	{
		add=num1+num2;
		cout<<"\nAddition of two numbers is:\n"<< add;
	}
	else if(choice==2)
	{
		sub=num1-num2;
		cout<<"\nSubstraction of two number is:\n"<< sub;
	}
	else if(choice==3)
	{
		mult=num1*num2;
		cout<<"\nMultiplication of two umber is:\n"<< mult;
	}
	else if(choice==4)
	{
		div=num1/num2;
		cout<<"\nDivision of two number is:\n"<< div;
	}
	else if(choice==5)
	{
		mod=num1%num2;
		cout<<"\nRemender of division of two number is:\n"<< mod;
	}
	return 0;
}
