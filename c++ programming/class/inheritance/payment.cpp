using namespace std;
#include<iostream>
#include<string.h>
class PaymentMethod
{
	char sender[20],receiver[20];
	double amount;
	public:
	PaymentMethod()
	{
		cout<<"\nPayment default construct called\n";
		strcpy(this->sender,"not_given");
		strcpy(this->receiver,"not_given");
		this->amount=0;
	}
	PaymentMethod(char* s,char* r,double a)
	{
		cout<<"\nPayment parameterised construct called\n";
		strcpy(this->sender,s);
		strcpy(this->receiver,r);
		this->amount=a;
	}
	void setSender(char* s)
	{
		strcpy(this->sender,s);
	}
	void setReceiver(char* r)
	{
		strcpy(this->receiver,r);
	}
	void setAmount(double a)
	{
		this->amount=a;
	}
	char* getSender()
	{
		return this->sender;
	}
	char* getReceiver()
	{
		return this->receiver;
	}
	double getAmount()
	{
		return this->amount;
	}
	void display()
	{
		cout<<"\nPayment Details:\nSender name: "<<this->sender<<"\t Receiver name: "<<this->receiver<<"\t Amount: "<<this->amount<<"\n";
	}
};
class DebitCard:public PaymentMethod
{
	int accNo,cvv;
	public:
	DebitCard():PaymentMethod()
	{
		cout<<"\nDebit card default constructor called\n";
		this->accNo=0;
		this->cvv=0;
	}
	DebitCard(char* s,char* r,double a,int acc,int cvv):PaymentMethod(s,r,a)
	{
		cout<<"\nDebit card default constructor called\n";
		this->accNo=acc;
		this->cvv=cvv;
	}
	void setAccNo(int acc)
	{
		this->accNo=acc;
	}
	void setCvv(int cvv)
	{
		this->cvv=cvv;
	}
	int getAccNo()
	{
		return this->accNo;
	}
	int getCvv()
	{
		return this->cvv;
	}
	void display()
	{
		PaymentMethod::display();
		cout<<"\nAccount no: "<<this->accNo<<"\t cvv: "<<this->cvv<<"\n";
	}
};
class UPI:public PaymentMethod
{
	int upiId;
	public:
	UPI():PaymentMethod()
	{
		cout<<"\nUpi default constructor called\n";
		this->upiId=0;
	}
	UPI(char* s,char* r,double a,int ui):PaymentMethod(s,r,a)
	{
		cout<<"\nUpi default constructor called\n";
		this->upiId=ui;
	}	
	void setUpiId(int ui)
	{
		this->upiId=ui;
	}
	int getUpiId()
	{
		return this->upiId;
	}
	void display()
	{
		PaymentMethod::display();
		cout<<"\nUPI id: "<<this->upiId<<"\n";
	}
};
int main()
{
	char sender[20],receiver[20];
	int accNo,cvv,upiId;
	double amount;
	DebitCard d1;
	cout<<"\nEnter sender name: ";
	cin>>sender;
	cout<<"\nEnter receiver name: ";
	cin>>receiver;
	cout<<"\nEnter amount to pay: ";
	cin>>amount;
	cout<<"\nEnter account no.: ";
	cin>>accNo;
	cout<<"\nEnter cvv: ";
	cin>>cvv;
	d1.setSender(sender);
	d1.setReceiver(receiver);
	d1.setAmount(amount);
	d1.setAccNo(accNo);
	d1.setCvv(cvv);
	d1.display();
	DebitCard d2("Prakruti","Pragati",50000,2330409,234);
	d2.display();
	UPI u1;
	cout<<"\nEnter sender name: ";
	cin>>sender;
	cout<<"\nEnter receiver name: ";
	cin>>receiver;
	cout<<"\nEnter amount to pay: ";
	cin>>amount;
	cout<<"\nEnter upi id: ";
	cin>>upiId;
	u1.setSender(sender);
	u1.setReceiver(receiver);
	u1.setAmount(amount);
	u1.setUpiId(upiId);
	u1.display();
	UPI u2("Prakruti","Pragati",50000,2330904);
	u2.display();
	return 0;
}
