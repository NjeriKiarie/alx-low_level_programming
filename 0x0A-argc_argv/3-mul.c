#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the results of the multiplication followed by a new line
 * @argc: Number of arguments
 * @argv: array of the arguments
 *
 * Return: 1 if not enough argumnet passed, o otherwise
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < 3; i++)
		{
			printf("argv[%d] = %s\n", i, argv[i]);
		}
		j = i;
		j = i * atoi(argv[i]);
		printf("Multiplication = %d\n", j);
	}

	return (0);
}
