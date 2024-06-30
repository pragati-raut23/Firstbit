using namespace std;
#include<iostream>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5-i;j++)
		{
			cout<<"  ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<" ";
			cout<<j;
		}
		for(j=i-1;j>=1;j--)
		{
			cout<<" ";
			cout<<j;
		}
		cout<<"\n";
	}
	return 0;
}
