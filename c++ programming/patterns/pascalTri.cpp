#include <iostream>
using namespace std;

int main() 
{
    int rows,i,j,k;
    cout << "Enter the number of rows : ";
    cin >> rows;

    for (i = 1; i <= rows; i++) 
	{
        k = 1;
        for (j = 1; j <= i; j++) 
		{
            cout << k << " ";
            k = k * (i - j) / j;
            //cout<<"\t"<<k;
        }

        cout << "\n";
    }

    return 0;
}

