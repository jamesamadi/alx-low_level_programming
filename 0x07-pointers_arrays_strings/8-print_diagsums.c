#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - returns pointer to the searched string
 * @a: string to be scanned
 * @size: required diagonal size
 * Return: the string of found words
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	for (i = 0; i < size; i++)
	{
		j = (i * size) + i;
		sum1 += a[j];
	}
	for (i = 0; i <= size; i++)
	{
		j = (i * size) - i;
		sum2 += a[j];
	}
	printf("%d, %d\n", sum1, sum2);
}
