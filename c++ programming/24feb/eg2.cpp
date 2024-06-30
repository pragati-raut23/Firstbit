using namespace std;
#include<iostream>
void myfun(int&);
int main()
{
	int a=10;
	myfun(a);
	cout<<"value of a is "<<a;
}
void myfun(int& b)
{
	b=30;
}
