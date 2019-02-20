#include<stdio.h>
int main()
{
	char c[100],ch;
	int i,count=0;
	printf("Enter a string:");
	gets(c);
	printf("Enter a character to find frequency:");
	scanf("%c",&ch);
	for(i=0;c[i]!='\0';i++)
	{
		if(ch==c[i])
		++count;
	}
	printf("The repeat character is %c and %d time/times",ch,count);
}
