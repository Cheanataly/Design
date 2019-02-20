#include<stdio.h>
struct s
{
	char ch;
	char status[20];
	int size;
}v[2]={ "Yankee Doodle", "Deadly", 1813, "Dark Avenger", "Killer", 1795 };
main()
{
	int i;
	for(i=0;i<=1;i++)
	printf("\n%s %s",v[i].signature,v[i].status);
}
