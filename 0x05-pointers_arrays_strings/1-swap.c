#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: int paramter 1
 * @b: int paramter 2
 *
 * Return: nothing
 *
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
