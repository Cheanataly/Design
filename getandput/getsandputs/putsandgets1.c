#include<stdio.h>
main()
{
	char a[16];
	puts("Enter your name:");
	gets(a);
	fflush(stdin);
	puts("My name is");
	puts(a);
}
