#include "main.h"

/**
 * _isupper - return a valur for upper case
 * @c: defines c as some integer
 * Return: returns 1 for success
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
