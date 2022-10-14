#include "main.h"

/**
 * _puts - to point a pointer to 98
 * @str: interger value
 * Return: void
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a])
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
