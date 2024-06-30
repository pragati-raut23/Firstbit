#include<iostream>
using namespace std;
int main()
{
	float price;
	int choice;
	cout<<"Enter purchase price:\n";
	cin>>price;
	cout<<"are you student \n1.yes \n2.no\n";
	cin>>choice;
	if(choice==1)
	{
		if(price>500)
		{
			cout<<"discount: "<<price*0.2;
			price=price*0.8;
			cout<<"\ntotal price: "<<price;
		}
		else
		{
			cout<<"discount: "<<price*0.1;
			price=price*0.9;
			cout<<"\ntotal price: "<<price;
		}
	}
	else
	{
		if(choice==2)
		{
			if(price>600)
			{
				cout<<"discount: "<<price*0.15;
				price=price*0.85;
				cout<<"\ntotal price: "<<price;
			}	
			else
			{
				cout<<"\nthere is no discount \ntotal price: "<<price;
			}
		}
	}
	return 0;
}
