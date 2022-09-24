#include "main.h"

/**
 * _strncat - prints some code
 * @dest: holds some strings
 * @src: holds some strings
 * @n: number of characters
 * Return: void if successful
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int a, n;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (n = i, a = 0; src[a] != '\0' && a < n;  n++)
	{
		dest[n] = src[a];
		a++;
	}
	dest[n] = '\0';
	return (dest);
}
