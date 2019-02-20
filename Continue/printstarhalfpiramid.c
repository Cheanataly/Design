#include<stdio.h>
main()
{
	int i,j,row,num;
	printf("Enter the row you want:");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
