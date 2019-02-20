#include<stdio.h>
main()
{
	int i,b,a[5];
	printf("Enter the value of a \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	b=a[0];
	for(i=0;i<5;++i)
	{
		if(a[i]>b)
		{
			b=a[i];
		}
		else
		{
			continue;
		}
	}
	printf("The biggest number among array is %d",b);
}
