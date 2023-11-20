#include "main.h"

/**
 * _pow_recursion - function returns the value of x raised to power of y.
 * @x: the number to be raised
 * @y: the power
 *
 * Return: The value of x raised to power y.
 */

int _pow_recursion(int x, int y)
{
	int i = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	i *= _pow_recursion(x, y - 1);

	return (i);
}
