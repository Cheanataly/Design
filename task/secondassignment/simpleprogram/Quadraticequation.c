#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c;
	float d,r1,r2;
	printf("Enter a,b,c of the quadratic equation");
	scanf("%f%f%f",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>0)
	{
		printf("Both of roots are real number.");
		r1=(-b-sqrt(d))/(2*a);
		r2=(-b+sqrt(d))/(2*a);
		printf("The root 1=%f.\n The root 2=%f",r1,r2);
	}
	else if (d==0)
	{
		printf("Both of roots are equal.");
		r1=-b/(2*a);
		printf("Root1=Root2=%f",r1);
	}
	else if(d<0)
	{
		printf("Both of roots are complex number");
		printf("%.3f%+.3fi",-b/(2*a),sqrt(-d)/(2*a));
        printf("\n%.3f%+.3fi",-b/(2*a),-sqrt(-d)/(2*a));
	}
}
