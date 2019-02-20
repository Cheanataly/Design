#include<stdio.h>
main()
{
	int a,b,i;
	printf("Enter the number:");
	scanf("%d",&a);
	printf("The factor of given number are %d",a);
	for (i=1;i>=0;++i)
	{
		if(a%i==0)
		{
		printf("%d",i);	
		}
	}
}
