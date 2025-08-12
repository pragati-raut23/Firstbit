#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int size,i,j,beg,end,mid,num,min,temp;
	bool flag=false;
	cout<<"\nEnter size of array: ";
	cin>>size;
	int arr[size];

	cout<<"\nEnter array elements: \n";
	for(i=0; i<size; i++) {
		cin>>arr[i];
	}

	for(i=0; i<size; i++) {
		for(j=i+1; j<size; j++) {
			if(arr[i]>arr[j]) {
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}

	cout<<"\nEnter Element to search: ";
	cin>>num;
	beg=0;
	end=size-1;

	while(end>=beg) {
		mid=(beg+end)/2;
		if(num==arr[mid]) {
			flag=true;
			break;
		} else if(num<=arr[mid]) {
			end=mid-1;
		} else {
			beg=mid+1;
		}
	}
	if(flag) {
		cout<<"\nElement found\n";
	} else {
		cout<<"\nElement not found\n";
	}
	return 0;
}
