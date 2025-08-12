#include<fstream>
#include"node.cpp"
template <class T>
class LinkedList
{
	Node<T> *start;
	public:
	LinkedList();
	void insertAtMid(T&,int);
	void deleteAtMid(int);
	void searchByJersey();
	void searchByName();
	void updatePlayerInfo(int);
	void topRunner();
	void topWicketer();
	void display();
	void readFromFile(const char* );
	void writeToFile(const char*); 
	~LinkedList();
};


