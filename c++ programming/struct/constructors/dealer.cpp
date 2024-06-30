#include<stdio.h>
#include<string.h>
struct dealer
{
	int did;
	char dname[20];
	struct product
	{
		int pid;
		char pname[20];
		double price;
	};
	product p1;
	dealer()
	{
		this->did=0;
		strcpy(this->dname,"not given");
		this->p1.pid=0;
		strcpy(this->p1.pname,"not given");
		this->p1.price=0;
	}
	dealer(int i,char* n,int pi,char* pn,double p)
	{
		this->did=p;
		strcpy(this->dname,n);
		this->p1.pid=pi;
		strcpy(this->p1.pname,pn);
		this->p1.price=p;
	}
	void setid(int i)
	{
		this->did=i;
	}
	void setname(char* n)
	{
		strcpy(this->dname,n);
	}
	void setpid(int pi)
	{
		this->p1.pid=pi;
	}
	void setpname(char* pn)
	{
		strcpy(this->p1.pname,pn);
	}
	void setprice(double p)
	{
		this->p1.price=p;
	}
	int getid()
	{
		return this->did;
	}
	char* getname()
	{
		return this->dname;
	}
	int getpid()
	{
		return this->p1.pid;
	}
	char* getpname()
	{
		return this->p1.pname;
	}
	double getprice()
	{
		return this->p1.price;
	}
	void display()
	{
		printf("\nDealers detail:\nDealers id: %d\tName: %s\nProduct id: %d\tName: %s\tprice: %.2lf\n",this->did,this->dname,this->p1.pid,this->p1.pname,this->p1.price);
	}
};
int main()
{
	dealer d1;
	int id,pid;
	char name[20],pname[20];
	double price;
	d1.display();
	printf("\nEnter dealers id:\n");
	scanf("%d",&id);
	printf("\nEnter dealers name:\n");
	scanf("%s",name);
	printf("\nId of product which have to deliver:\n");
	scanf("%d",&pid);
	printf("\nName of product which have to deliver:\n");
	scanf("%s",pname);
	printf("\nPrice of product:\n");
	scanf("%lf",&price);
	d1.setid(id);
	d1.setname(name);
	d1.setpid(pid);
	d1.setpname(pname);
	d1.setprice(price);
	printf("\nafter setting value\n");
	d1.display();
	printf("\n*getter*\ndealer id: %d\ndealer name: %s\nproduct id: %d\nproduct name: %s\nprice: %.2lf\n",d1.getid(),d1.getname(),d1.getpid(),d1.getpname(),d1.getprice());
	dealer d2(30,"Pragati",203,"Essel",2500);
	d2.display();
	printf("\n*getter*\ndealer id: %d\ndealer name: %s\nproduct id: %d\nproduct name: %s\nprice: %.2lf\n",d2.getid(),d2.getname(),d2.getpid(),d2.getpname(),d2.getprice());
	return 0;
}
