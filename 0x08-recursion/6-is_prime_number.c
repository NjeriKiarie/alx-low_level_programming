#include "main.h"

/**
 * is_prime_number - function returns 1 if the input is a prime
 *		number, otherwisereturn 0
 * @n: the input 
 *
 * Return: integer calue
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
