/* This program is swaping the values of two numbers by using temp variable */
#include<stdio.h>
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
	printf("The number of b now is %d",b);
}
