#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string
 * Return: string length
*/

int _strlen_recursion(char *s)
{
	 int strlength = 0;

	if (*s > '\0')
	{
		strlength += _strlen_recursion(s + 1) + 1;
	}
	return (strlength);
}
