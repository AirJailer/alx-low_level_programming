#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: given integer
 * Return: natural square root of n
*/

int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (cal * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
