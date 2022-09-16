#include <stdio.h>
#include <stdlib.h>

/**
 * main - writes some _putchar
 *
 * Decription:  prints _printchar
 *
 * Return: 0 (success)
 */

int main(void)
{
	int a = 0, b = 1, next = 0;
	int sum = 0;

	while (next < 4000000)
	{
		next = a + b;
		a = b;
		b = next;
		if (next % 2 == 0)
		{
			sum = next + sum;
		}

	}
	printf("%d\n", sum);
	return (0);
}
