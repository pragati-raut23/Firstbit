#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int arr[10];
	int min,i,j,index,temp;
	cout<<"\nEnter Array elements:\n";
	for(i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<10;i++)
	{
		min=arr[i];
		index=i;
		for(j=i+1;j<10;j++)
		{
			if(min>arr[j])
			{
				min=arr[j];
				index=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[index];
		arr[index]=temp;
	}
	cout<<"\nSorted array:\n";
	for(i=0;i<10;i++)
	{
		cout<<arr[i]<<"\t";
	}
	return 0;
}
