#include<stdio.h>
main()
{
	int a=0,b=0,n;
	printf("Enter the terms of number:");
	scanf("%d",&n);
	for(a=0;a<=n;++a)
	{
		printf("%d",a);
		b=b+a;
	}
	printf("\nThe sum of number is %d",b);
}
