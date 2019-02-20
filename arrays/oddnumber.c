#include<stdio.h>
main()
{
	int i,j,n[4][7];
	printf("Enter the number to array:\n");
	for(i=0;i<4;++i)
	{
		for(j=0;j<7;++j)
		{
			scanf("%d",&n[i][j]);
		}
	}
	printf("The given number to array is\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<7;++j)
		{
			printf("%d ",n[i][j]);
		}
		printf("\n");
	}
	printf("The odd number in array is\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<7;++j)
		{
			if(n[i][j]%2==1)
			{
				printf("%d,",n[i][j]);
			}
			else
			{
				continue;
			}
		}
	}
}
