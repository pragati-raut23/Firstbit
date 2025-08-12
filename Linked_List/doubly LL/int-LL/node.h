#include<iostream>
using namespace std;
class Node
{
	int data;
	Node *next;
	
	public:
		Node(int);
		void setData(int);
		void setNext(Node*);
		int getData();
		Node* getNext();
};