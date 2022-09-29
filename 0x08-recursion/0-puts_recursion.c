#include "main.h"

/**
 * _puts_recursion - used to puts characters to a screen
 * @s: string to be displayed
 * Return: void
 */

void _puts_recursion(char *s)
{
	int n = 0;

	if (s[n] == '\0')
	{
		_putchar('\n');
		return;

	}

	_putchar(s[n]);
	n++;
	_puts_recursion(s[n]);
}
