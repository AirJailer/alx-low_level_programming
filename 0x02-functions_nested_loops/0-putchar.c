#include "main.h"

/**
 * main - entry point
 *
 * description: prints word _putchar
 *
 * Return: (0) success
*/

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}
