#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Code prints things
 *
 *Return: 0 after completing loop
 */
int main(void)
{

	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar ('\n');
	return (0);
}
