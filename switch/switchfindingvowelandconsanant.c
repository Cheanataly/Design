/* The purpose of this program is finding the vowel or consanant */
#include<stdio.h>
main()
{
	char alp;
	printf("Enter the alphabet");
	alp=getchar();
	fflush(stdin);
	switch (alp)
	{
		case 'a':
		printf(" The given alphabet is vowel");
		break;
		case 'e':
		printf(" The given alphabet is vowel");
		break;
		case 'i':
		printf(" The given alphabet is vowel");
		break;
		case 'o':
		printf(" The given alphabet is vowel");
		break;
		case 'u':
		printf(" The given alphabet is vowel");
		break;
		default:
		printf(" The given alphabet is consanant");
		break;
	}
}
