#include "main.h"

/**
 * print_last_digit - prints alphabet 10 times
 *
 * Description: Make a while loop'
 * @n: ascii value to be tested
 * Return: void
 */

void times_table(void)
{
	int x, y, m;

	for (x = 0; x <=9; ++x)
	{
		_putchar('0');
		_putchar(',');
		for (y = 1; y <= 9; ++y)
		{
			m = x * y;
			if(m / 10 == 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + m);
			}
			else
			{
				_putchar(' ');
				_putchar('0' + m / 10);
				_putchar('0' + m % 10);
			}
			if (y < 9)
				_putchar(',');
			else
				_putchar('\n');
		}
	}
}
