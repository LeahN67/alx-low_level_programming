#include "main.h"

/**
 * ch_free_grid - frees a 2-D array.
 * @grid: multidimensional array of char.
 * @height: height of array.
 *
 * Return: 0
 */
void ch_free_grid(char **grid, unsigned int height)
{
	

/**
 * strtow - splits a string into words.
 * @str: string.
 *
 * Return: pointer of an array of integers
 */
 
 if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}
char **strtow(char *str)
{
	char **aout;
	unsigned int c, height, x, y, a1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
	{
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	}
	aout = malloc((height + 1) * sizeof(char *));
	if (aout == NULL || height == 0)
	{
		free(aout);
		return (NULL);
	}
	for (x = a1 = 0; x < height; x++)
	{
		for (c = a1; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a1++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				aout[x] = malloc((c - a1 + 2) * sizeof(char));
				if (aout[x] == NULL)
				{
					ch_free_grid(aout, x);
					return (NULL);
				}
				break;
			}
		}
		for (y = 0; a1 <= c; a1++, y++)
			aout[x][y] = str[a1];
		aout[i][j] = '\0';
	}
	aout[x] = NULL;
	return (aout);
}
