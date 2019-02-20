/* This program is swaping the value of two numbers without using third variable */
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
	printf("The number of a now = %d",a);
	printf("The number of b now = %d",b);
}
