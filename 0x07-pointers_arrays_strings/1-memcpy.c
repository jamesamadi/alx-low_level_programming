#include "main.h"

/**
 * _memset - replacesn numbers of memory set with the set value
 * @s: string or arrays
 * @b: character to replace
 * @n: number of times to repeat replacement
 * Return: void if empty
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
