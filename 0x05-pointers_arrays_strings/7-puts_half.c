#include "main.h"

/**
 * puts_half - to point a pointer to 98
 * @str: interger value
 * Return: void
 */

void puts_half(char *str)
{
	int len, l;

	for (len = 0; str[len] != '\0'; len++)
		;
	l = len / 2;
	for (l; str[l] != '\0'; l++)
	{
		if (str[l] != 0)
			_putchar(str[l]);
	}
	_putchar('\n');
}
