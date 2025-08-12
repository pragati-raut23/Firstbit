#include"linkedlist.h"
LinkedList::LinkedList()
{
	this->start=NULL;
}
void LinkedList::insertAtBeg(int data)
{
	Node *temp=new Node(data);
	temp->setNext(start);
	start=temp;
}
void LinkedList::insertAtEnd(int data)
{
	Node *temp=new Node(data);
	if(start==NULL)
	{
		start=temp;
		return;
	}
	else
	{
		Node *p=start;
		while(p->getNext()!=NULL)
		{
			p=p->getNext();
		}
		p->setNext(temp);
	}
}
void LinkedList::insertAtMid(int data,int pos)
{
	Node *temp=new Node(data);
	Node *p=start;
	int i=1;
	if(start==NULL){
		start=temp;
	}
	else if(pos==1)
	{
		temp->setNext(start);
		start=temp;
	}
	else
	{
		while(i<pos-1 && p->getNext()!=NULL)
		{
			p=p->getNext();
			i++;
		}
		temp->setNext(p->getNext());
		p->setNext(temp);
	}

}
void LinkedList::deleteAtBeg()
{
	Node *p=start;
	if(start==NULL)
	{
		cout<<"\nNo elements to delete!\n";
		return;
	}
	else
	{
		start=start->getNext();
		cout<<"\n"<<p->getData()<<" deleted Successfully!\n";
		delete p;
	}
}
void LinkedList::deleteAtEnd()
{
	Node *p=start;
	if(start==NULL)
	{
		cout<<"\nNo elements to delete!\n";
		return;
	}
	else if(start->getNext()==NULL)
	{
		cout<<"\n"<<start->getData()<<" deleted successfully!\n";
		delete start;
		start=NULL;
	}
	else
	{
		while(p->getNext()->getNext()!=NULL)
		{
			p=p->getNext();
		}
		cout<<"\n"<<p->getNext()->getData()<<" deleted Successfully!\n";
		p->setNext(NULL);
		delete p;
	}
}
void LinkedList::deleteAtMid(int pos)
{
	Node *p=start;
	if(start==NULL)
	{
		cout<<"\nNo elements to delete!\n";
		return;
	}
	else if(pos==1)
	{
		start=start->getNext();
		cout<<"\n"<<p->getData()<<" deleted successfully!\n";
		delete p;
		return;
	}
	else
	{
		int i=1;
		while(p->getNext()!=NULL&&i<pos-1)
		{
			p=p->getNext();
			i++;
		}
		if(i==pos-1 && p->getNext()!=NULL)
		{
			Node *q=p->getNext();
			p->setNext(q->getNext());
			cout<<"\n"<<q->getData()<<" deleted successfully!\n";
			delete q;
			return;
		}
		else
		{
			cout<<"\nInvalid position!\n";
		}		
	}
}
void LinkedList::deleteByData(int data)
{
	Node *p=start;

	if(start==NULL)
	{
		cout<<"\nNo element to delete!\n";
		return;
	}
	else if(start->getNext()==NULL)
	{
		if(start->getData()==data)
		{
			start->setNext(NULL);
		}
	}
	else
	{
		while(p->getNext()->getData()!=data && p!=NULL)
		{
			p=p->getNext();
		}
		if(p==NULL)
		{
			cout<<"\nElement not found!\n";
		}
		else
		{
			p->setNext(p->getNext()->getNext());
			cout<<"\nElement deleted!\n";
		}
	}
}
void LinkedList::searchNoOfoccurance(int data)
{
	Node *p=start;
	int count=0;
	if(start==NULL)
	{
		cout<<"\nNo element present!\n";
	}
	else
	{
		while(p!=NULL)
		{
			if(p->getData()==data)
			{
				count++;
			}
			p=p->getNext();
		}
		if(count==0)
		{
			cout<<"\nElement not exist";
		}
		else
		cout<<"\n"<<data<<" occured "<<count<<" times in linked list\n";
	}
}
void LinkedList::display()
{
	Node *p=start;
	while(p!=NULL)
	{
		cout<<p->getData()<<"\t";
		p=p->getNext();
	}
}
LinkedList::~LinkedList()
{
	Node *p=start;
	while(start!=NULL)
	{
		start=start->getNext();
		delete p;
		p=start;
	}
}
