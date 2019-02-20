#include<stdio.h>
main()
{
	int i,n,sum=0,num;
	printf("Enter the value for n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Enter the value for num:");
		scanf("%d",&num);
		if(num<=0)
		continue;
		sum=sum+num;
	}
	printf("The sum of positive number is %d",sum);
}
