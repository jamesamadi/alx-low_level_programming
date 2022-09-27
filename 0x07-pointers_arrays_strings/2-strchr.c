#include "main.h"

/**
 * _strchr - replacesn numbers of memory set with the set value
 * @s: string or arrays
 * @c: character to replace
 * number of times to repeat replacement
 * Return: void if empty
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	int n, j;
	char *p;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			n = 0;
			j = i + n;
			p[n]  = s[j];
			return (p);
		}
		else
			return (0);
	}
}
