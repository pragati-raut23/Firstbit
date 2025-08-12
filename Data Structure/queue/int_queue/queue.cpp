#include"queue.h"
Queue::Queue(int s)
{
	this->size=s;
	pQueue=new int[size];
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
bool Queue::push(int ele)
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
		pQueue[rear]=ele;
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
		ele=pQueue[front];
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
		//cout<<"\n"<<ele<<" poped!\n";
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
			cout<<pQueue[i]<<"\t";
			if(i==size-1)
			{
				i=0;
			}
			else
			{
				i++;
			}
		}
		cout<<pQueue[i];
	}
}
Queue::~Queue()
{
	cout<<"\nFree Queue\n";
}
