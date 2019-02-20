#include<stdio.h>
main()
{
	char low,upp;
	printf("Enter the lower character:");
	scanf("%c",&low);
	upp=low-32;
	printf("The upper character is %c",upp);
}
