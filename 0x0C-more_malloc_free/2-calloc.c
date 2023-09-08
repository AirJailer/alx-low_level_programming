#include "main.h"
#include <stdlib.h>

/**
* *_calloc - allocates memory for an array, using malloc
* @nmemb: array length
* @size: size of each element
* Return: pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(sizeof(unsigned int) * nmemb);

	if (m == 0)
		return (NULL);
	nmemb *= size;
	while (nmemb--)
		m[nmemb] = 0;
	return (m);
}
