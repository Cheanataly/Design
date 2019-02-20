#include<stdio.h>
main()
{
	char ch;
	printf("1.press + for addition");
	printf("\n2.press - for subtraction");
	printf("\n3.press * for multiplication");
	printf("\n4.press / for division");
	printf("\n5.press % for mudulo division");
	scanf("%c",&ch);
	switch (ch)
	{
	case '+':
		printf("ADDITION");
		break;
	case '-':
		printf("SUBTRACTION");
		break;
	case '*':
		printf("MULTIPLICATION");
		break;
	case '/':
		printf("DIVISION");
		break;
	case '%':
		printf("MODULO DIVISION");
		break;
	default:
		printf("Give a valid input");
	    break;
	}
}
