using namespace std;
#include<iostream>
int main()
{
	int a=10;
	int& b=a;
	b=30;
	cout<<"value of a is: "<<a;
}
