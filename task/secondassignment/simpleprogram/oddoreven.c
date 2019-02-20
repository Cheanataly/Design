#include<stdio.h>
main()
{
	int a,b;
	printf("Enter the number:");
	scanf("%d",&a);
	b=a%2;
	if(b==0)
	{
		printf("The given number is even.");
	}
	printf("The given number is odd.");
}
