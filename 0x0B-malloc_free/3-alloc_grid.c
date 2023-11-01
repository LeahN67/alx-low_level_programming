#include "main.h"

/**
 * alloc_grid - gives a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: pointer to the array.
 */

int **alloc_grid(int width, int height)
{
	int x;
	int y;
	int **result;

	if (height <= 0 || width <= 0)
		return (NULL);

	result = malloc(sizeof(int *) * height);

	if (result == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		result[x] = malloc(sizeof(int) * width);

		if (result[x] == NULL)
		{
			free(result);
			for (y = 0; y <= height; y++)
			       free(result[y]);
			return (NULL);
		}
		for (y = 0; y < width; y++)
			result[x][y] = 0;
	}
	return (result);
}
