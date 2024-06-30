#include"bank_acc.h"
int main()
{
	BankAcc::displayInterest();
	
	BankAcc b1(42,"pragati",50000);
	BankAcc b2(52,"prakruti",60000);
	b1.display();
	b2.display();
	
	b1.changeInterest(3.5);
	b1.display();
	b2.display();
	BankAcc::displayInterest();
	return 0;
}
