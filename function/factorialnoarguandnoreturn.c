#include<stdio.h>
void facto();
int main()
{
	facto();
	return 0;
}
void facto()
{
	int num,time=1,i;
	printf("Enter the number:\n");
	scanf("%d",&num);
	for(i=1;i<=num;++i) 
	{
	   time=time*i;
	}
	printf("The factorial=%d",time);
}
