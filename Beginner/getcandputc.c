#include<stdio.h>
main()
{
	char a,b,c;
	printf("Enter the alphabet:");
	a=getc(stdin);
	fflush(stdin);
	putc(a,stdout);
}
