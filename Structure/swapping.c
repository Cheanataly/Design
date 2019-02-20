#include<stdio.h>
int swap(int c, int d);
main()
{
	int a,b;
	printf("Enter the number to a:");
	scanf("%d",&a);
	printf("Enter the number to b:");
	scanf("%d",&b);
	swap(a,b);	
}
int swap(int c, int d)
{
	c=c+d;
	d=c-d;
	c=c-d;
	printf("The swap number of a is %d",c);
	printf("\nThe swap number of b is %d",d);
}
