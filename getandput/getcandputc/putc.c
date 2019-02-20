#include<stdio.h>
main()
{
	char a,b;
	a=getc(stdin);
	fflush(stdin);
	putc(a,stdout);
	b=getc(stdin);
	fflush(stdin);
	putc(b,stdout);
	putc(a,stdout);
	putc(b,stdout);
}
