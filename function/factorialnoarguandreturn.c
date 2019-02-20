#include<stdio.h>
int num();
int main()
{
	int time=1,i,j;
	j=num();
	while(i<=j)
	{
		time=time*i;
		++i;
	}
	printf("The factorial is %d",time);
}
int num()
{
	int num;
	printf("Enter the integer:\n");
	scanf("%d",&num);
	return num;
}
