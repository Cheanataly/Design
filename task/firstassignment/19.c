#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the number to a");
	scanf("%d",&a);
	printf("Enter the number to b");
	scanf("%d",&b);
	printf("Enter the number to c");
	scanf("%d",&c);
	if (a>b)
	{
	  if (a>c)
	  {
	  	printf("a is the largest");
	  }
	  else
	  {
	  	printf("c is the largest");
	  }
	}
	else
	{
	  if (b>c)
	  {
	  	printf("b is the largest");
	  }
	  else
	  {
	  	printf("c is the largest");
	  }
	}
}
