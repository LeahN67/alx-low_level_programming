#include "main.h"

/**
 * reverse_array - reverse an array
 *
 * @a: array to reverse
 *
 * @n: number of elements in the array
 */
void reserve_array(int *a, int n)
{
	int x;
	int y;
	int temp;

	y = x - 1;

	for (x = 0; x < n / 2; x++)
	{
		temp = a[x];
		a[x] = a[y];
		a[y--] = temp;
	}
}
