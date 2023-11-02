#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum value to be included
 * @max: maximum value to be included
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int x;
	int length;
	int *result;

	if (min > max)
		return (NULL);

	length = (max - min) + 1;
	result = malloc(sizeof(int) * length);
	if (result == NULL)
		return (NULL);

	for (x = 0; min < max; x++)
		result[x] = min++;
	return (result);
}
