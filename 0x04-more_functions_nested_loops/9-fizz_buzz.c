#include <stdio.h>
#include "main.h"


/**
 * main - Function to fizz for multiples of three  and Buzz for multiples of five
 *
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 1;

	while (i < 101)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s", "FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("%s", "Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("%s", "Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i != 100)
		{
		printf(" ");
		}
		i++;
	}
	printf("\n");
	return (0);
}
