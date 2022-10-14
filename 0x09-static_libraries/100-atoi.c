#include "main.h"
#include <stdio.h>
/**
 * _atoi - to point a pointer to 98
 * @s: interger value
 * Return: void
 */

int _atoi(char *s)
{
	int mark = 1;
	unsigned int a = 0;

	do {
		if (*s == '-')
			mark *= -1;
		else if (*s >= '0' && *s <= '9')
			a = (a * 10) + (*s - '0');
		else if (a > 0)
			break;
	} while (*s++);
	return (a * mark);
}
