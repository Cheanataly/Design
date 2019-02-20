#include<stdio.h>
main()
{
	int x,y,i,b=1;
	printf("Enter the value of power x:");
	scanf("%d",&x);
	printf("Enter the value of data base y:");
	scanf("%d",&y);
	for(i=1;i<=x;i++)
	{
		b=b*y;
	}
	printf("The value of x power y =%d",b);
}

