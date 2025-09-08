fact();
void main()
{
	fact();
	
}
fact()
{
	int n, mul=1,i;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
    {
    	mul=mul*i;
	}
	printf("%d",mul);

}