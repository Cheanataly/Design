#include<stdio.h>
main()
{
	char alp;
	printf("Enter the character:");
	scanf("%c",&alp);
	switch (alp)
	{
		case 'a':
		printf("The given character is vowel.");
		break;
		case 'e':
		printf("The given character is vowel.");
		break;
		case 'i':
		printf("The given character is vowel.");
		break;
		case 'o':
		printf("The given character is vowel.");
		break;
		case 'u':
		printf("The given character is vowel.");
		break;
		default:
		printf("The given character is consanant.");
		break;		
	}
}
