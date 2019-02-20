#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the value for a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b)
	{
		if (a>c)
		{
			printf("a is biggest");
		}
		else
		{
			printf("c is biggest");
		}
	}
	else
	{
	   if (b>c)
	   {
		printf("b is biggest");
	   }
	   else
	   {
	   	printf("c is biggest");
	   }
    }
	   
}
