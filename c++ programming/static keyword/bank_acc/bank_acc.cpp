#include"bank_acc.h"
//double BankAcc :: interest=2.5;
	BankAcc :: BankAcc()
	{
		this->accNo=0;
		strcpy(this->name,"not_given");
		this->balance=balance;
	}
	BankAcc :: BankAcc(int acc,char* n,double b)
	{
		this->accNo=acc;
		strcpy(this->name,n);
		this->balance=b;
	}
	void BankAcc :: setAccNo(int acc)
	{
		this->accNo=acc;
	}
	void BankAcc :: setName(char *n)
	{
		strcpy(this->name,n);
	}
	void BankAcc :: setBalance(double b)
	{
		this->balance=b;
	}
	int BankAcc :: getAccNo()
	{
		return this->accNo;
	}
	char* BankAcc :: getName()
	{
		return this->name;
	}
	double BankAcc :: getBalance()
	{
		return this->balance;
	}
	void BankAcc :: display()
	{
		cout<<"\nAccount details:\nAccount no.: "<<this->accNo<<"\tName: "<<this->name<<"  \tBalance: "<<this->balance<<"\nTotal balance: "<<this->balance+(this->balance*interest)<<"\n";
	}
	void BankAcc :: displayInterest()
	{
		cout<<"\nCurrent Interest rate: "<<interest<<"\n";
	}
	void BankAcc::changeInterest(double in)
	{
		interest=in;
	}
