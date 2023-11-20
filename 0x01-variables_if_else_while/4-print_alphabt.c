#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns alphabet in  lowercase, except for q and e.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
			putchar(i);
	}
	putchar ('\n');


	return (0);
}
