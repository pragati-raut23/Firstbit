#include<iostream>
using namespace std;
#include<string.h>
class BankAcc
{
	int accNo;
	char name[20];
	double balance;
	static double interest;
	public:

	BankAcc();
	BankAcc(int,char*,double);
	void setAccNo(int );
	void setName(char*);
	void setBalance(double);
	int getAccNo();
	char* getName();
	double getBalance();
	void display();
	void changeInterest(double);
	static void displayInterest();
};
