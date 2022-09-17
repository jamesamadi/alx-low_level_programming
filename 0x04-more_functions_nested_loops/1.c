#include <stdio.h>
#include <stdlib.h>

/**
 * main - return a valur for upper case
 * Description: defines c as some integer
 *
 * Return: returns 1 for success
 */

int main(void)
{
	int n, x, y;
	n = 0;

	while (n <= 10)
	{
		for  (x = 0; x < n; x++)
		{
			y = 0;

			while (y <= x)
			{
				putchar(' ');
				y++;
			}
			putchar('\\');
			putchar('\n');
		}
	}
	putchar('\n');
	return (0);
}
