#include<stdio.h>
main()
{
	int i,j,k=0,row;
	printf("Enter the number os rows:");
	scanf("%d",&row);
	for(i=1;i<=row;++i,k=0)
	{
		for(j=1;j<=row-i;++j)
		{
			printf(" ");
		}
		while(k!=2*k-1)
		{
			printf("*");
			++k;
		}
		printf("\n");
	}
}
