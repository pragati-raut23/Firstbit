#include<iostream>
using namespace std;
int main()
{
	float price;
	cout<<"\nEnter the price of a product: \n";
	cin>>price;
		if(price>=500)
		{
			cout<<"\nTotal discount value: "<<price*0.2;
			price=price*0.8;
			cout<<"\nPrice of product is: "<<price;
		}
		else if(price>=200)
		{
			cout<<"\nTotal discount value: "<<price*0.15;
			price=price*0.85;
			cout<<"\nPrice of product is: "<<price;
		}
		else if(price>=100)
		{
			cout<<"\nTotal discount value: "<<price*0.1;
			price=price*0.9;
			cout<<"\nPrice of product is: "<<price;
		}
		else
		{
			cout<<"\nThere is no discount on the product below price 50 Rs.";
			cout<<"\nPrice of the product is: "<<price;
		}
		return 0;
}
