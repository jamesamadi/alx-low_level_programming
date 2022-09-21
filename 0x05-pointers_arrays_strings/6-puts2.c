#include "main.h"

/**
 * puts2 - to point a pointer to 98
 * @str: interger value
 * Return: void
 */

void puts2(char *str)
{
	int l = 0;

	while (str[l] != '\0')
	{
		if (l % 2 == 0)
		{
			_putchar(str[l]);
		}
		l++;
	}
	_putchar('\n');
}
