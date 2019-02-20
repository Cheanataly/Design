#include<stdio.h>
struct Distance{
	int feet;
	float inch;
}d1,d2,sum;
main()
{
	printf("1st distance\n");
	printf("Enter feet"); /* input of feet for structure variable d2 */
	scanf("%d",&d1.feet);
	printf("Enter inch");
	scanf("%f",&d1.inch); /* input of inch for structure variable d2 */
	printf("2nd distance\n");
	printf("Enter feet");
	scanf("%d",&d2.feet); /* input of feet for structure variable d2 */
	printf("Enter inch");
	scanf("%f",&d2.inch); /* input of inch for structure variable d2 */
	sum.feet=d1.feet+d2.feet;
	sum.inch=d1.inch+d2.inch;
	if(sum.inch>=12)   //If inch is greater than 12,changing it to feet.
	{
		++sum.inch;
		sum.inch=sum.inch-12;
	}
	printf("Sum of distance=%d.%.0f",sum.feet,sum.inch); /*printing sumn of distance d1 and d2 */
}
