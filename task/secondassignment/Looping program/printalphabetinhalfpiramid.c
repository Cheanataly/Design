#include<stdio.h>
main()
{
	int i,j;
	char input,ch='A';
	printf("Enter the upper character that you want in last row:");
	scanf("%c",&input);
	for(i=1;i<=input-'A'+1;++i)
	{
		for(j=1;j<=i;++j)
		{
			printf("%c",ch);
		}
		++ch;
		printf("\n");
	}
}
