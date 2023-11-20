#include "main.h"

/**
 * print_line - draws a straightline in the terminal
 * @n: the number of _ characters to be printed.
 *
 * Return: Always 0
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}
