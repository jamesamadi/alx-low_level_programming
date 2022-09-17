#include <stdio.h>
#include "main.h"
/**
 * main - return a valur for upper case
 * Description: view n
 * Return: returns 1 for success
 */

int main(void)
{
	long a = 612852475143;
	long b = 2;
	long c = 0;

	while (a != 1)
	{
		if (a % b == 0)
		{
			a = a / b;
			c = b;
		}
		b = b + 1;
	}
	_putchar('0' + b);
	_putchar('\n');
	return (0);
}
