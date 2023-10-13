#include <stdio.h>
/**
 * main - prints the sum of all the multiples 
 *
 * @void: void
 *
 * Return: 0 Success
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
