#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: square root of a number, or -1
*/
int _sqrt_recursion(int n)
{
	int high = n;
	int low = 1;
	int mid = (1 + n) / 2;

	if (n < 0) 
	{
		return (-1);
	}
	if (n == 0 || n == 1) 
	{
		return (n);
	}

	while (low < high) 
	{
		if (mid * mid == n)
		{
			return mid;
		}
		else if (mid * mid < n)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
		mid = (low + high) / 2;
	}

	return (-1);
}
