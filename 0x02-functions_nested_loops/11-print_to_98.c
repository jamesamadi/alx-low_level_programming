#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - writes some _putchar
 *
 * Decription: prints _printchar
 * @n: numbers
 * Return: 0 (success)
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%i", i);
			if (i != 98)
			{
				printf(", ");
			}
			else
				printf("\n");
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			_putchar("%i", i);
			if (i != 98)
			{
				_putchar(", ");
			}
			else
				_putchar("\n");
		}
	}

}
