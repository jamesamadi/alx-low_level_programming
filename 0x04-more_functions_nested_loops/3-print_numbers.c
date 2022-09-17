#include "main.h"

/**
 * print_numbers - return a valur for upper case
 *
 * Return: returns 1 for success
 */

void print_numbers(void)
{
	char a = '0';

	while (a <= '9')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
