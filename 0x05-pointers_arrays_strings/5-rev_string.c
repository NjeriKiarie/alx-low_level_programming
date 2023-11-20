#include "main.h"

/**
 * rev_string -a function that reverses a string
 * @s: input to reverse
 *
 * Return: the string in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int t = 0;
	int i;

	while (s[t] != '\0')
		t++;

	for (i = 0; i < t; i++)
	{
		t--;
		rev = s[i];
		s[i] = s[t];
		s[t] = rev;
	}
}
