armstr();
void main()
{
	armstr();
}
armstr()
{
	int n,d=0,t;
	printf("enter the number: ");
	scanf("%d",&n);
	t=n;
	for(;t>0;d++)
	{
		t=t/10;
	}
	int s=0;
	t=n;
	for(;t>0;t=t/10)
	{
		int r,mul=1;
		r=t%10;
		for(int i=1;i<=d;i++)
		{
			mul=mul*r;
		}
		s=s+mul;
		printf("pow = %d ",mul);
	}
	printf("sum = %d ",s);
	if (s==n)
	{
		printf("number is armstrong");
	}
	else
	{
		printf("number is not an armstrong");
	}
}