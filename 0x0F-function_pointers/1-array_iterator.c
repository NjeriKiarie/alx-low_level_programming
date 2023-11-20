#include <stdio.h>
#include "function_pointers"

/**
 * array_iterator - a function that executes a function given as a parameter
 *			on each element of an array.
 * @array: is an array pointer
 * @size: is the size of the array
 * @action: is a pointer to the function to use
 *
 * Return: void.
 */

void array_iterator(int *array, size_t size, void (*action)(int));
{
	int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size >)
		{
			action(array[i]);
			i++;
		}
	}
}
