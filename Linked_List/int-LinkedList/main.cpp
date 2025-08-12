#include"linkedlist.h"
int main()
{
	int ele,choice,pos;
	LinkedList ls;
	do{
		cout<<"\nEnter your choice:\n1. insert element at begining\n2. insert element at end\n3.insert element at position\n4.delete element at begining\n5.delete element at end\n6.delete element at position\n7.delete by element\n8.Search no of occurance of element\n9.display\n0. exit\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"\nEnter element to insret: ";
				cin>>ele;
				ls.insertAtBeg(ele);
				break;
			case 2:
				cout<<"\nEnter element to insret: ";
				cin>>ele;
				ls.insertAtEnd(ele);
			break;
			case 3:
				cout<<"\nEnter element to insert: ";
				cin>>ele;
				cout<<"\nEnter position at which you want to insert element: ";
				cin>>pos;
				ls.insertAtMid(ele,pos);
			break;
			case 4:
				ls.deleteAtBeg();
			break;
			case 5:
				ls.deleteAtEnd();
			break;
			case 6:
				cout<<"\nEnter position at which you want to delete element: ";
				cin>>pos;
				ls.deleteAtMid(pos);
			break;
			case 7:
				cout<<"\nEnter element which you want to delete: ";
				cin>>ele;
				ls.deleteByData(ele);
				break;
			case 8:
				cout<<"\nEnter element to search: ";
				cin>>ele;
				ls.searchNoOfoccurance(ele);
				break;
			case 9:
				ls.display();
			break;
			case 0:
				cout<<"\nThank you!\n";
			break;
			default:
				cout<<"\nInvalid Choice!\n";
		}
	}while(choice!=0);
	return 0;
}
