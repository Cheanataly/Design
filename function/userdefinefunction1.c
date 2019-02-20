#include<stdio.h>
int add(int a,int b,int c);    //function prototyped(declaration)
int main()
{
	int num1,num2,num3,sum;
	printf("Enter three number to add\n");
	scanf("%d %d %d",&num1,&num2,&num3);
	sum=add(num1,num2,num3);     //function calling
	printf("sum=%d",sum);
	return 0;
}
int add(int a, int b,int c)
{
	/*Start of function defintion*/
	int add;
	add=a+b+c;
	return add; //return statement of function
	/* End of function definition. */
}
