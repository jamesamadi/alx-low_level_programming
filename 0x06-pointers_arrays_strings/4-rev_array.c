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
	int i, temp, p, k;

	k = 0;
	p = n / 2;

	for (i = 0; i < p; i++)
	{
		temp = a[k];
		a[k] = a[(n - 1)];
		a[(n - 1)] = temp;
		k++;
		p++;
	}
}
