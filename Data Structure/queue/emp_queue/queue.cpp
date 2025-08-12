#include"queue.h"
Queue::Queue(int s)
{
	this->size=s;
	pQueue=new Employee[size];
	front=rear=-1;
}
bool Queue::isEmpty()
{
	if(front==-1&&rear==-1)
	return true;
	else
	return false;
}
bool Queue::isFull()
{
	if((front==0&&rear==size-1)||(rear==front-1))
	return true;
	else
	return false;
}
bool Queue::push(int i,const char* n,double s)
{
	if(isFull())
	return false;
	else
	{
		if(isEmpty())
		{
			front=rear=0;
		}
		else if(rear==size-1)
		{
			rear=0;
		}
		else
		{
			rear++;
		}
		pQueue[rear].setId(i);
		pQueue[rear].setName(n);
		pQueue[rear].setSalary(s);
		return true;
	}
}
bool Queue::pop()
{
	int ele;
	if(isEmpty())
	return false;
	else
	{
		if(front==rear)
		{
			front=rear=-1;
		}
		else if(front==size-1)
		{
			front=0;
		}
		else
		{
			front++;
		}
		return true;
	}
}
void Queue::display()
{
	int i;
	if(isEmpty())
	{
		cout<<"\nQueue is Empty!\n";
	}
	else
	{
		i=front;
		while(i!=rear)
		{
			cout<<"\nemployees detail: \nid: "<<pQueue[i].getId()<<"\tname: "<<pQueue[i].getName()<<"\tsalary: "<<pQueue[i].getSalary()<<"\n";
			if(i==size-1)
			{
				i=0;
			}
			else
			{
				i++;
			}
		}
		cout<<"\nemployees detail: \nid: "<<pQueue[i].getId()<<"\tname: "<<pQueue[i].getName()<<"\tsalary: "<<pQueue[i].getSalary()<<"\n";
	}
}
Queue::~Queue()
{
	cout<<"\nFree Queue\n";
}

