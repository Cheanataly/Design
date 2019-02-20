#include<stdio.h>
int facto(int n);
int main()
{
	int num,multi;
	printf("Enter the number:\n");
	scanf("%d",&num);
	multi=facto(num);
	printf("The factorial=%d",multi);
}
int facto(int n)
{
	if(n==1)
	return n;
	else
	return n*facto(n-1);
}
