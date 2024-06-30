#include<stdio.h>
struct time
{
	int hr,min,sec;
	void sethour(int h)
	{
		this->hr=h;
	}
	void setmin(int m)
	{
		this->min=m;
	}
	void setsec(int s)
	{
		this->sec=s;
	}
	void display()
	{
		printf("\ntime is: %d:%d:%d",this->hr,this->min,this->sec);
	}
};
void display(time*);
int main()
{
	time t1;
	int hr,min,sec;
	int r,q;
	printf("enter hours:\n");
	scanf("%d",&hr);
	printf("\nenter minuits:\n");
	scanf("%d",&min);
	printf("\nenter seconds:\n");
	scanf("%d",&sec);
	if(sec>=60)
	{
		r=sec%60;
		q=sec/60;
		sec=r;
		min=min+q;
	}
	if(min>=60)
	{
		r=min%60;
		q=min/60;
		min=r;
		hr=hr+q;
	}
	t1.setsec(sec);
	t1.setmin(min);
	t1.sethour(hr);
	t1.display();
	return 0;
}
