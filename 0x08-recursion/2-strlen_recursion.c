#include "main.h"

/**
 * _strlen_recursion - used to puts characters to a screen
 * @s: string to be displayed
 * Return: void
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
