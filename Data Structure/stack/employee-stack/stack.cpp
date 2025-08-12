#include"stack.h"
Stack::Stack(int s)
{
	this->size=s;
	eStack= new Employee[size];
	this->top=-1;
}
bool Stack::isEmpty()
{
	if(top==-1)
	return true;
	else
	return false;
}
bool Stack::isFull()
{
	if(top==size-1)
	return true;
	else
	return false;
}
bool Stack::push(int id,char* name,double salary)
{
	if(isFull())
	{
		return false;
	}
	else
	{
		eStack[++top].setId(id);
		eStack[top].setName(name);
		eStack[top].setSalary(salary);
		return true;
	}
}
bool Stack::pop()
{
	if(isEmpty())
	{
		return false;
	}
	else
	{
		top--;
		return true;
	}
}
void Stack::peak()
{
	if(isEmpty())
	{
		cout<<"\nStack is empty!\n";
	}
	else
	{
		cout<<"\nPeak of the stack is at index "<<top<<"\n";
	}
}
void Stack::display()
{
	int i;
	if(isEmpty())
	{
		cout<<"\nStack is empty!\n";
	}
	else
	{
		cout<<"\nStack elements are:\n";
		for(i=0;i<=top;i++)
		{	
			cout<<"\nemployees detail: \nid: "<<eStack[i].getId()<<"\tname: "<<eStack[i].getName()<<"\tsalary: "<<eStack[i].getSalary()<<"\n";
		}
	}
}
Stack::~Stack()
{
	cout<<"\nFree stack\n";
}

