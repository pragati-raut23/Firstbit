#include<stdio.h>
#include<string.h>
struct product
{
	int pid;
	char pname[20];
	double price;
	product()
	{
		printf("\nDefault constructor called\n");
		this->pid=0;
		strcpy(this->pname,"not given");
		this->price=0;
	}
	product(int i,char* n,double p)
	{
		printf("\nParameterised constructor called\n");
		this->pid=i;
		strcpy(this->pname,n);
		this->price=p;
	}
	void setid(int i)
	{
		this->pid=i;
	}
	void setproduct(char* n)
	{
		strcpy(this->pname,n);
	}
	void setprice(double p)
	{
		this->price=p;
	}
	int getid()
	{
		return this->pid;
	}
	char* getproduct()
	{
		return this->pname;
	}
	double getprice()
	{
		return this->price;
	}
	void display()
	{
		printf("\nProduct details:\nProduct id: %d\tName: %s\t price: %.2lf\n",this->pid,this->pname,this->price);
	}
};
int main()
{
	product p1;
	int id;
	char name[20];
	double price;
	p1.display();
	printf("\nEnter product id:\n");
	scanf("%d",&id);
	printf("\nEnter product name:\n");
	scanf("%s",name);
	printf("\nEnter price of product:\n");
	scanf("%lf",&price);
	p1.setid(id);
	p1.setproduct(name);
	p1.setprice(price);
	printf("\nafter setting value\n");
	p1.display();
	printf("\n*getter*\nproduct id: %d\nproduct name: %s\nprice: %.2lf\n",p1.getid(),p1.getproduct(),p1.getprice());
	product p2;
	p2.display();
	p2.setid(23);
	p2.setproduct("Essel");
	p2.setprice(2500);
	printf("\nafter setting value\n");
	p1.display();
	printf("\n*getter*\nproduct id: %d\nproduct name: %s\nprice: %.2lf\n",p2.getid(),p2.getproduct(),p2.getprice());
	product p3(10,"canvas",700);
	p3.display();
	printf("\n*getter*\nproduct id: %d\nproduct name: %s\nprice: %.2lf\n",p3.getid(),p3.getproduct(),p3.getprice());
	return 0;
}
