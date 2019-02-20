#include<stdio.h>
int mul(int a, int b, int c);
int main()
{
	int num1,num2,num3,time;
	printf("Enter the number to three variable:\n");
	scanf("%d %d %d",&num1,&num2,&num3);
	time=mul(num1,num2,num3);
	printf("time=%d",time);
	return 0;
}
int mul(int a, int b, int c)
{
	int mul;
	mul=a*b*c;
	return mul;
}
