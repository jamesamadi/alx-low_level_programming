#include "main.h"

/**
 * print_number - prints some code
 * @n: holds some strings
 * holds some strings
 * number of characters
 * Return: void if successful
 */

void print_number(int n)
{
	int i, j, k;

	k = 10;
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}

	for (j = n % k, i = 0; n > 0; i++)
	{
		_putchar('j');
		n = j;
		k = k * 10;
	}
	if (n == 0)
	{
		_putchar('0');
	}
	_putchar('\n');
}
