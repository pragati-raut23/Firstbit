#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=5;i>0;i--)
	{
		for(j=1;j<=i;j++)
		{
			cout<<j<<"\t";
		}
		cout<<"\n";
	}
}

/*

1       2       3       4       5
1       2       3       4
1       2       3
1       2
1

*/
