#include "main.h"

/**
 * _strncpy - copys a string
 * @dest: the destination of the copied value
 * @src: the source
 * @n: the copy limit
 *
 * Return: char value
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (src[b])
	{
		b++;
	}

	while (a < n && src[a])
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
