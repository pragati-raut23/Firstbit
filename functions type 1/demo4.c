prime();
void main()
{
	prime();
}
prime()
{
	int n,i,k=0;
	printf("enter the number: ");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			k++;
		}
	}
	if(k==1)
	{
		printf("the nummber %d is prime",n);
	}
	else
	{
		printf("the number %d is not an prime",n);
	}
}