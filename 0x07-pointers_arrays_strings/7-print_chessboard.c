#include "main.h"

/**
 * print_chessboard - returns pointer to the searched string
 * @a: string to be scanned
 * Return: the string of found words
 */

void print_chessboard(char (*a)[8])
{
	int j, i = 0;

	while (i < 64)
	{
		if ((i % 8) == 0 && i != 0)
		{
			j = i;
			_putchar('\n');
		}
		_putchar(a[i / 8][i - j]);
		i++;
	}
	_putchar('\n');
}
