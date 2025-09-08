strnum();
void main()
{
	strnum();
}
strnum()
{
	int n,t;
	printf("enter the number:");
	scanf("%d",&n);
	t=n;
	int s=0;
	for(;t>0;t=t/10)
	{
		int r,mul=1;
		r=t%10;
		for(int i=1;i<=r;i++)
		{
			mul=mul*i;
			
		}
		s=s+mul;
	}
	if(s==n)
	{
		printf("%d is a strong number",n);
	}
	else
	{
		printf("%d is not a strong number",n);
	}
}