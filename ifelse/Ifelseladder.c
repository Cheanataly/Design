/* program to find the Grade for a particular subject */
#include<stdio.h>
main()
{
	int mark;
	printf("Enter the value for mark");
	scanf("%d",&mark);
	if ((mark>90)&&(mark<=100))
	{
		printf("Grade A");
	}
	else if ((mark>70)&&(mark<=90))
	{
		printf("Grade B");
	}
	else if ((mark>50)&&(mark<=70))
	{
		printf("Grade C");
	}
	else if (mark<50)
	{
		printf("FAIL");
	}
}
