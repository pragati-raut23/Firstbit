//#include "employee.h"
#include "stack.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int size,choice,id;
	char name[20];
	double salary;
	cout<<"Enter no of employees: ";
	cin>>size;
	Stack st(size);
	while(choice!=4)
	{
		cout<<"\nEnter your choice:\n1.push\n2.pop\n3.display\n4. To exit\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
				{
					cout<<"\nenter employee id:\n";
					cin>>id;
					cout<<"enter employee name: \n";
					cin>>name;
					cout<<"enter employee salary: \n";
					cin>>salary;
					if(st.push(id,name,salary))
					cout<<"\nElement added successfully !\n";
					else
					cout<<"\nArray is full. Can'nt insert !\n";
				}
				break;
			case 2:
				{
					if(st.pop())
					cout<<"\nEmployee details deleted successfully !\n";
					else
					cout<<"\nStack is empty!\n";
				}
				break;
			case 3:
				st.display();
			break;
			case 4:
				cout<<"\nthank you !";
				break;
			default:
				cout<<"\nInvalid choice\n";
		}
	}
	return 0;
}

