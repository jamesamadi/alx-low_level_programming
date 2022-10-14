#include "main.h"

/**
 * _strstr - returns pointer to the searched string
 * @haystack: string to be scanned
 * @needle: string to scan for.
 * Return: the string of found words
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
	return (haystack);

	while (*haystack)
	{
		i = 0;

	if (haystack[i] == needle[i])
	{
		do {
			if (needle[i + 1] == '\0')
			return (haystack);
			i++;
		} while (haystack[i] == needle[i]);
	}
	haystack++;
	}
	return ('\0');
}
