#include<stdio.h>
main()
{
	int a,b;
	printf("Enter the temperature in celsius:");
	scanf("%d",&a);
	b=(a*1.8)+32;
	printf("The Fehrenheit of given temperature is %d",b);
}
