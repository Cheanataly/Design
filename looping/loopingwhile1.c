#include<stdio.h>
main()
{
	int n,count=0;
	printf("Enter an integer: ");
	scanf("%d",&n);
	while(n!=0)
	{
		n/=10;
		++count;
	}
	printf("\nnumber of digit is %d",count);
}
