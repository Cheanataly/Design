#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the terms of cube number:");
	scanf("%d",&a);
	for(b=1;b<=a;++b)
	{
		c=b*b*b;
		printf("\nThe cube of number is %d",c);
	}
}
