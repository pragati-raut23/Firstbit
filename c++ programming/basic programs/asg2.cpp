#include<iostream>
using namespace std;
int main()
{
	float length,breadth,rad,pi=3.14,pr,ar,pc,ac;
	cout<<"enter the value of length and breadth";
	cin>>length>>breadth;
	pr=2*(length+breadth);
	cout<<"\nperimeter of rectangle is: "<<pr;
	ar=(length*breadth);
	cout<<"\narea of rectangle is: "<<ar;
	cout<<"\n\nenter radius of a circle\n";
	cin>>rad;
	pc=(2*pi*rad);
	cout<<"\nperimeter of circle is: "<<pc;
	ac=(pi*rad*rad);
	cout<<"\narea of circle is: %f"<<ac;
	return 0;
}
