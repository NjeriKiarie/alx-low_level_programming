#include "main.h"

/**
 * _sqrt_recursion - finds the natural sqrt of an inputted number.
 * @n: Natural number
 *
 * Return: sqrt 0 if sqrt is not natura.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (sqrt_manual(n, 1));
	}
}

/**
 * sqrt_manual - calculate manually the squareroot of a number.
 * @n: the number to find the square root of.
 * @root: the root to be testrd.
 *
 * Return: if the num has a square root - the square root
 *		if it doesnt - -1.
 */

int sqrt_manual(int n, int root)
{
	if ((root * root) == n)
		return (root);

	if (root == num / 2)
		return (-1);

	return (sqrt_manual(n, root + 1));
}
