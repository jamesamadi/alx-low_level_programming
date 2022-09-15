#include "main.h"

/**
 * print_to_98 - writes some _putchar
 *
 * Decription: prints _printchar
 * @n: numbers
 * Return: 0 (success)
 */

int print_to_98(int n)
{
	int i;
	int t;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar('0' + i);
			t = '0' + i;
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			_putchar('0' + i);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
		}
	}
	return (t);
}
