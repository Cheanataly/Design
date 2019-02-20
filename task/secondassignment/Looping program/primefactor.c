#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("Enter the number:");
	scanf("%d",&a);
	printf("The prime factor of %d are: \n",a);
	for(b=2;b<=a;b++)
	{
		if (a%b==0)
		{
			d=1;
			for (c=2;c<=b/2;c++)
		{
			if(b%c==0)
			{
				d=0;
				break;
			}
		}
			if(d==1)
			{
				printf("%d,",b);
			}

		}
	}
}
