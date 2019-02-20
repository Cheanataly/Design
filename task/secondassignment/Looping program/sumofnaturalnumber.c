#include<stdio.h>
main()
{
	int i,j,sum=0;
	printf("Enter the n number:");
	scanf("%d",&j);
	for (i=1;i<=j;++i)
	{
		sum=sum+i;
	}
	printf("The sum of natural number is %d",sum);
}
