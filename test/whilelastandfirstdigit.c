#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the number:");
	scanf("%d",&a);
	b=a%10;
	while(a>=10)
	{
		a/=10;
	}
	c=a+b;
	printf("The first digit of the number is %d",a);
	printf("\nThe last digit of the number is %d",b);
	printf("\nThe sum of first digit and last digit is %d",c);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nThe first digit of the number now is %d",a);
	printf("\nThe last digit of the number now is %d",b);
}
