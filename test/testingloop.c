#include<stdio.h>
main()
{
	int a,b=0,c,d;
	printf("Enter the number:");
	scanf("%d",&a);
	d=a;
	while(a!=0)
	{
		c=a%10;
		a/=10;
		b=b*10+c;
	}
	printf("The reverse number is %d",b);
	if(d==b)
	{
		printf("The given number is polindrome\n");
	}
	else
	{
		printf("The given number is not polindrome\n");
	}
}
