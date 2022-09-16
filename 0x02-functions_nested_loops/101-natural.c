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
	int a, b = 0;

	while (a < 1024)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			b += a;
		}
		a++;
	}
	printf("%d\n", b);
	return (0);

}
