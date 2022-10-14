#include "main.h"

/**
 * _strcmp - prints some code
 * @s2: holds some strings
 * @s1: holds some strings
 * Return: void if successful
 */

int _strcmp(char *s1, char *s2)
{
	int i, value;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	value = s1[i] - s2[i];
	return (value);
}
