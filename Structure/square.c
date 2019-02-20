#include<stdio.h>
int squ(int a);
main()	
{
	int s,b;
	printf("Enter the intager:");
	scanf("%d",&b);
	s=squ(b);
	printf("The square of the intager is %d",s);
}
int squ(int a)
{
	int s;
	s= a*a;
	return s;
}
