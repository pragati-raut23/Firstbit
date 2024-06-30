#include<iostream>
using namespace std;
class Vehicle
{
	public:
	int noOfPerson;
	double basicCharge;
	double extraCharge;
	
	
		Vehicle(int np,double basicCharge,double extraCharge)
		{
			this->noOfPerson=np;
			this->basicCharge=basicCharge;
			this->extraCharge=extraCharge;
		}
		
		virtual double calToll()=0;
		
};
class TwoWheeler:public Vehicle
{
	public:
	TwoWheeler(int np):Vehicle(np,20,10)
		{
			
		}
		
		double calToll()
		{
			if(this->noOfPerson>2)
			{
				return this->basicCharge+(this->noOfPerson-2)*10;
			}
			else
			return this->basicCharge;
		}
};
class DailReport
{
	char name[20];
	double paidToall;
};
//int main()
//{
//	int noOfPerson,choice,ctr=0;
//	DailReport dr[20];
//	do{
//		cout<<"\nEnter your choice:\n";
//		cout<<"1. Two Wheeler\n";
//		cout<<"2. three wheeler\n";
//		cout<<"3. Four Wheeler\n";
//		cout<<"4. Heavy Vehicle\n";
//		cin>>choice;
//		cout<<"\nEnter no of person: ";
//		cin>>noOfPerson;
//		switch(choice)
//		{
//			
//			case 1:
//				{
//					Vehicle *v=new TwoWheeler(noOfPerson);
//					cout<<"\nTotal Toll: "<<v->calToll()<<"\n";
//					dr[ctr].setName("Two Wheeler");
//					dr[ctr].setToll(v->calToll());
//				}
//				break;
//		}
//	}while(choice!=0);
//}