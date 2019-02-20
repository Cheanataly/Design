#include<stdio.h>
struct date
{
	int day;
	int month;
	int year;
};
struct employee
{
    char name[20];
	int no;
	int salary;
	struct date doj;
}emp;
int main()
{
	printf("Enter the employee name:");
	scanf("%s",&emp.name);
	printf("Enter the sequence of employee:");
	scanf("%d",&emp.no);
	printf("Enter the employee salary:");
	scanf("%d",&emp.salary);
	printf("Enter the employee date of joining the company(DD/MM/YY):");
	scanf("%d%d%d",&emp.doj.day,&emp.doj.month,&emp.doj.year);
	printf("\n\n");
	printf("The employee name is %s",emp.name);
	printf("\nThe sequence number of employee is %d",emp.no);
	printf("\nThe salary of employee is %d",emp.salary);
	printf("\nThe date of joining %d/%d/%d",emp.doj.day,emp.doj.month,emp.doj.year);
}
