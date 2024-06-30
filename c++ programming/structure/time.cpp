#include<stdio.h>
struct time
{
	int hr,min,sec;
};
void display(time*);
int main()
{
	time t1;
	int r,q;
	printf("enter hours:\n");
	scanf("%d",&t1.hr);
	printf("\nenter minuits:\n");
	scanf("%d",&t1.min);
	printf("\nenter seconds:\n");
	scanf("%d",&t1.sec);
	if(t1.sec>=60)
	{
		r=t1.sec%60;
		q=t1.sec/60;
		t1.sec=r;
		t1.min=t1.min+q;
	}
	if(t1.min>=60)
	{
		r=t1.min%60;
		q=t1.min/60;
		t1.min=r;
		t1.hr=t1.hr+q;
	}
	display(&t1);
	return 0;
}
void display(time *t1)
{
	printf("\ntime is: %d:%d:%d",t1->hr,t1->min,t1->sec);
}
