#include"circularLL.h"
int main()
{
	int ele,choice,pos;
	CircularLL ls;
	do{
		cout<<"\nEnter your choice:\n1.insert element at position\n2.delete element at position\n3.display\n0. exit\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"\nEnter element to insert: ";
				cin>>ele;
				cout<<"\nEnter position at which you want to insert element: ";
				cin>>pos;
				ls.insertAtPos(ele,pos);
			break;
			case 2:
				cout<<"\nEnter position at which you want to delete element: ";
				cin>>pos;
				ls.deleteAtPos(pos);
			break;
			case 3:
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

