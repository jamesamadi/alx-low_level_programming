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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for  (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
