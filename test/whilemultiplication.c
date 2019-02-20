#include<stdio.h>
main()
{
	int a,b=1,c;
	printf("Enter the number which you want to multiple:");
	scanf("%d",&a);
	while(b<=10)
	{
		c=b*a;
		++b;
		printf("The multiplication is %d",c);
	}
	
}
