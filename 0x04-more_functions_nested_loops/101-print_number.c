#include "main.h"
#include <stdio.h>

/**
 * print_number - a function that prints an integer.
 * @n: the interger to print
 *
 * Return: Nothing
 */

void print_number(int n)
{
	unsigned int k = n;

	if (n < 0)
	{
		_putchar('-');
		k = -k;
	}

	if ((k / 10) > 0)
		print_number(k / 10);

	_putchar((k % 10) + '0');
}
