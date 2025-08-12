#include "linkedlist.h"
int main()
{
	int choice,pos,id;
	char name[20];
	double salary;
	Employee emp;
	LinkedList ls;
	do{
		cout<<"\nEnter your choice:\n1. insert element at begining\n2. insert element at end\n3.insert element at position\n4.delete element at begining\n5.delete element at end\n6.delete element at position\n7.display\n0. exit\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"\nenter employee id:\n";
				cin>>id;
				cout<<"enter employee name: \n";
				cin>>name;
				cout<<"enter employee salary: \n";
				cin>>salary;
				emp.setId(id);
				emp.setName(name);
				emp.setSalary(salary);
				ls.insertAtBeg(emp);
				break;
			case 2:
				cout<<"\nenter employee id:\n";
				cin>>id;
				cout<<"enter employee name: \n";
				cin>>name;
				cout<<"enter employee salary: \n";
				cin>>salary;
				emp.setId(id);
				emp.setName(name);
				emp.setSalary(salary);
				ls.insertAtEnd(emp);
			break;
			case 3:
				cout<<"\nenter employee id:\n";
				cin>>id;
				cout<<"enter employee name: \n";
				cin>>name;
				cout<<"enter employee salary: \n";
				cin>>salary;
				cout<<"\nEnter position at which you want to insert element: ";
				cin>>pos;
				emp.setId(id);
				emp.setName(name);
				emp.setSalary(salary);
				ls.insertAtMid(emp,pos);
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

