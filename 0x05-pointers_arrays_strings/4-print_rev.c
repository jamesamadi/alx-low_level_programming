#include "main.h"

/**
 * print_rev - to point a pointer to 98
 * @s: interger value
 * Return: void
 */

void print_rev(char *s)
{
	int l = 0;

	while (s[l])
	{
		l++;
	}
	while (l--)
		_putchar(s[l]);
	_putchar('\n');
}
