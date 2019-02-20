#include<stdio.h>
main()
{
	int i,j,row,num=1;
	printf("Enter the number of row:");
	scanf("%d",&row);
	for(i=1;i<=row;++i)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",num);
			num=num+1;
		}
		printf(" \n");
	}
}
