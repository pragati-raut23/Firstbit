#include"employee.h"
class Stack
{
	int top,size;
	Employee *eStack;
	public:
		Stack(int);
		bool isEmpty();
		bool isFull();
		bool push(int,char*,double);
		bool pop();
		void peak();
		void display();
		~Stack();
};
