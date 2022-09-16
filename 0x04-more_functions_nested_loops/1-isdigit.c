#include "main.h"

/**
 * _isdigit - return a valur for upper case
 * @c: defines c as some integer
 * Return: returns 1 for success
 */

int _isdigit(int c)
{
	if (c <= '0' || c > '0')
	{
		return (1);
	}
	else
		return (0);
}
