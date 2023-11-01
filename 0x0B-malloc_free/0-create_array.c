#include "main.h"

/**
 * create_array - creates an array of chars
 * and initializes it with a specific char
 * @size:size of  array
 * @c: characters to be stored in the array
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int x;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		array[x] = c;
	return (array);
}
