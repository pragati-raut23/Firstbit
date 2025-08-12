#include "stack.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int size,choice,ele;
	cout<<"\nEnter size of the stack: ";
	cin>>size;
	Stack st(size);
	
	st.push(23);
	st.push(30);
	st.push(4);
	st.display();
	st.display();
//	while(!st.isEmpty())
//	{
//		cout<<st.peak()<<" ";
//		st.pop();
//	}
//	do
//	{
//		cout<<"\nEnter your choice:\n1.Push\n2.Pop\n3.peak\n4.display\n0.to exit\n";
//		cin>>choice;
//		switch(choice)
//		{
//			case 1:
//				cout<<"\nEnter element to insert: ";
//				cin>>ele;
//				st.push(ele);
////				cout<<"\nElement pushed successfully!\n";
////				else
////				cout<<"\nStack is full!\n";
//			break;
//			case 2:
//				st.pop()
////				cout<<"\nElement poped successfully!";
////				else
////				cout<<"\nStack is empty!\n";
//			break;
//			case 3:
//				st.peak();
//			break;
//			case 4:
//				//st.display();
//			break;
//			case 0:
//				cout<<"\nThank You!\n";
//			break;
//			default:
//				cout<<"\nInvalid choice!\n";
//		}
//		
//	}while(choice!=0);
	return 0;
}
