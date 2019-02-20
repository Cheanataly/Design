#include<stdio.h>
main()
{
	char a,b;
	a=getc(stdin);
	fflush(stdin);
	b=getc(stdin);
	fflush(stdin);
	putc(a,stdout);
	putc(b,stdout);
}
