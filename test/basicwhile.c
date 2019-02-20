#include<stdio.h>
main()
{
	int a,b,c=0,d=0;
	printf("Enter the number:");
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		a/=10;
		++d;
		c=c+b;
	}
	printf("The sum of all digits is %d",c);
	printf("\nThe number of the digit is %d",d);
}
