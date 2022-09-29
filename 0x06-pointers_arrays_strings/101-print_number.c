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
		_putchar('-');
	}
	else
		m = n;
	k = 10;

	for (; m > 0;)
	{
		j = m % k
		_putchar(j + '0');
		m = m / k;
	}
}
