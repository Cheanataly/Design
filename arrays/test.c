#include<stdio.h>
main()
{
	int i,a[5],sum=0;
	printf("\nEnter the integar:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nThe reverse of array is ");
	for(i=4;i>=0;i--)
	{
		printf("%d",a[i]);
	}
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
	}
	printf("\nThe sum of array is %d",sum);

}
