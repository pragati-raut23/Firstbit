#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<i*11<<"\t";
		}
		cout<<"\n";
	}
}


/*
11
22      22
33      33      33
44      44      44      44
55      55      55      55      55
*/
