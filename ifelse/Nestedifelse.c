#include<stdio.h>
main()
{
	char name;
	int password;
	printf("Enter the username");
	scanf("%char",&name);
	printf("Enter the password");
	scanf("%d",&password);
	if( name=='N')
	{
		if(password==101298)
		{
		printf("Login successful");
	    }
		else
		{
		printf("the password is wrong");
	    }
	}
	else
	{
		printf("the user name is wrong");
	}
}
