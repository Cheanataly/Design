#include<stdio.h>
main()
{
	int a,b,c;
	char ch;
	printf("press + or - or * or /or %%");
	ch=getchar();
	fflush(stdin);
	printf("Enter the value for a");
	scanf("%d",&a);
	printf("Enter the value for b");
	scanf("%d",&b);
	switch(ch)
	{
		case '+':
			c=a+b;
			printf("the addition value is %d",c);
			break;
		case '-':
			c=a-b;
			printf("the substraction value is %d",c);
			break;
		case '*':
			c=a*b;
			printf("the multiplication value is %d",c);
			break;
		case '/':
			c=a/b;
			printf("the division value is %d",c);
			break;
		case '%':
			c=a%b;
			printf("the modulo division is %d",c);
			break;
		default:
			printf("Give a valid input");
			break;
	}
}
