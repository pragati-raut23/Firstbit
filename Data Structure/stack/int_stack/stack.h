#include<iostream>
using namespace std;
class Stack
{
	int top,size;
	int *pStack;
	public:
		Stack(int);
		bool isEmpty();
		bool isFull();
		void push(int);
		void pop();
		int peak();
		void display();
		~Stack();
};
