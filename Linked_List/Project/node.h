#include "player.h"
template <class T>
class Node
{
	T data;
	Node *next;
	public:
		Node(T&);
		void setData(T&);
		void setNext(Node*);
		T& getData();
		Node* getNext();		
};


