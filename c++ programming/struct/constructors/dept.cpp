#include<stdio.h>
#include<string.h>
struct Dept
{
	int did;
	char dname[20];
	Dept()
	{
		printf("\nDefault constructor called\n");
		this->did=0;
		strcpy(this->dname,"not_given");
	}
	Dept(int i,char* n)
	{
		printf("\nParameterised constructor called\n");
		this->did=i;
		strcpy(this->dname,n);
	}
	void setId(int i)
	{
		this->did=i;
	}
	void setName(char* n)
	{
		strcpy(this->dname,n);
	}
	int getId()
	{
		return this->did;
	}
	char* getName()
	{
		return this->dname;
	}
	void display()
	{
		printf("\ndepartment details:\nDept id: %d\tName: %s\n",this->did,this->dname);
	}
};
int main()
{
	Dept d1;
	d1.display();
	int id;
	char name[20];
	printf("\nEnter department id:\n");
	scanf("%d",&id);
	printf("\nEnter department name:\n");
	scanf("%s",name);
	d1.setId(id);
	d1.setName(name);
	printf("\nafter setting value\n");
	d1.display();
	printf("\n*getters*\ndept id: %d\ndept name: %s\n",d1.getId(),d1.getName());
	Dept d2;
	d2.display();
	d2.setId(10);
	d2.setName("comp_sci");
	printf("\nafter setting value\n");
	d2.display();
	printf("\n*getters*\ndept id: %d\ndept name: %s\n",d2.getId(),d2.getName());
	Dept d3(20,"mathematics");
	d3.display();
	printf("\n*getters*\ndept id: %d\ndept name: %s\n",d3.getId(),d3.getName());
	return 0;
}
