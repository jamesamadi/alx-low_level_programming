#include "main.h"

/**
 * _strncpy - prints some code
 * @dest: holds some strings
 * @src: holds some strings
 * @n: total number to hold
 * Return: void if successful
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		src[i] = dest[i];
		i++;
	}
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
