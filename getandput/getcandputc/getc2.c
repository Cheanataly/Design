#include<stdio.h>
main()
{
	char ntl;
	ntl= getc (stdin);
	fflush (stdin);
	putc (ntl,stdout);
	putc (ntl,stdout);
}
