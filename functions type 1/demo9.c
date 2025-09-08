void main()
{
	int n,t,rev=0,r;
	printf("enter the number:o");
	scanf("%d",&n);
	t=n;
	for(;t>0;t=t/10)
	{
		r=t%10;
		rev=rev*10+r;
	}
	if(rev==n)
	{
		printf("%d is a pallindrome",n);
	}
}