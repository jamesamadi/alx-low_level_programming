#include "main.h"

/**
 * _isalpha - prints alphabet 10 times
 *
 * Description: Make a while loop'
 * @c: ascii value to be tested
 * Return: void
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
