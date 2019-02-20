#include<stdio.h>
main()
{
	int a,b=1,i;
	printf("Enter the number:");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		b=b*i;
	}
	printf("The factorial of number is %d",b);
}
