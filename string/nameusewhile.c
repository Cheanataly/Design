#include<stdio.h>
main()
{
	char name[30],ch;
	int i=0;
	printf("Enter your name:");
	while(ch!='\n')
	{
		scanf("%c",&ch);
		name[i]=ch;
		i++;
	}
	name[i]='\0';
	printf("Your name is %s",name);
}
