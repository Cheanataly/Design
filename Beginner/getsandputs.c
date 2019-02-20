#include<stdio.h>
main()
{
	char name[10],job[15],address[20];
	printf("Enter your name:");
	gets(name);
	fflush(stdin);
	printf("Enter your job:");
	gets(job);
	fflush(stdin);
	printf("Enter your address:");
	gets(address);
	fflush(stdin);
	printf("My name is ");
	puts(name);
	printf("I am ");
	puts(job);
	printf("My address is ");
	puts(address);
}
