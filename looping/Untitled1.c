#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the number :");
	scanf("%d",&a);
	while (a!=0)
	{
	   a/=10;
	   ++b;
	}
	printf("The number of digit is %d",b);
}
