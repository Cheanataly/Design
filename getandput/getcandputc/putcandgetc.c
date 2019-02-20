#include<stdio.h>
main()
{
	char name[10];
	puts("Enter your name:");
	gets(name);
	fflush(stdin);
	puts("My name is ");
	puts(name);
}
