#include "main.h"

/**
 * factorial - used to puts characters to a screen
 * @n: string to be displayed
 * Return: void
 */

int factorial(int n)
{
	if (n == 0)
		return (0);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
