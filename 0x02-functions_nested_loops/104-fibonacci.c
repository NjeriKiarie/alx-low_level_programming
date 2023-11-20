#include <stdio.h>

/**
 * main - prints the first 98 Fibonaci digits
 *	starting with 1 and 2
 *	separated by a comma and space
 *
 * Return: Always 0.
 */

int main(void)
{
	int c;
	unsigned long f1 = 0, f2 = 1, sum;
	unsigned long f1_half1, f1_half2, f2_half1, f2_half2;
	unsigned long half1, half2;

	for (c = 0; c < 92; c++)
	{
		sum = f1 + f2;
		printf("%lu, ", sum);

		f1 = f2;
		f2 = sum;

	}

	f1_half1 = f1 / 10000000000;
	f2_half1 = f2 / 10000000000;
	f1_half2 = f1 % 10000000000;
	f2_half2 = f2 % 10000000000;

	for (c = 93; c < 99; c++)
	{
		half1 = f1_half1 + f2_half1;
		half2 = f1_half2 + f2_half2;
		if (f1_half2 + f2_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}

		printf("%lu%lu", half1, half2);
		if (c != 98)
			printf(", ");

		f1_half1 = f2_half1;
		f1_half2 = f2_half2;
		f2_half1 = half1;
		f2_half2 = half2;
	}
	printf("\n");
	return (0);
}
