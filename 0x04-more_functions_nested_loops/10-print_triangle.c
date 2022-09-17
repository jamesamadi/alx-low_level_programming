#include "main.h"

/**
 * print_triangle - return a valur for upper case
 * @size: defines c as some integer
 *
 * Return: returns 1 for success
 */

void print_triangle(int size)
{
	int x = 1, y;

	while (x <= size && size > 0)
	{
		y = 0;

		while (y < size - x)
		{
			_putchar(' ');
			y++;
		}
		y = 0;
		while (y < x)
		{
			_putchar('#');
			y++;
		}

		_putchar('\n');
		x++;
	}
	if (size < 1)
		_putchar('\n');
}
