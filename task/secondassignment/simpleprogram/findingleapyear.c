#include<stdio.h>
main()
{
	int a,b;
	printf("Enter the year:");
	scanf("%d",&a);
	b=a%4;
	if(b==0)
	{
		printf("The given year is Leap year.");
	}
	else
	{
		printf("The given year is not Leap year.");
	}
}
