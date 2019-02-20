#include<stdio.h>
int main()
{
	char f[20],l[20],name;
	printf("Enter your first name:");
	gets(f);
	printf("Enter your last name:");
	gets(l);
	name=stringconcatenation(f,l);       //
	printf("Your Full Name: %c",name);
}
