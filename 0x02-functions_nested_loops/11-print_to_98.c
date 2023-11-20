#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from input to 98,
 *		separated by a comma followed ny space
 * @n: the number to bigin counting at.
 * Return: the natural numbers.
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
