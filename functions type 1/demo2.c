printtable();
void main()
{
	printtable();
}
printtable()
{
	int n,i=1;
	printf("enter the number whose table is required: ");
	scanf("%d",&n);
	while (i<=10)
	{
		printf("\n%d",n*(i++));
	}
}