#include<stdio.h>
#include<string.h>
struct Book
{
	int bid;
	char bname[20],author[20];
	double price;
	Book()
	{
		printf("\nDefault constructor called\n");
		this->bid=0;
		strcpy(this->bname,"not given");
		strcpy(this->author,"not given");
		this->price=0;
	}
	Book(int i,char* b,char* a,double p)
	{
		printf("\nParameterised constructor called\n");
		this->bid=i;
		strcpy(this->bname,b);
		strcpy(this->author,a);
		this->price=p;
	}
	void setId(int i)
	{
		this->bid=i;
	}
	void setBook(char* b)
	{
		strcpy(this->bname,b);
	}
	void setAuthor(char* a)
	{
		strcpy(this->author,a);
	}
	void setPrice(double p)
	{
		this->price=p;
	}
	int getId()
	{
		return this->bid;
	}
	char* getBook()
	{
		return this->bname;
	}
	char* getAuthor()
	{
		return this->author;
	}
	double getPrice()
	{
		return this->price;
	}
	void display()
	{
		printf("\nBook detail:\nBook id: %d\tName: %s\t  Author: %s\t price: %.2lf\n",this->bid,this->bname,this->author,this->price);
	}
};
int main()
{
	Book b1;
	int id;
	char name[20],author[20];
	double price;
	b1.display();
	printf("\nEnter book id:\n");
	scanf("%d",&id);
	printf("\nEnter book name:\n");
	scanf("%s",name);
	printf("\nEnter author name:\n");
	scanf("%s",author);
	printf("\nEnter price:\n");
	scanf("%lf",&price);
	b1.setId(id);
	b1.setBook(name);
	b1.setAuthor(author);
	b1.setPrice(price);
	printf("\nafter setting value\n");
	b1.display();
	printf("\n*getter*\nbook id: %d\nbook name: %s\nauthor: %s\nprice: %.2lf\n",b1.getId(),b1.getBook(),b1.getAuthor(),b1.getPrice());
	Book b2;
	b2.display();
	b2.setId(262);
	b2.setBook("Ravan");
	b2.setAuthor("sharad_tandale");
	b2.setPrice(270);
	printf("\nafter setting value\n");
	b2.display();
	printf("\n*getter*\nbook id: %d\nbook name: %s\nauthor: %s\nprice: %.2lf\n",b2.getId(),b2.getBook(),b2.getAuthor(),b2.getPrice());
	Book b3(148,"Rau","N.S.Inamdar",350);
	b3.display();
	printf("\n*getter*\nbook id: %d\nbook name: %s\nauthor: %s\nprice: %.2lf\n",b3.getId(),b3.getBook(),b3.getAuthor(),b3.getPrice());
	return 0;
}
