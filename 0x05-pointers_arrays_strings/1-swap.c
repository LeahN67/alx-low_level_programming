#include "main.h"
#include <stdio.h>

/**
 * swap_int - Entry point.
 *
 * Description:function that swaps the value of two integers
 *
 * @a: pointer value to be swapped by b
 *
 * @b: pointer value to be swapped by a
 */
void swap_int(int *a, int *b)
{
	int y;

	y = *a;
	*a = *b;
	*b = y;
}

