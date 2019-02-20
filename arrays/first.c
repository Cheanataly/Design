#include<stdio.h>
main()
{
	int i,a[5],sum=0,sub=0;
	printf("Enter the value for an array\n");
	for(i=0;i<5;++i)
	{
		scanf("%d",&a[i]);
	}
	printf("The aray values are");
	for(i=0;i<5;++i)
	{
		printf("%d ",a[i]);
	}
	for(i=0;i<5;++i)
	{
		sum=sum+a[i];	
	}
	printf("\nThe sum of the arrays is %d",sum);
	for(i=0;i<5;i++)
	{
		sub=a[i]-sub;	
	}
	printf("\nThe substraction of the arrays is %d",sub);
}
