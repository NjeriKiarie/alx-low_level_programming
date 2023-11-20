#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns alphabet in  lowercase and then in uppercase.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;

	/*print lowercase letters*/
	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);

	putchar ('\n');
	return (0);
}
