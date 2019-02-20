#include<stdio.h>
main()
{
	int math,physics,biology,english,chemistry,total,average;
	printf("Enter the mark for math");
	scanf("%d",&math);
	printf("Enter the mark for physics");
	scanf("%d",&physics);
	printf("Enter the mark for biology");
	scanf("%d",&biology);
	printf("Enter the mark for english");
	scanf("%d",&english);
	printf("Enter the mark for chemistry");
	scanf("%d",&chemistry);
	printf("The math subject mark is %d",math);
	printf("\nThe physics subject mark is %d",physics);
	printf("\nThe biology subject mark is %d",biology);
	printf("\nThe english subject mark is %d",english);
	printf("\nThe chemistry subject mark is %d",chemistry);	
	total=math+physics+biology+english+chemistry;
	average=total/5;
	printf("\nYour total mark is %d",total);	
	printf("\nYour avarage is %d",average);	
	if (average>=90)
	{
		printf("\nYour overall grade is A");
	}
	else if ((average>=70)&&(average<90))
	{
		printf("\nYour overall grade is B");
	}
	else if ((average>=50)&&(average<70))
	{
		printf("\nYour overall grade is C");
	}
	else if (average<50)
	{
		printf("\nYour overall grade is Fail");
	}
}
