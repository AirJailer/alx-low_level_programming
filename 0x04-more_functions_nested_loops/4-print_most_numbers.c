#include "main.h"

/**
 * print_numbers - prints unmbers from 0 to 9 except 2 and 4
 *
 * Return: 0 in success
*/

void print_numbers(void)
{
	int num = 0;

	for (num = 0; num <= 9; num++)
	{
		if (num == 2 || num == 4)
			continue;
		_putchar(num + 48);
	}
	_putchar('\n');
}
