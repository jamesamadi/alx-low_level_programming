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
	int a = 0;
	long b = 1, c = 2;

	while (a < 50)
	{
		if (a == 0)
		{
			printf("%ld, ", b);
		}
		else if (a == 1)
		{
			printf("%ld, ", c);
		}
		else
		{
			c = b + c;
			b = c - b;
			printf("%ld, ", c);
		}
		a++;
	}
	putchar('\n');
	return (0);
}
