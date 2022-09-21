#include "main.h"

/**
 * swap_int - to point a pointer to 98
 * @a: interger value
 * @b: intergre some values
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
