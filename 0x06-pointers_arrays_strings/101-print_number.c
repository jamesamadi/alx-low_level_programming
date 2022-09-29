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
	int m, j, k;

	k = 10;
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	else 
		m = n;

	for (j = m % k; m / k >= 1;)
	{
		_putchar(j + '0');
		m = m / k;
	}
}
