#include<stdio.h>
main()
{
	char name[21],address[31];
	gets(name);
	gets(address);
	fflush(stdin);
	puts("Your name is ");
	puts(name);
	puts("Your address is");
	puts(address);
}
