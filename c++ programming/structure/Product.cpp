#include<stdio.h>
#include<string.h>
struct Product
{
//attributes
  
  int id;
  char name[20];
  double price;
  char colour[20];
  
  //Default constructor
  Product()
  {
  	id=0;
  	strcpy(name,"Not given");
  	price=0.0;
  	strcpy(colour,"Not given");
  }
  
  Product(int i,char* nm,double price,char* color)
  {
    this->id=i;
  	strcpy(name,nm);
  	this->price=price;
    strcpy(colour,color);
  }
//Setters  
  void setId(int i)
  {
  	this->id=i;
  }
  
  void setName(char* nm)
  {
  	strcpy(name,nm);
  }
  
    void setPrice(double p)
  {
  	this->price=p;
  }
  
  void setColour(char* nm)
  {
  	strcpy(colour,nm);
  }

 	//Getters
 	
 	
 void display()
 	{
 	  printf("%d %s %ld %s",id,name,price,colour);	
	}
};

int main()
{
	Product p1;
	printf("Display called after default constructor\n");
	p1.display();
	
	printf("\n new values are set using setters\n");
	//setters
	p1.display();
	
	Product p2(101,"prod1",1000,"yellow");
	printf("\n Display called after parameterized constructor\n");
	p2.display();
		
    printf("\n Values are displayed using getters\n");
    //getters
	
}
