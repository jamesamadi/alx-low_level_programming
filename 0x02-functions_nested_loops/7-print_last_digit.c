#include "main.h"

/**
 * print_last_digit - prints alphabet 10 times
 *
 * Description: Make a while loop'
 * @n: ascii value to be tested
 * Return: void
 */

int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
	{
		n = n * -1;
	}
		_putchar('0' + n);
		return (n);
}
