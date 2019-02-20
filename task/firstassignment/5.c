#include<stdio.h>
main()
{
	int a,b;
	printf("Enter the number to a");
	scanf("%d",&a);
	printf("Enter the number to b");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("The number of a now is %d",a);
	printf("\nThe number of B now is %d",b);
}
