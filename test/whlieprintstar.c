#include<stdio.h>
main()
{
	int i,j,k;
	printf("Enter the number of star you want:");
	scanf("%d",&i);
	while(i!=0)
	{
		i/=1;
		++j;
	}
	k=j;
		printf("%d",k);
}
