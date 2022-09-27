#include "main.h"

/**
 * _strspn - replacesn numbers of memory set with the set value
 * @s: string or arrays
 * @accept: character to replace
 * number of times to repeat replacement
 * Return: void if empty
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}

			else if (accept[i + 1] == '\0')
			{
				return (n);
			}
		}

		s++;
	}

	return (n);
}
