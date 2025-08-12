#include"stack.h"
Stack::Stack(int s)
{
	this->size=s;
	pStack= new char[size];
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
bool Stack::push(char ele)
{
	if(isFull())
	{
		return false;
	}
	else
	{
		pStack[++top]=ele;
		return true;
	}
}
char Stack::pop(char& ch)
{
	if(isEmpty())
	{
		return '\0';
	}
	else
	{
		ch=pStack[top];
		top--;
		return ch;
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
		cout<<"\nPeak of the stack is: "<<pStack[top]<<" at index "<<top<<"\n";
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
			cout<<pStack[i]<<"\t";
		}
	}
}

Stack::~Stack()
{
	cout<<"\nFree stack\n";
}

void reverse(char* string)
{
	int size,i;
	size=strlen(string);
	Stack st(size);
	for(i=0;i<size;i++)
	{
		st.push(string[i]);
	}
	char ch;
	for(i=0;i<size;i++)
	{
		st.pop(ch);
		if(string[i]!=ch)
			break;
	}
	if(i==size)
		cout<<"\nString is palindrome!";
	else
		cout<<"\nString is not palindrome!";
}
