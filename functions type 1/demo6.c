perfect();
void main()
{
	perfect();
}
perfect()
{
	int i=1,s,n;
	printf("enter the number: ");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		{
			s=s+(i);
		}
		i++;
    }
	if (s==n)
	{
		printf("%d is a perfect number",n);
		
	}
	else
	{
		printf("%d is not a perfect number",n);
	}
	
}