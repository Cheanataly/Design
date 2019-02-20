#include<stdio.h>
main()
{
	int a,b,c=0;
	printf("Enter the number:");
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		c=c*10+b;
		a/=10;
	}
	printf("The reverse number is %d",c);
}
