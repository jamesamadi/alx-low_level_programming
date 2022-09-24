#include "main.h"

/**
 * _strcmp - prints some code
 * @s2: holds some strings
 * @s1: holds some strings
 * Return: void if successful
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, n = 0, value;

	for (; s1[i] != '\0'; i++)
	{
		if (s2[n] != '\0')
		{
			s1[n] == s2[n];
			n++;
		}
	}
	value = i - n;
	return (value);
}
