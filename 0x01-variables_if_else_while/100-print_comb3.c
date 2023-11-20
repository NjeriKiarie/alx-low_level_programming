#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns all possible combinations of two different digits,
 *	in ascending order,
 *	separated by a comma followed by space
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, x;

	for (i = 0; i <= 9; i++)
	{
		for (x = i + 1; x < 10; x++)
		{
			putchar((i % 10) + '0');
			putchar((x % 10) + '0');
			if (i == 8 && x == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar ('\n');
	return (0);
}
