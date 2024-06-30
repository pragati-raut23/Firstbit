#include<iostream>
using namespace std;
int main()
{
	int no,i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%2==0)
			cout<<"$";
			else
			cout<<"*";
			cout<<"\t";
		}
		cout<<"\n";
	}
}

/*

*
$       $
*       *       *
$       $       $       $
*       *       *       *       *

*/
