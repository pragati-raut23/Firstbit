#include<iostream>
using namespace std;
#include<string.h>
class Account
{
	public:
	int accNo;
	char name[20];
	double balance;
	
		Account()
		{
			
		}
		
		Account(int v1,char* v2,double v3)
		{
			this->accNo=v1;
			strcpy(this->name,v2);
			this->balance=v3;
		}
		double checkBalance()
		{
			return this->balance;
		}
		bool deposit(double amount)
		{
			this->balance = this->balance + amount ;
		}
		virtual bool withdraw(double amount) = 0;
};
class SavingAccount : public Account
{
	public :
	double minBalance;
		SavingAccount()
		{
			
		}
		
		SavingAccount(int v1,char* v2,double v3,double v4):Account(v1,v2,v3)
		{
			this->minBalance=v4;
		}
		bool withdraw(double amount)
		{
			if(this->balance-amount >= this->minBalance)
			{
				this->balance -= amount;
				return true;
			}
			else
				return false;
		}
};
class CurrentAccount : public Account
{
	public :
	double overDraftLimit;
		CurrentAccount()
		{
			
		}
		
		CurrentAccount(int v1,char* v2,double v3,double v4):Account(v1,v2,v3)
		{
			this->overDraftLimit=v4;
		}
		bool withdraw(double amount)
		{
			if(this->balance-amount >= this->overDraftLimit)
			{
				this->balance-=amount;
				return true;
			}
			else
			{
				return false;
			}
		}
};
int main()
{
	Account *accl;
}