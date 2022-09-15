#include "main.h"

/**
 * jack_bauer - prints alphabet 10 times
 *
 * Description: Make a while loop'
 *
 * Return: void
 */

void jack_bauer(void)
{
	int m;
	int h = 0;

	while (h <= 23)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar('0' + h / 10);
			_putchar('0' + h % 10);
			_putchar(':');
			_putchar('0' + m / 10);
			_putchar('0' + m % 10);
			_putchar('\n');
		}
		h++;
	}
}
