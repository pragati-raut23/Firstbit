#include"node.h"
class LinkedList
{
	Node *start;
	public:
	LinkedList();
	void insertAtBeg(Employee&);
	void insertAtEnd(Employee&);
	void insertAtMid(Employee&,int);
	void deleteAtBeg();
	void deleteAtEnd();
	void deleteAtMid(int);
	void display();
	~LinkedList();
};

