#include "main.h"
/**
 * _findsqrt - finds the square root of a number
 * @v: value
 * @r: number under radical
 * Return: square root of a number
*/
int _findsqrt(int v, int r)
{
	if (v * v == r)
	{
		return (v);
	}
	if (v * v > r)
	{
		return (-1);
	}
	return (_findsqrt(v + 1, r));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: natural square root of a number, or -1
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (_findsqrt(1, n));
}
