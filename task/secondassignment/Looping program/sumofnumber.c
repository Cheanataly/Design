#include<stdio.h>
main()
{
	int a,b,c=0;
	printf("Enter the number:");
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		a/=10;
		c=c+b;
	}
	printf("The sum of number is %d",c);
}
