#include<stdio.h>
main()
{
	int i,j,num,multi;
	printf("Enter the number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
	    for(j=1;j<=10;j++)
	    {
	    	multi=i*j;
	    	printf("\n%d * %d =%d",i,j,multi);
		}
	}
}
