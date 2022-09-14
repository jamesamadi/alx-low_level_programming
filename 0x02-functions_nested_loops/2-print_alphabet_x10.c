#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Description: Make a while loop'
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int a;
	int b = 0;

	while (b < 10)
	{
		for (a = 'a'; a <= 'z';)
		{
			_putchar(a);
			a++;
		}

		_putchar('\n');

		b++;
	}
}
