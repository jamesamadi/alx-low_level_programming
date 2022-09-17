#include "main.h"

/**
 * more_numbers - prints alphabet 10 times
 *
 * Description: Make a while loop'
 *
 * Return: void
 */

void more_numbers(void)
{
	int a, c;
	int b = 0;

	while (b < 10)
	{
		for (a = '0'; a <= '14';)
		{
			a = c;
			if (a > '9')
			{
				_putchar('1';
				c = a % 10;)
			}
			_putchar(c);
			a++;
		}

		_putchar('\n');

		b++;
	}
}
