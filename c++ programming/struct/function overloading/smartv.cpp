#include<stdio.h>
#include<string.h>
struct SmartTv
{
	void feature(int a)
	{
		printf("\nUSB connectivity\n");
	}
	void feature(char a)
	{
		printf("\nDevice casting\n");
	}
	void feature(int a,int b)
	{
		printf("\nInternet connectivity\n");
	}
	void feature(int a,char b)
	{
		printf("\nHome theater connectivity\n");
	}
	void feature(char* a)
	{
		printf("\nMobile access\n");
	}
};
int main()
{
	SmartTv s1;
	int ch;
	do
	{
		printf("\nEnter your choice:\n1.connect USB\n2.cast device\n3.connect to internet\n4.connect home theater\n5.connect mobile phone\n0.to exit\n");
		scanf("%d",&ch);
		fflush(stdin);
		switch(ch)
		{
			case 1:
			s1.feature(23);
			break;
			case 2:
			s1.feature('p');
			break;
			case 3:
			s1.feature(2,3);
			break;
			case 4:
			s1.feature(23,'p');
			break;
			case 5:
			s1.feature("abc");
			break;
			default:
			printf("\nInvalid choice!\n");
		}
	}while(ch!=0);
	return 0;
}
