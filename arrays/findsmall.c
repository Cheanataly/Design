#include<stdio.h>
main()
{
	int j,b[5],s;
	printf("Enter the number to array:\n");
	for(j=0;j<5;++j)
	{
		scanf("%d",&b[j]);
	}
	s=b[0];
	for(j=0;j<5;++j)
	{
		if(b[0]<s)
		{
			s=b[j];
		}
		else
		{
			continue;
		}
	}
	printf("The smallest number among array is %d",s);
}
