#include<stdio.h>
main()
{
	int num,i=0;
	printf("Enter the number:");
	scanf("%d",&num);
	printf("The even number of %d are",num);
	while(i<=num)
	{
		printf("%d,",i);
		i=i+2;
	}
}
