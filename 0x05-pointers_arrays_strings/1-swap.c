#include "main.h"
#include <stdio.h>

/**
 * swap_int - a function thats swaps the value of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;

	*a = *b;

	*b = n;
}
