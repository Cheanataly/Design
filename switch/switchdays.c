#include<stdio.h>
main()
{
	int day;
	printf("Enter the number for day");
	scanf("%d",&day);
	switch (day)
	{
		case 1:
			printf(" It's Monday");
			break;
		case 2:
			printf("It's Tuesday");
			break;
		case 3:
			printf("It's Wednesday");
		case 4:
			printf("It's Thursday");
			break;
		case 5:
			printf("It's Friday");
			break;
		case 6:
			printf("It's Saturady");
			break;
		case 7:
			printf("It's Sunday");
			break;
		default:
			printf("Error! Your input is not valid");
	}
	
		
}
