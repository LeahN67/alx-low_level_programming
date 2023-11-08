#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - addition function
 * @a: element 1
 * @b: element 2
 * Return: summation of elements
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - get the difference of elements
 * @a: element 1
 * @b: element 2
 * Return: difference of elements
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply the elements
 * @a: element 1
 * @b: element 2
 *  Return: product of elements
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide the elements
 * @a: element 1
 * @b: element 2
 *  Return: dielement 1/element 2
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - get the modulus of elements
 * @a: element 1
 * @b: element 2
 * Return: modulus
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
