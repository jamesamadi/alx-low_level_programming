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
	int a;
	int b = 0;

	while (b < 10)
	{
		for (a = '0'; a <= '14';)
		{
			_putchar(a);
			a++;
		}

		_putchar('\n');

		b++;
	}
}
