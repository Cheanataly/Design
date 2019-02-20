#include<stdio.h>
main()
{
	int a,b,c,simpleinterest;
	printf("Enter the principal amount");
	scanf("%d",&a);
	printf("Enter the number of years");
	scanf("%d",&b);
	printf("Enter the rate of interest");
	scanf("%d",&c);
	simpleinterest=a*b*c/100;
	printf("the Simple interest is %d",simpleinterest);
}
