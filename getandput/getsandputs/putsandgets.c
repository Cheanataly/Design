#include<stdio.h>
main()
{
	char name[21],address[31];
	puts("My name is");
	gets(name);
	fflush(stdin);
	puts("My address is");
	gets(address);
	fflush(stdin);
}
