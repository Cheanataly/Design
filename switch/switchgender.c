#include<stdio.h>
main()
{
	char gender;
	printf("Input F for female and M for Male");
	scanf("%c",&gender);
	switch (gender)
	{
		case 'F':
		printf("Your gender is Female");
		break;
		case 'M':
		printf("Your gender is Male");
		break;
	default:
		printf("Please input the valid character");
		break;
	}
}
