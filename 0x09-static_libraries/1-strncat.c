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
	int a, p;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (p = i, a = 0; src[a] != '\0' && a < n;  p++)
	{
		dest[p] = src[a];
		a++;
	}
	dest[p] = '\0';
	return (dest);
}
