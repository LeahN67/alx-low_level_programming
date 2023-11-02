#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: size of memory
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *result;

	result = malloc(b);

	if (result == NULL)
		exit(98);
	else
		return (result);
}
