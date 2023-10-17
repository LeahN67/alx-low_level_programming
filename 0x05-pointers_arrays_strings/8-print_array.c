#include <stdio.h>
#include "main.h"

/**
 * print_array - Entry point
 * to print n elements of an array of integers
 * followed by new line
 *
 * @a: array to be printed
 *
 * @n: the number of elements to print
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf ("%d", a[j]);
		if (j < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
