#include<stdio.h>
#include<string.h>
struct printer
{
	void print(char ch)
	{
		printf("\nPrinting character:\n%c\n",ch);
	}
	void print(char* ch)
	{
		printf("\nPrinting string:\n%s\n",ch);
	}
	void print(int ch)
	{
		printf("\nPrinting integer:\n%d\n",ch);
	}
};
int main()
{
	printer p1;
	char c;
	char ch[20];
	int t,choice;
		printf("\nEnter choice:\n1.Print character\n2.print string\n3.print integer\n");
		scanf("%d",&choice);
		fflush(stdin);
			if(choice==1)
			{
				printf("\nEnter character to print:\n");
				scanf("%c",&c);
				p1.print(c);
			}
			else if(choice==2)
			{
				printf("\nEnter string to print:\n");
				scanf("%s",ch);
				p1.print(ch);
			}
			else if(choice==3)
			{
				printf("\nEnter integer to print:\n");
				scanf("%d",&t);
				p1.print(t);
			}
			else
				printf("\nInvalid choice!\n");
	return 0;
}
