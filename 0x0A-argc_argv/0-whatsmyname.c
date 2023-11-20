#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints my name
 *
 * @argc: counts the number of parameters
 * @argv: Pointer of array of pointers
 *
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
