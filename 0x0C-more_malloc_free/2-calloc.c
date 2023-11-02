#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: elements of the array
 * @size: bytes of the array
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *result;

	if (nmemb == 0 || size == 0)
		return (NULL);

	result = calloc(nmemb, size);
	if (result == NULL)
		return (NULL);
	else
		return (result);
}

