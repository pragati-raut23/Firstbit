sumseries();
void main()
{
	sumseries();
}
sumseries()
{
	int n,i,s=0;
	printf("enter the number: ");
	scanf("%d",&n);
	for(i=1;i<=n;)
	{
		s=s+(i++);
	}
	printf("%d",s);
}