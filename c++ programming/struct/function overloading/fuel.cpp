#include<stdio.h>
#include<string.h>
struct Vehicle
{
	void fuel(int a)
	{
		printf("\nFuel type is electricity\n");
	}
	void fuel(char a)
	{
		printf("\nFuel type is gas\n");
	}
	void fuel(double a)
	{
		printf("\nFuel type is liquified\n");
	}
};
int main()
{
	Vehicle f1;
	int i,choice;
	char f;
	double d;
		printf("\nEnter choice:\n1.Electric vehicle\n2.CNG based\n3.Petrol/disel based\n0.to exit\n");
		scanf("%d",&choice);
		fflush(stdin);
		if(choice==1)
		{
			printf("\nEnter (1/0)\n");
			scanf("%d",&i);
			f1.fuel(i);
		}
		else if(choice==2)
		{
			printf("\nEnter (y/n)\n");
			scanf("%c",&f);
			f1.fuel(f);
		}
		else if(choice==3)
		{
			printf("\nEnter (1/0)\n");
			scanf("%lf",&d);
			f1.fuel(d);
		}
		else
			printf("\nInvalid choice!\n");
return 0;
}
