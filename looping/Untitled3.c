#include<stdio.h>
main()
{
	int num,n=1,multi;
	printf("Enter the number:");
	scanf("%d",&num);
	while(n<=10)
	{
	   multi=num*n;
	   ++n;
	   printf("The sequence of multiplication is %d\n",multi);
	}
}
