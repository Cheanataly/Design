/* This program is about computing quotient and remainder */
#include<stdio.h>
main()
{
	int a,b,quo,rem;
	printf("Enter the number for a and b");
	scanf("%d%d",&a,&b);
	quo=a/b;
	printf("The quotient is %d",quo);
	rem=a%b;
	printf("The remainder is %d",rem);
}
