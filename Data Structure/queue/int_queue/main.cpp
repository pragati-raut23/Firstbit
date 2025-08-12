#include "queue.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) { 
	int choice,ele,size;
	cout<<"\nEnter size of the Queue: ";
	cin>>size;
	Queue qu(size);
	do
	{
		cout<<"\nEnter your choice:\n1.push\n2.pop\n3.display\n0.exit\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"\nEnter element to insert: ";
				cin>>ele;
				if(qu.push(ele))
				cout<<"\nElement inserted successfully!\n";
				else
				cout<<"\nQueue is full!\n";
			break;
			case 2:
				if(qu.pop())
				cout<<"\nElement poped!\n";
				else
				cout<<"\nQueue is empty!\n";
			break;
			case 3:
				qu.display();
			break;
			case 0:
				cout<<"\nThank you!\n";
			break;
			default:
				cout<<"\nInavalid Choice!\n";
		}
	}while(choice!=0);
	return 0;
}
