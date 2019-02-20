#include<stdio.h>
int cube(int a);
int main()
{
	int b,c;
	printf("Enter the length of cube:\n");
	scanf("%d",&b);
	c=cube(b);
	printf("The cube is %d",c);
	return 0;
}
int cube(int a)
{
	int cube;
	cube=a*a*a;
	return cube;
}
