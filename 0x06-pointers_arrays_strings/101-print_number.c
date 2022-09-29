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
	unsigned int m, j, k;

	if (n < 0)
	{
		n *= -1;
		m = n;
		_putchar('-');
	}
	else
	{
		m = n;
	}
	j = m;
	k = 1;

	while (j > 9)
	{
		j = j / 10;
		k = k * 10;
	}

	for (; k >= 1; k = k / 10)
	{
		_putchar(((m / k) % 10) + '0');
	}
}
