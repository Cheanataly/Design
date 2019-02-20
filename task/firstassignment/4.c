#include<stdio.h>
/* This program is swaping the values of two numbers using temp variable */
main()
{
	int a,b,temp;
	printf("Enter the number to a");
	scanf("%d",&a);
	printf("Enter the number to b");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("The number of a now is %d",a);
	printf("\nThe number of b now is %d",b);
}
