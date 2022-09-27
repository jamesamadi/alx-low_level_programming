#include "main.h"

/**
 * _strspn - replacesn numbers of memory set with the set value
 * @s: string or arrays
 * @accept: character to replace
 * number of times to repeat replacement
 * Return: void if empty
 */

nsigned int _strspn(char *s, char *accept)
{
	int i = 0, n = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == accept[n])
		{
			n++;
		}
		j = j + n;
		i++;
	}
	return (j);
}
