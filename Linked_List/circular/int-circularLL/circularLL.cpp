#include"circularLL.h"
CircularLL::CircularLL()
{
	this->last=NULL;
}
void CircularLL::insertAtPos(int data,int pos)
{
	Node *temp=new Node(data);
	if(last==NULL)
	{
		last=temp;
		last->setNext(temp);
	}
	else if(pos==1)
	{
		temp->setNext(last->getNext());
		last->setNext(temp);
	}
	else
	{
		Node *p=last->getNext();
		int i=1;
		while(p!=last && i<pos-1)
		{
			p=p->getNext();
			i++;
		}
		if(p==last)
		{
			temp->setNext(last->getNext());
			last->setNext(temp);
			last=temp;
		}
		else
		{
			temp->setNext(p->getNext());
			p->setNext(temp);
		}
	}
}
void CircularLL::deleteAtPos(int pos)
{
	if(last==NULL)
	{
		cout<<"\nList is empty!\n";
	}
	else if(pos==1)
	{
		if(last==last->getNext())
		{
			cout<<last->getData()<<" is deleted!\n";
			last=NULL;
		}
		else
		{
			Node *p=last->getNext();
			last->setNext(p->getNext());
			cout<<p->getData()<<" is deleted!\n";
		}
	}
	else
	{
		Node *p=last->getNext();
		int i=1;
		while(p->getNext()!=last&&i<pos-1)
		{
			p=p->getNext();
			i++;
		}
		if(i==pos-1)
		{
			Node *q=p->getNext();
			p->setNext(q->getNext());
			if(q==last)
			{
				last=p;
			}
			cout<<q->getData()<<" is deleted!\n";
			delete q;
		}
		else
		{
			cout<<"\nInvalid position!\n";
		}
	}
}
void CircularLL::display()
{
	if(last==NULL)
	{
		cout<<"\nList is empty!\n";
	}
	else
	{
		Node *p=last->getNext();
		cout<<"\nLinked list elements are: \n";
		while(p!=last)
		{
			cout<<p->getData()<<"\t";
			p=p->getNext();
		}
		cout<<p->getData()<<"\n";
	}
}
CircularLL::~CircularLL()
{
	Node *p=last->getNext();
	while(last!=NULL)
	{
		last->setNext(p->getNext());
		delete p;
		p=last->getNext();
	}
}
