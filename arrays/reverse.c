#include<stdio.h>
main()
{
	int i,a[15];
	printf("Enter the number to array:\n");
	for(i=0;i<15;++i)
	{
		scanf("%d",&a[i]);
	}
	printf("The sorting number of array is");
	for(i=14;i>=0;--i)
	{
		printf("%d ",a[i]);
	}
}
