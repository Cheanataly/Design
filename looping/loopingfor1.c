#include<stdio.h>
main()
{
	int i,n,multi=1;
	printf("Enter the value for n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		multi=multi*i;
	}
	printf("The multiplication all of the numbers is %d",multi);
	printf("\nThe multiplication of %d numbers is %d",n,multi);
}
