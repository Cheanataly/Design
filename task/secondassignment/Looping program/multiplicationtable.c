#include<stdio.h>
main()
{
	int a,b=1,c;
	printf("Enter the multiplication number:");
	scanf("%d",&a);
	while(b<=10)
	{
		c=b*a;
		++b;
		printf("\nThe multiplication table is %d",c);
	}
}
