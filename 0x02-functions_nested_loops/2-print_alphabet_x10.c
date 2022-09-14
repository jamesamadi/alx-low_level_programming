#include "main.h"

/**
 * print_alphabet_×10 - prints alphabet 10 times
 *
 * Description: prints an alphabet.
 * Return: void
 */

void print_alphabet_x10(void)
{
	int b = '0';
	int a;

	while (b <= 10; b++)
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
