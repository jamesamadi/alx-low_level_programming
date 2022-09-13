#include "main.h"

/**
 * print_alphabet - writes some _putchar
 *
 * Decription:  prints _printchar
 *
 * Return: 0 (Always)
 */

void print_alphabet(void)
{
int a;
	for (a = 'a'; a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}

