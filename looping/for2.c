#include<stdio.h>
main()
{
	int i,j,sum=0;
	printf("Enter the num:");
	scanf("%d",&i);
	for(j=0;j<=i;j++)
	{
		sum=sum+j;
	}
	printf("The total is %d",sum);
}
