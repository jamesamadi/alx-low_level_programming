#include "main.h"

/**
 * print_diagonal - return a valur for upper case
 * @n: defines c as some integer
 *
 * Return: returns 1 for success
 */

void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
		for  (x = 0; x < n; x++)
		{
			y = 0;

			while (y <= x)
			{
				_putchar(' ');
				y++;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
