#include<iostream>
using namespace std;
int main()
{
	int no,i,j;
	for(i=5;i>0;i--)
	{
		no=5;
		for(j=1;j<=i;j++)
		{
			cout<<no<<"\t";
			no--;
		}
		cout<<"\n";
	}
}

/*

5       4       3       2       1
5       4       3       2
5       4       3
5       4
5

*/
