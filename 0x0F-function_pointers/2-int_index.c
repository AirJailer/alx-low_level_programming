#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @size: number of elements in the array
 * @array: to search in
 * @cmp: pointer to the function
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
