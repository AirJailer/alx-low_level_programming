#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: given integer
 * @val: value to try with
 * Return: natural square root of n
*/

int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - gets square of an int
 * @n: given int
 * @val: value to try with
 * Return: int
*/

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
