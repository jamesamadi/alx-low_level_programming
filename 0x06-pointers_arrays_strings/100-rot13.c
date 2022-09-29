#include "main.h"

/**
 * rot13 - prints some code
 * @s: holds some strings
 * holds some strings
 * number of characters
 * Return: void if successful
 */

char *rot13(char *s)
{
	int i = 0;

	while (s[i])
	{
		while ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
			{
				s[i] -= 13;
			}
			s[i] += 13;
		}
		i++;
	}
	return (s);
}
