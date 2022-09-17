#include "main.h"

/**
 * print_diagonal - return a valur for upper case
 * @n: defines c as some integer
 *
 * Return: returns 1 for success
 */

void print_diagonal(int n)
{
	int x = 0, y;

	while (x < n && n > 0)
	{
		y = 0;

		while (y < x)
		{
			_putchar(' ');
			y++;
		}
		_putchar('\\');
		_putchar('\n');
		x++;
	}
	if (x == 0)
		_putchar('\n');
}
