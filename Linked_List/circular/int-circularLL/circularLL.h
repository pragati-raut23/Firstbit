#include"node.h"
class CircularLL
{
	Node *last;
	public:
	CircularLL();
	void insertAtPos(int,int);
	void deleteAtPos(int);
	void display();
	~CircularLL();
};

