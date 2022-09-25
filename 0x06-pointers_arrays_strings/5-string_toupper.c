#include "main.h"

/**
 * _string_upper - prints some code
 * @s: holds some strings
 *
 *
 * Return: void if successful
 */

char *string_toupper(char *s)
{
	int j;
	int i = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
			i++;
		}
	}
	return (s);
}
