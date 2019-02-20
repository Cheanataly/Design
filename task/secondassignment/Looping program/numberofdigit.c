#include<stdio.h>
main()
{
	int a,b=0;
	printf("Enter the number:");
	scanf("%d",&a);
	while(a!=0)
	{
		a/=10;
		++b;
	}
	printf("The number of the digit is %d",b);
}
