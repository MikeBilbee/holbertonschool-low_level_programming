#include "main.h"
/**
 * is_prime_number - checks if a given number is prime
 * @n: number
 * Return: 1 if prime, otherwise 0
*/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2 || n == 3)
	{
		return (1);
	}
	if (n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}
	return (is_prime_number(n / 2 + 1));
}