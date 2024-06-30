#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=0;i<7;i++)
	{
		for(j=0;j<7;j++)
		{
			cout<<"\t";
			if(i<3 && j==3)
			cout<<"*";
			if(i==3)
			cout<<"*";
			if(i>3 && j==3)
			cout<<"*";
		}
		cout<<"\n\n";
	}
	return 0;
}
    
	/*                       
							    *

                                *

                                *

        *       *       *       *       *       *       *

                                *

                                *

                                *
    */
