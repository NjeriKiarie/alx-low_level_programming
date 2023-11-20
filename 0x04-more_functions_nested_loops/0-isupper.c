#include "main.h"

/**
 * _isupper - checks if the character is uppercase
 * @c: is the variable text
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return  (0);
	}
}
