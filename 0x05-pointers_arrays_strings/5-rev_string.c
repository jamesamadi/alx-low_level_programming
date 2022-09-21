#include "main.h"

/**
 * rev_string - to point a pointer to 98
 * @s: interger value
 * Return: void
 */

void rev_string(char *s)
{
	int l, a = 0, half;
	char temp;

	for (l = 0; s[l] != '\0'; l++)
		;
	half = l / 2;

	while (half--)
	{
		temp  = s[l - a - 1];
		s[l - a - 1] = s[a];
		s[a] = temp;

		a++;
	}
}
