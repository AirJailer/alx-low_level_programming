#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: binary number
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int bet = sizeof(n) * 8, printed = 0;

	while (bet)
	{
		if (n & 1L << --bet)
		{
			_putchar('1');
			printed++;
		}
		else if (printed)
			_putchar('0');
	}
	if (!printed)
		_putchar('0');
}
