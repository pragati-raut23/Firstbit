#include"node.h"
		Node::Node(int ele)
		{
			this->next=NULL;
			this->data=ele;
		}
		
		void Node::setData(int data)
		{
			this->data=data;
		}
		void Node::setNext(Node* next)
		{
			this->next=next;
		}
		int Node::getData()
		{
			return this->data;
		}
		Node* Node::getNext()
		{
			return this->next;
		}