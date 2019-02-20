#include<stdio.h>
main()
{
	int a,b,c,d,e=0;
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	printf("Enter the term:");
	scanf("%d",&c);
	printf("The fibonacci are %d %d",a,b);
	while(e<c)
	{
		d=a+b;
		printf("%d",d);
		a=b;
		b=d;
		++e;
	}
	
}
