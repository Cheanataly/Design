/* Source code to demonstrate, handling of pointers in c program */
#include<stdio.h>
int main()
{
	int *pc;
	int c;
	c=22;
	printf("Address of c:%d\n",&c);
	scanf("Value of c:%d\n\n",c);
	pc=&c;
	printf("Address of pointer pc:%d\n",pc);
	scanf("Content of pointer pc:%d\n\n",*pc);
	c=11;
	printf("Address of pointer pc:%d\n",pc);
	printf("Content of pointer pc:%d\n\n",*pc);
	*pc=2;
	printf("Value of c:%d\n\n",c);
	return 0;
}
