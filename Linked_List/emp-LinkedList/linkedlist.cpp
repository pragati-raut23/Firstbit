#include"linkedlist.h"
LinkedList::LinkedList()
{
	this->start=NULL;
}
void LinkedList::insertAtBeg(Employee& emp)
{
	Node *temp=new Node(emp);
	temp->setNext(start);
	start=temp;
}
void LinkedList::insertAtEnd(Employee& emp)
{
	Node *temp=new Node(emp);
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
void LinkedList::insertAtMid(Employee& emp,int pos)
{
	Node *temp=new Node(emp);
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
		cout<<"\nEmployee id "<<p->getData().getId()<<" deleted Successfully!\n";
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
		start=NULL;
	}
	else
	{
		while(p->getNext()->getNext()!=NULL)
		{
			p=p->getNext();
		}
		cout<<" deleted Successfully!\n";
		p->setNext(NULL);
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
		cout<<"\n"<<p->getData().getId()<<" deleted successfully!\n";
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
			cout<<"\n"<<q->getData().getId()<<" deleted successfully!\n";
			return;
		}
		else
		{
			cout<<"\nInvalid position!\n";
		}		
	}
}
void LinkedList::display()
{
	Node *p=start;
	while(p!=NULL)
	{
		cout<<"Employee details:\nID: "<<p->getData().getId()<<"\tName: "<<p->getData().getName()<<"\t  Salary: "<<p->getData().getSalary()<<"\n";
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

