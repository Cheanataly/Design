#include<stdio.h>
main()
{
	int i,j,row,k=0;
	printf("Enter the number of row:");
	scanf("%d",&row);
	for(i=1;i<=row;++i,k=0)
	{
		for(j=1;j<=row-i;++j)
		{
			printf(" ");
		}
		while(k!=2*i-1)
		{
			printf("*");
			++k;
		}
		printf("\n");
	}
}
