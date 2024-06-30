#include<iostream>
using namespace std;
int main()
{
	int no,sum=0,i;
	int note[10]={2000,500,200,100,50,20,10,5,2,1};
	double amount;
	cout<<"\nEnter amount:\n";
	cin>>amount;
	for(i=0;i<10;i++)
	{
		if(amount>=note[i])
		{
			no=amount/note[i];
			if(no!=0)
			{
				if(i>=5 && i<8)
				cout<<"\nRequired No of notes/coins of "<<note[i]<<": "<<no<<"\n";
				else if(i>=8)
					cout<<"\nRequired No of coins of "<<note[i]<<": "<<no<<"\n";
				else
					cout<<"\nRequired No of notes of "<<note[i]<<": "<<no<<"\n";
				sum=sum+no;
				amount=(int)amount%note[i];
			}
		}
		if(amount==0)
		break;
	}
	cout<<"\n\nHence Minimum no of notes required to pay: "<<sum<<"\n";
	return 0;
}
