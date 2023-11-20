#include <stdio.h>
#include "function_pointers.h"


/**
 * print_name - function prints a name as is
 * @name: name ofthe person
 * @f: pointer of functon
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

		f(name);
}
