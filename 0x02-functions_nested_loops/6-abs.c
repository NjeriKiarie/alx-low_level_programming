#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 * @i: the integer
 * Return: the absolute value
 */

int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);
}
