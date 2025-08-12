#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i,num,size;
	bool flag=false;
	
	cout<<"\nEnter size of the array: ";
	cin>>size;
	int arr[size];

	cout<<"\nEnter array element:\n";
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter element to search: ";
	cin>>num;
	for(i=0;i<size;i++)
	{
		if(arr[i]==num)
		{
			flag=true;
			break;
		}
	}
	if(flag==true)
	{
		cout<<"\n"<<num<<" found at "<<i<<"th location\n";
	}
	else
	{
		cout<<"\nElement not found!\n";
	}
	return 0;
}
