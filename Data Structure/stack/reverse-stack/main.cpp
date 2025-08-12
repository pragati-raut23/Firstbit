#include"stack.h"
int main()
{
	char string[10];
	cout<<"\nEnter the string: ";
	cin>>string;
	reverse(string);
	cout<<"\nReversed string: \n"<<string;
}
