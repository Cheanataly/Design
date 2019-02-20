#include<stdio.h>
main()
{
	char month;
    printf("A for April");
    printf("\nJ for June");
    printf("\nS for September");
    printf("\nN for November");
    printf("\nF for February");
    printf("\nEnter the character of month");
    scanf("%c",&month);
	switch (month)
	{
		case 'A' :
		    printf("30 days");
		break;
		case 'J' :
		    printf("30 days");
		break;
		case 'S' :
		    printf("30 days");
		break;
		case 'N' :
		    printf("30 days");
		break;
		case 'F':
		    printf("28 days");
		break;
		default :
		    printf("31 days");
		break;	
	}
	return 0;
}
