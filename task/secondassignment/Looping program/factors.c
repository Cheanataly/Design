#include<stdio.h>
main()
{
	int a,b,c,i=1;
	printf("Enter the number:");
	scanf("%d",&a);
	while(i<=a)
	{
		b=a%i;
		if(b==0)
		{
			printf("The factor of given number is");
			printf("%d",i);
		}
		++i;
	}
}
