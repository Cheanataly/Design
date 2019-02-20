#include<stdio.h>
main()
{
	int i,sum=0,a[5];
	printf("Enter the value to a:\n");
	for(i=0;i<5;++i)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
	}
	printf("The sum of array is %d",sum);	
}
