#include "main.h"

/**
 * print_most_numbers - return a valur for upper case
 * Description: prints
 *
 * Return: returns 1 for success
 */

void print_most_numbers(void)
{
	char c = 0;

	while (c <= 9)
	{
		_putchar(c + '0');
		c++;
	}
	_putchar('\n');
}
