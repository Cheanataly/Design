#include<stdio.h>
main()
{
	int i,j,a[3][3],b[3][3],c[3][3],d[3][3];
	printf("Enter the number to array a:\n");
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the number to array b:\n");
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("Enter the number to array c:\n");
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{
			scanf("%d",&c[i][j]);
		}
	}
	printf("d= \n");
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{
			d[i][j]=a[i][j]+b[i][j]-c[i][j];
			printf("%d ",d[i][j]);
		}
		printf("\n");
	}
	getch();
}
