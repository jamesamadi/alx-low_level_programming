#include "main.h"

/**
 * _print_rev_recursion - used to puts characters to a screen
 * @s: string to be displayed
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s);
	}
}
