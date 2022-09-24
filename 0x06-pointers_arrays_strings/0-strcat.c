#include "main.h"

/**
 * _strcat - prints some code
 * @dest: holds some strings
 * @src: holds some strings
 * Return: void if successful
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int a, n;

	while (dest++)
	{
		if (dest[i] != '\0')
			i++;
	}
	for (n = i, a = 0; n > 0;  n++)
	{
		dest[n] = src[a];
		a++;
	}
	return (dest);
}
