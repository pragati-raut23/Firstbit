#include "employee.h"
class Node
{
	Employee data;
	Node *next;
	public:
		Node(Employee&);
		void setData(Employee&);
		void setNext(Node*);
		Employee& getData();
		Node* getNext();		
};

