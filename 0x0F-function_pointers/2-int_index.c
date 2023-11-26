#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches foran integer.
 * @array: An array pointer.
 * @size: The number of elements in the array.
 * @cmp: the pointer to the function to use anto compare the values.
 *
 * Return: The index of the first element
 *		if no element matches, reurn -1
 *		if size <= 0, rfeturn -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}
	return (-1);
}
