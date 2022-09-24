#include "main.h"
#include <stdio.h>

/**
 * reverse_array - prints some code
 *
 * @a: holds some arrays
 * @n: number ofarrays to print
 * Return: void if successful
 */

void reverse_array(int *a, int n)
{
	int i = 0, p;

	while (a[i] != '\0')
	{
		i++;
	}
	p = i;
	for (; p > (i - n); p--)
	{
		_putchar(a[i]);
		if (p != (1 + (i - n)))
			printf(", ");
	}
}
