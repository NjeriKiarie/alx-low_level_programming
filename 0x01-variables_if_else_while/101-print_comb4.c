#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns all possible combinations of three different digits,
 *	in ascending order,
 *	separated by a comma followed by space
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, x, y;

	for (i = 0; i <= 8; i++)
	{
		for (x = i + 1; x < 9; x++)
		{
			for (y = x + 1; y < 10; y++)
			{
				putchar((i % 10) + '0');
				putchar((x % 10) + '0');
				putchar((y % 10) + '0');
				if (i == 7 && x == 8 && y == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar ('\n');
	return (0);
}
