#include "main.h"

/**
 * leet - prints some code
 * @s: holds some strings
 * holds some strings
 * number of characters
 * Return: void if successful
 */

char *leet(char *s)
{
	char c[5] = {'4', '3', '0', '7', '1'};
	char t[5] = {'a', 'e', 'o', 't', 'l'};
	int j, i = 0;

	while (s[i])
	{
		for (j = 0; j < 5; j++)
		{
			if (t[j] == s[i] || s[i] == (t[j] - 32))
			{
				s[i] = c[j];
			}
		}
		i++;
	}
	return (s);
}
