#include"stack.h"
Stack::Stack(int s)
{
	this->size=s;
	pStack= new int[size];
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
void Stack::push(int ele)
{
	if(isFull())
	{
		cout<<"\nStack overflow!";
		//return false;
	}
	else
	{
		pStack[++top]=ele;
		//return true;
	}
}
void Stack::pop()
{
	if(isEmpty())
	{
		cout<<"\nStack underflow!";
	}
	else
	{
		top--;
		//return true;
	}
}
int Stack::peak()
{
	if(isEmpty())
	{
		cout<<"\nStack is empty!\n";
	}
	else
	{
		return pStack[top];
		//cout<<"\nPeak of the stack is: "<<pStack[top]<<" at index "<<top<<"\n";
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
		for(i=top;i>=0;i--)
		{
			cout<<pStack[i]<<"\t";
		}
	}
}
Stack::~Stack()
{
	cout<<"\nFree stack\n";
}
