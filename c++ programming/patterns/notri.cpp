#include<iostream>
using namespace std;
int main()
{
	int no,i,j;
	for(i=5;i>0;i--)
	{
		no=i;
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
4       3       2       1
3       2       1
2       1
1

*/
