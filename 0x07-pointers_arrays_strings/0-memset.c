#include "main.h"

/**
 * _memset - replacesn numbers of memory set with the set value
 * @s: string or arrays
 * @b: character to replace
 * @n: number of times to repeat replacement
 * Return: void if empty
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (s[i])
	{
		if (i < n)
		{
			s[i] = b;
		}
		i++;
	}
}
