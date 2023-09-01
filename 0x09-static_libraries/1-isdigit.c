#include "main.h"

/**
 * _isdigit - check if c is a digit
 *
 * @c: input for digit
 *
 * Return: return 1 if digit otherwise return 0
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
