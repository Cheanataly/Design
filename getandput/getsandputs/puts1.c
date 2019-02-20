#include<stdio.h>
/* function to accept and displaying */
main()
{
	char in_str[21]; /* display promt */
	puts ("Enter a String of max 20 characters");
	gets (in_str); /* accept string */
	fflush (stdin); /* clear the buffer */
	puts (in_str); /* display input string */
}
