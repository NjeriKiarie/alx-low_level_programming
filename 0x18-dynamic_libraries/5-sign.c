#include "main.h"
#include <limits.h>

/**
 * print_sign - a function that prints the sign of a number
 * @n: the int to be checked
 *
 * Return: 1 & prints ++ if n is greater than 0
 *		0 & prints 0 if n is zero
 *		-1 & prints - if n is less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
