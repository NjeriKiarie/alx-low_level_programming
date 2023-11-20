#include <unistd.h>
#include "main.h"

/**
 * _putchar - returns the character c to stdout
 * c is the character to print
 * Return: Return 1 (Success) else -1
 */

int -putchar(char c)
{
	return (write(1, &c, 1));
}
