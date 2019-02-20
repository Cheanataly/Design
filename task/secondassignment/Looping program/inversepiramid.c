#include<stdio.h>
main()
{
	int i,j,k,row;
	printf("Enter the number of row:");
	scanf("%d",&row);
	for(i=row;i>=1;--i,k=0)
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
