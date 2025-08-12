#include<iostream>
using namespace std;
class Queue
{
	int size,front,rear;
	int *pQueue;
	public:
		Queue(int);
		bool isEmpty();
		bool isFull();
		bool push(int);
		bool pop();
		void display();
		~Queue();
};
