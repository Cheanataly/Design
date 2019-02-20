#include<stdio.h>
main()
{
	int a,b,c=0;
	printf("Enter the number:");
	scanf("%d",&a);
	while (a!=0)
	{
		b=a%10;
		a/=10;
		c=c*10+b;
	}
	printf("The reverse of the given number is %d",c);
}
