#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the addition of positive numbers,
 * @argc: arguments counts.
 * @argv: arguments array.
 *  Return: If one of the numbers contains symbols that are non-digits - 1.
 */


int main(int argc, char *argv[])
{
	int x, y, sum = 0;

	for (x = 1;  x < argc ; x++)
	{
		for (y = 0; argv[x][y]; y++)
		{
			if (argv[x][y] < '0' || argv[x][y] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[x]);
	}

	printf("%d\n", sum);

	return (0);
}
