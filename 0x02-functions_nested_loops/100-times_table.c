#include "main.h"

/**
 * print_times_table - prints the times tanle of the input
 *		starting with 0
 * @n: the value of the times table printed.
 * Return: n
 */

void print_times_table(int n)
{
	int m, p, t;

	if (n >= 0 && n <= 15)
	{
		for (m = 0; m <= n; m++)
		{
			_putchar('0');

			for (p = 1; p <= n; p++)
			{
				_putchar(',');
				_putchar(' ');

				t = m * p;

				if (t <= 99)
					_putchar(' ');
				if (t <= 9)
					_putchar(' ');

				if (t >= 100)
				{
					_putchar((t / 100) + '0');
					_putchar(((t / 10)) % 10 + '0');
				}
				else if (t <= 99 && t >= 10)
				{
					_putchar((t / 10) + '0');
				}
				_putchar((t % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
