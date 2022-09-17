#include "main.h"

/**
 * print_square - return a valur for upper case
 * @size: defines c as some integer
 *
 * Return: returns 1 for success
 */

void print_square(int size)
{
	int x = 0, y;

	while (x < size && size > 0)
	{
		y = 0;

		while (y < size)
		{
			_putchar(35);
			y++;
		}
		_putchar('\n');
		x++;
	}
	if (x == 0)
		_putchar('\n');
}
