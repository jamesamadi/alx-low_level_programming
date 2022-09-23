#include "main.h"

/**
 * _strcpy - to point a pointer to 98
 * @dest: interger value
 * @src: string to copy
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
