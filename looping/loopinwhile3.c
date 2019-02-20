#include<stdio.h>
main()
{
	int m,n,multi;
	printf("Enter the value to m:");
	scanf("%d",&m);
	while(n!=11)
	{
	  multi=m*n;
	  ++n;
	  printf("\nThe multiplication is %d",multi);
	}
}
