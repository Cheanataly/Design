#include<stdio.h>
#include<math.h>
main()
{
	int num,orignum,rem,result=0,n=0;
	printf("Enter the number:");
	scanf("%d",num);
	orignum=num;
	while(orignum!=0)
	{
		orignum/=10;
		++n;
	}
	orignum=num;
	while(orignum!=0)
	{
		rem=orignum%10;
		result+=pow(rem,n);
		orignum/=10;
	}
	if(num==result)
	{
		printf("\n%d is an Armstrong number.",num);
	}
	else
	{
		printf("\n%d is not an Armstrong number.",num);
	}
}
