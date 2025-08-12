#include"node.h"
Node::Node(Employee& emp)
{
	this->data=emp;
	this->next=NULL;
}
void Node::setData(Employee& data)
{
	this->data=data;
}
void Node::setNext(Node* next)
{
	this->next=next;
}
Employee& Node::getData()
{
	return this->data;	
} 
Node* Node::getNext()
{
	return this->next;
}

