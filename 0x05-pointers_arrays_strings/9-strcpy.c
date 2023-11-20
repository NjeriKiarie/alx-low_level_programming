#include <stdio.h>
#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src,
 * @dest: points to the buffer
 * @src: points to the string
 *
 * Return: Returns the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}

	*(dest + i) = '\0';

	return (dest);
}
