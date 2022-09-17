#include "main.h"

/**
 * print_line - return a valur for upper case
 * @n: defines c as some integer
 *
 * Return: returns 1 for success
 */

void print_line(int n)
{
	if (n > 0)
	{
		int a = 0;

		while (a < n)
		{
			_putcha('_');
			a++;
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
