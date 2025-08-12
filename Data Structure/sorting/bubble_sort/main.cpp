#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int arr[10];
	int i,j,temp;
	cout<<"\nEnter array element: \n";
	for(i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"\nSorted Array:\n";
	for(i=0;i<10;i++)
	{
		cout<<arr[i]<<"\t";
	}
	return 0;
}
