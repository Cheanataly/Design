#include<stdio.h>
main()
{
	int num,sum=0,rem;
	printf("Enter the number :");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		num=num/10;
		sum=sum+rem;
	
	}
	printf("The total is %d",sum);
}
