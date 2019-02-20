#include<stdio.h>
main()
{
	int i,j,a[3][2];
	printf("Enter the value to array:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The given number to array is\n");
	for(i=0;i<3;++i)
	{
		for(j=0;j<2;++j)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("The even number in the array is ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;++j)
		{
			if(a[i][j]%2==0)
			{
				printf("%d,",a[i][j]);
			}
			else
			{
				continue;
			}
		}
	}
	
}
