#include<stdio.h>
main()
{
	int a,b=1,c;
	printf("Enter the number:");
	scanf("%d",&a);
	while(b<=a)
	{
		c=a/b;
		if((c==1)&&(c==a))
		{
			printf("The prime number is %d",b);
		}
		++b;
	}
}
