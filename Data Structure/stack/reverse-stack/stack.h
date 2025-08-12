#include<iostream>
using namespace std;
#include<string.h>
class Stack
{
	int top,size;
	char *pStack;
	public:
		Stack(int);
		bool isEmpty();
		bool isFull();
		bool push(char);
		char pop(char&);
		void peak();
		void display();
		~Stack();
};
void reverse(char*);
