#include "main.h"

/**
 * print_times_table - prints alphabet 10 times
 *
 * Description: Make a while loop'
 * @n: integer numbers
 * Return: void
 */

void print_times_table(int n)
{
	int x, y, m, p;

	if (n >= 1 && n <= 15)
	{
		for (x = 0; x <= n; ++x)
		{
			_putchar('0');
			_putchar(',');
			for (y = 1; y <= n; ++y)
			{
				m = x * y;
				p = m / 10;
				if (m / 10 == 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + m);
				}
				else if (m < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + p);
					_putchar('0' + m % 10);
				}
				else
				{
					_putchar(' ');
					_putchar('0' + p / 10);
					_putchar('0' + p % 10);
					_putchar('0' + m % 10);
				}
			if (y < n)
				_putchar(',');
			else
				_putchar('\n');
			}
		}
	}
}
