#include<stdio.h>
main()
{
	int i,j,space,row,d=1;
	printf("Enter the number of rows:");
	scanf("%d",&row);
	for(i=0;i<row;++i)
	{
		for(space=1;space<=row-i;++space)
		{
			printf(" ");
		}
		for(j=0;j<=i;++j)
		{
			if(j==0||i==0)
			d=1;
			else
			d=d*(i-j+1)/j;
			printf("%d",d);
		}
		printf("\n");
	}
}
