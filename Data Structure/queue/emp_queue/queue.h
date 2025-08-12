#include "employee.h"
class Queue
{
	int size,front,rear;
	Employee *pQueue;
	public:
		Queue(int);
		bool isEmpty();
		bool isFull();
		bool push(int,const char*,double);
		bool pop();
		void display();
		~Queue();
};

