#include "lists.h"

/**
 * listint_len -  returns the number of elements in a linked listint_t list.
 * @h: list items
 * Return: list size
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
