#include<stdio.h>
main()
{
	int n1,n2,minmulti;
	printf("Enter the number-1:");
	scanf("%d",&n1);
	printf("Enter the number-2:");
	scanf("%d",&n2);
	minmulti=(n1>n2)?n1:n2;
	while(1)
	{
		if(minmulti%n1==0&&minmulti%n2==0)
		{
			printf("The LCM of %d and %d is %d",n1,n2,minmulti);
			break;
		}
		++minmulti;
	}
}
