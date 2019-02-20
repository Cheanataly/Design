#include<stdio.h>
main()
{
	int a,b,c=0,d;
	printf("Enter the number:");
	scanf("%d",&a);
	d=a;
	while(a!=0)
	{
		b=a%10;
		c=c*10+b;
		a/=10;
	}
	printf("The reverse number is %d",c);
	if(c==d)
	{
		printf("\nThe given number is palindrome.");
	}
}
