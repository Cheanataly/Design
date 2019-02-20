#include<stdio.h>
struct Time{
	int hour;
	float minute;
}t1,t2,sum;
main()
{
	printf("1st Time\n");
	printf("\nEnter the time:");
	scanf("%d",&t1.hour);
	printf("\nEnter the minute:");
	scanf("%f",&t1.minute);
	printf("\n2nd Time\n");
	printf("\nEnter the time:");
	scanf("%d",&t2.hour);
	printf("\nEnter the time");
	scanf("%f",&t2.minute);
	sum.hour=t1.hour+t2.hour;
	sum.minute=t1.minute+t2.minute;
	if(sum.minute>=60)
	{
		++sum.hour;
		sum.minute=sum.minute-60;
	}
	printf("\nThe sum of time is %d:%.0f",sum.hour,sum.minute);
}
