#include "main.h"

/**
 * cap_string - prints some code
 * @s: holds some strings
 *
 *
 * Return: void if successful
 */

char *cap_string(char *s)
{
	int j = 0;
	char c[] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125, ' ', '\t', '\n'};
	int i = 0;

	while (s[j])
	{
		for (i = 0; i < 13; i++)
			if (j == 0 || s[j] >= 'a' && s[j] <= 'z' && s[j - 1] == c[i])
			{
				s[j] = s[j] - 32;
			}
		j++;
	}
	return (s);
}
