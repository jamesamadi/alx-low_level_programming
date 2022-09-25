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
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
