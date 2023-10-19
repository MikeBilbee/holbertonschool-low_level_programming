#include "main.h"
/**
 * is_prime_check - checks if a given number is prime
 * @n: numerator
 * @d: denominator
 * Return: 1 if prime, otherwise 0
*/
int is_prime_check(int n, int d)
{
	if (d == 1)
	{
		return (1);
	}
	if (n % d == 0)
	{
		return (0);
	}
	else
	return (is_prime_check(n, d - 1));
}

/**
 * is_prime_number - Tells user if a given number is prime
 * @n: number
 * Return: 1 if prime, otherwise 0
*/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (is_prime_check(n, n / 2) > 0)
	{
		return (1);
	}
	return (0);
}
