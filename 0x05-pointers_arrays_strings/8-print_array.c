#include "main.h"
#include <stdio.h>
/**
 * prints_array - to point a pointer to 98
 * @n: interger value
 * @a: integer value
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
