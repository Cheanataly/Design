#include<stdio.h>
main()
{
	int a,b,c,d,e,f,g,h,i,j,to,avg;
	printf("Enter the number-1:");
	scanf("%d",&a);
	printf("Enter the number-2:");
	scanf("%d",&b);
	printf("Enter the number-3:");
	scanf("%d",&c);
	printf("Enter the number-4:");
	scanf("%d",&d);
	printf("Enter the number-5:");
	scanf("%d",&e);
	printf("Enter the number-6:");
	scanf("%d",&f);
	printf("Enter the number-7:");
	scanf("%d",&g);
	printf("Enter the number-8:");
	scanf("%d",&h);
	printf("Enter the number-9:");
	scanf("%d",&i);
	printf("Enter the number-10:");
	scanf("%d",&j);
	to=a+b+c+d+e+f+g+h+i+j;
	printf("The sum of all number is %d",to);
	avg=to/10;
	printf("\nThe average is %d",avg);
}
