#include"node.h"
class LinkedList
{
	Node *start;
	public:
	LinkedList();
	void insertAtBeg(int);
	void insertAtEnd(int);
	void insertAtMid(int,int);
	void deleteAtBeg();
	void deleteAtEnd();
	void deleteAtMid(int);
	void deleteByData(int);
	void searchNoOfoccurance(int);
	void display();
	~LinkedList();
};
