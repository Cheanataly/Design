#include<stdio.h>
main()
{
	int num,i=0;
	printf("Enter the number:");
	scanf("%d",&num);
	while(i<=num)
	{
		printf("The even numbers are %d",i);
		i=i+2;
	}
}
