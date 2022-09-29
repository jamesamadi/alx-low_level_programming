#include "main.h"

/**
 * _puts_recursion - used to puts characters to a screen
 * @s: string to be displayed
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;

	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
