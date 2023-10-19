#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: the array.
 * @n: elements of the array.
 */

void reverse_array(int *a, int n)
{
	int x;
	int j;

	x = 0;
	while (x < n)
	{
		n--;
		j = a[x];
		a[x] = a[n];
		a[n] = j;
		x++;
	}
}
