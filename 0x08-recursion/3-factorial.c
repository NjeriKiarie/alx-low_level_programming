#include "main.h"

/**
 * factorial - function that returns thr factorial of a
 * gven numbe
 * @n: the number given
 *
 * Return: if n>0 return 1 and if n<0 returns -1.
 */

int factorial(int n)
{
	int i = n;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);

	i *= factorial(n - 1);

	return (i);
}
