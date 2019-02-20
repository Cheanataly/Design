#include<stdio.h>
/* This program is for computing Quotient and Remainder */
main()
{
	int a,b,quo,re;
	printf("Enter the number to a");
	scanf("%d",&a);
	printf("Enter the number to b");
	scanf("%d",&b);
	quo=a/b;
	printf("The quotient is %d",quo);
	re=a%b;
	printf("\nThe remainder is %d",re);
}
