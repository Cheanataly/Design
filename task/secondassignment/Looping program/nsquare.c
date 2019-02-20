#include<stdio.h>
main()
{
	int a,b,i;
	printf("Enter the N square:");
	scanf("%d",&a);
	for(i=1;i<=a;++i)
	{
		b=i*i;
		printf("\nThe square of N is %d",b);
	}
}
