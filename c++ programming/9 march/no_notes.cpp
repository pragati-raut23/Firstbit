#include<iostream>
using namespace std;
int main()
{
	double amount,temp;
	int two_th=0,five_hu=0,two_hu=0,one_hu=0,fifty=0,twenty=0,ten=0;	
	cout<<"\nEnter amount: \n";
	cin>>amount;
	temp=amount;
//	while(temp>0)
//	{
		if(temp>=2000)
		{
			two_th=temp/2000;
			temp=(int)temp%2000;
		}
		if(temp>=500)
		{
			five_hu=temp/500;
			temp=(int)temp%500;
		}
		if(temp>=200)
		{
			two_hu=temp/200;
			temp=(int)temp%200;
		}
		if(temp>=100)
		{
			one_hu=temp/100;
			temp=(int)temp%100;
		}
		if(temp>=50)
		{
			fifty=temp/50;
			temp=(int)temp%50;
		}
		if(temp>=20)
		{
			twenty=temp/20;
			temp=(int)temp%20;
		}
		if(temp>=10)
		{
			ten=temp/10;
			temp=(int)temp%10;
		}
	//}
	cout<<"\nNo of notes required to pay "<<amount<<"\nNotes of 2000 required= "<<two_th<<"\nNotes of 500 required= "<<five_hu<<"\nNotes of 200 required= "<<two_hu<<"\nNotes of 100 required= "<<one_hu<<"\nNotes of 50 required= "<<fifty<<"\nNotes of 20 required= "<<twenty<<"\nNotes of 10 required= "<<ten<<"\n";
	return 0;
}
