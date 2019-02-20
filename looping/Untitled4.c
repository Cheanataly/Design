#include<stdio.h>
main()
{
	int num,rem,reverse=0,temp;
	printf("Enter the number:");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
	   rem=num%10;
	   reverse=reverse*10+rem;
       num/=10;	   
    }
    printf("The reverse of the number is %d",reverse);
    if(temp==reverse)
    {
    	printf("The given number is polindrome");
	}
	else
	{
		printf("The given number is not polindrome");
	}
}



