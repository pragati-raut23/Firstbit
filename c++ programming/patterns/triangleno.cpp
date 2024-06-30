#include<iostream>
using namespace std;
int main()
{
	int i,j,no=1;
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			cout<<no++<<"\t";
		}
		cout<<"\n";
	}
}


/*
1
2       3
4       5       6
7       8       9       10
11      12      13      14      15
*/
