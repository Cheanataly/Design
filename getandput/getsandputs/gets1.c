#include<stdio.h>
main()
{
	char name[10],gender[20],interests[30];
	gets (name);
	fflush(stdin);
	gets (gender);
	fflush(stdin);
	gets (interests);
	fflush(stdin);
	puts ("My name is");
	puts (name);
	puts ("I am");
	puts (gender);
	puts ("I love");
	puts (interests);
}
