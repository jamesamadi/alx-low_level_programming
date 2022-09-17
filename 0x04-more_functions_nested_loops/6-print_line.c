#include "main.h"

/**
 * print_line - return a valur for upper case
 * @n: defines c as some integer
 *
 * Return: returns 1 for success
 */

void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for  (a = 0;a < n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
