#include<stdio.h>
#include<string.h>
struct MusicPlayer
{
	void input(int a)
	{
		printf("\nPlaying by connecting USB cable\n");
	}
	void input(int a,int b)
	{
		printf("\nPlaying by connecting Aux cable\n");
	}
	void input(char a)
	{
		printf("\nPlaying by inserting CD\n");
	}
	void input(double a)
	{
		printf("\nPlaying music by connecting bluetooth\n");
	}
};
int main()
{
	MusicPlayer m1;
	int i,j,ch;
	double f;
	char c;
	do
	{
	printf("\nEnter your choice\n1.connect USB\n2.connect aux\n3.insert CD\n4.connect bluetooth\n0.to exit\n");
	scanf("%d",&ch);
	fflush(stdin);
		switch(ch)
		{
			case 1:
			{
				printf("\nenter (1/0)\n");
				scanf("%d",&i);
				m1.input(i);
			}
			break;
			case 2:
			{
				printf("\nenter 1 and 2\n");
				scanf("%d %d",&i,&j);
				m1.input(i,j);
			}
			break;
			case 3:
			{
				printf("\nenter (y/n)\n");
				scanf("%c",&c);
				m1.input(c);
			}
			break;
			case 4:
			{
				printf("\nenter (1/0)\n");
				scanf("%lf",&f);
				m1.input(f);
			}
			break;
			default:
			printf("\nInvalid choice!\n");
		}
	}while(ch!=0);
	return 0;
}
