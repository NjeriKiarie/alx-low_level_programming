#include "main.h"

/**
 * puts2 - a function that prints only one character out of two
 *	 starting with the first character of a string
 * @str: the string input
 * Return: print character
 */

void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
