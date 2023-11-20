#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns lowercase alphabets in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar ('\n');
	return (0);
}
