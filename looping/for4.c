#include<stdio.h>
main()
{
	int a,b,c=1;
	printf("Enter the num:");
	scanf("%d",&a);
	for (b=1;b<=a;b++)
	{
		c=c*b;
	}
	printf("The multiplication is %d",c);
}
